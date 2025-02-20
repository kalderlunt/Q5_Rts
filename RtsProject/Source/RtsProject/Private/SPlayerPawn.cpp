// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerPawn.h"

#include "EngineUtils.h"
#include "EnhancedInputComponent.h"
#include "RtsProjectCharacter.h"
#include "SelectionBox.h"
#include "SPlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Input/PlayerInputActions.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASPlayerPawn::ASPlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 2000.f;
	SpringArmComponent->bDoCollisionTest = false;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(SpringArmComponent);

	MoveSpeed = 20.f;
	EdgeScrollSpeed = 30.f;
	RotateSpeed = 2.f;
	RotatePitchMin = 10.f;
	RotatePitchMax = 80.f;
	ZoomSpeed = 300.f;
	MinZoom = 500.f;
	MaxZoom = 4000.f;
	Smoothing = 2.f;
}

// Called when the game starts or when spawned
void ASPlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	// Set the initial desired zoom and location
	TargetLocation = GetActorLocation();
	TargetZoom = 3000.f;

	// Set an initial rotation for the camera
	const FRotator Rotation = SpringArmComponent->GetRelativeRotation();
	TargetRotation = FRotator(Rotation.Pitch - 50, Rotation.Yaw, 0.f);

	// Assign player controller reference
	SPlayer = Cast<ASPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	CreateSelectionBox();
}

// Called every frame
void ASPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CameraBounds();
	EdgeScroll();
	
	// Move the pawn in the desired direction
	const FVector InterpolatedLocation = UKismetMathLibrary::VInterpTo(GetActorLocation(), TargetLocation, DeltaTime, Smoothing);
	SetActorLocation(InterpolatedLocation);

	// Zoom the camera in the desired direction
	const float InterpolatedZoom = UKismetMathLibrary::FInterpTo(SpringArmComponent->TargetArmLength, TargetZoom, DeltaTime, Smoothing);
	SpringArmComponent->TargetArmLength = InterpolatedZoom;

	// Rotate the camera in the desired direction
	const FRotator InterpolatedRotation = UKismetMathLibrary::RInterpTo(SpringArmComponent->GetRelativeRotation(), TargetRotation, DeltaTime, Smoothing);
	SpringArmComponent->SetRelativeRotation(InterpolatedRotation);
}

// Called to bind functionality to input
void ASPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	const ASPlayerController* PlayerController = Cast<ASPlayerController>(GetController());

	// Set up action bindings
	if (IsValid(Input) && IsValid(PlayerController))
	{
		if (const UPlayerInputActions* PlayerActions = Cast<UPlayerInputActions>(PlayerController->GetInputActionsAsset()))
		{
			/** Default **/
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->Move, this, &ASPlayerPawn::Move);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->Look, this, &ASPlayerPawn::Look);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->Zoom, this, &ASPlayerPawn::Zoom);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->Rotate, this, &ASPlayerPawn::Rotate);
			EPlayerInputActions::BindInput_StartTriggerComplete(Input, PlayerActions->Select, this, &ASPlayerPawn::Select, &ASPlayerPawn::SelectHold, &ASPlayerPawn::SelectEnd);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->TestPlacement, this, &ASPlayerPawn::TestPlacement);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->SelectDoubleTap, this, &ASPlayerPawn::SelectDoubleTap);
			
			/** Placement **/
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->Place, this, &ASPlayerPawn::Place);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->PlaceCancel, this, &ASPlayerPawn::PlaceCancel);
			
			/** Shift **/
			EPlayerInputActions::BindInput_Simple(Input, PlayerActions->Shift, this, &ASPlayerPawn::Shift, &ASPlayerPawn::Shift);
			EPlayerInputActions::BindInput_TriggerOnly(Input, PlayerActions->ShiftSelect, this, &ASPlayerPawn::ShiftSelect);

			/** Alt **/
			EPlayerInputActions::BindInput_Simple(Input, PlayerActions->Alt, this, &ASPlayerPawn::Alt, &ASPlayerPawn::Alt);
			EPlayerInputActions::BindInput_StartTriggerComplete(Input, PlayerActions->AltSelect, this, &ASPlayerPawn::AltSelect, &ASPlayerPawn::SelectHold, &ASPlayerPawn::AltSelectEnd);

			/** Ctrl **/
			EPlayerInputActions::BindInput_Simple(Input, PlayerActions->Ctrl, this, &ASPlayerPawn::Ctrl, &ASPlayerPawn::Ctrl);
			EPlayerInputActions::BindInput_StartTriggerComplete(Input, PlayerActions->CtrlSelect, this, &ASPlayerPawn::CtrlSelect, &ASPlayerPawn::SelectHold, &ASPlayerPawn::CtrlSelectEnd);
		}
	}
}

void ASPlayerPawn::GetTerrainPosition(FVector& TerrainPosition) const
{
	FHitResult Hit;
	FCollisionQueryParams CollisionParams;
	FVector TraceOrigin = TerrainPosition;
	TraceOrigin.Z += 10000.f;
	FVector TraceEnd = TerrainPosition;
	TraceEnd.Z -= 10000.f;

	if (UWorld* WorldContext = GetWorld())
	{
		if (WorldContext->LineTraceSingleByChannel(Hit, TraceOrigin, TraceEnd, ECC_Visibility, CollisionParams))
		{
			TerrainPosition = Hit.ImpactPoint;
		}
	}
}

void ASPlayerPawn::EdgeScroll()
{
	if (UWorld* WorldContext = GetWorld())
	{
		FVector2D MousePosition = UWidgetLayoutLibrary::GetMousePositionOnViewport(WorldContext);
		const FVector2D ViewportSize = UWidgetLayoutLibrary::GetViewportSize(WorldContext);
		MousePosition = MousePosition * UWidgetLayoutLibrary::GetViewportScale(WorldContext);
		MousePosition.X = MousePosition.X / ViewportSize.X;
		MousePosition.Y = MousePosition.Y / ViewportSize.Y;

		// Right/Left
		if (MousePosition.X > 0.98f && MousePosition.X < 1.f)
		{
			// Right
			TargetLocation += SpringArmComponent->GetTargetRotation().RotateVector(FVector(0.f, 1.f, 0.f)) * EdgeScrollSpeed;
		}
		else if (MousePosition.X < 0.02f && MousePosition.X > 0.f)
		{
			// Left
			TargetLocation += SpringArmComponent->GetTargetRotation().RotateVector(FVector(0.f, -1.f, 0.f)) * EdgeScrollSpeed;
		}

		// Forward/Backward
		if (MousePosition.Y > 0.98f && MousePosition.Y < 1.f)
		{
			// Backward
			TargetLocation += SpringArmComponent->GetTargetRotation().RotateVector(FVector(-1.f, 0.f, 0.f)) * EdgeScrollSpeed;
		}
		else if (MousePosition.Y < 0.02f && MousePosition.Y > 0.f)
		{
			// Forward
			TargetLocation += SpringArmComponent->GetTargetRotation().RotateVector(FVector(1.f, 0.f, 0.f)) * EdgeScrollSpeed;
		}

		GetTerrainPosition(TargetLocation);
	}
}

void ASPlayerPawn::CameraBounds()
{
	float NewPitch = TargetRotation.Pitch;
	if (TargetRotation.Pitch < (RotatePitchMax * -1))
	{
		NewPitch = (RotatePitchMax * -1);
	}
	else if (TargetRotation.Pitch > (RotatePitchMin * -1))
	{
		NewPitch = (RotatePitchMin * -1);
	}

	// Set the new pitch and clamp any roll
	TargetRotation = FRotator(NewPitch, TargetRotation.Yaw, 0.f);
	/*
	// Clamp Desired location to within bounds
	TargetLocation = FVector(TargetLocation.X, TargetLocation.Y, 0.f);*/
}

AActor* ASPlayerPawn::GetSelectedObject()
{
	// Check if we hit an actor we could potentially select
	if (UWorld* World = GetWorld())
	{
		FVector WorldLocation;
		FVector WorldDirection;
		SPlayer->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
 		FVector End = WorldDirection * 1000000.f + WorldLocation;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);

		FHitResult Hit;
		if (World->LineTraceSingleByChannel(Hit, WorldLocation, End, ECC_Visibility, Params))
		{
			if (AActor* HitActor = Hit.GetActor())
			{
				return HitActor;
			}
		}
	}

	return nullptr;
}

void ASPlayerPawn::CreateSelectionBox()
{
	if (!SelectionBoxClass)
	{
		return;
	}

	if (UWorld* WorldContext = GetWorld())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Instigator = this;
		SpawnParams.Owner = this;
		SelectionBox = WorldContext->SpawnActor<ASelectionBox>(SelectionBoxClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
		if (SelectionBox)
		{
			SelectionBox->SetOwner(this);
		}
	}
}

void ASPlayerPawn::Move(const FInputActionValue& Value)
{
	if (!SpringArmComponent)
	{
		return;
	}

	if (ensure(Value.GetValueType() == EInputActionValueType::Axis2D))
	{
		TargetLocation += SpringArmComponent->GetTargetRotation().RotateVector(Value.Get<FVector>()) * MoveSpeed;
		GetTerrainPosition(TargetLocation);
	}
}

void ASPlayerPawn::Look(const FInputActionValue& Value)
{
	if (ensure(Value.GetValueType() == EInputActionValueType::Axis1D))
	{
		const float NewPitch = Value.Get<float>() * RotateSpeed * 0.5f;
		TargetRotation = FRotator(TargetRotation.Pitch + NewPitch, TargetRotation.Yaw, 0.f);
	}
}

void ASPlayerPawn::Rotate(const FInputActionValue& Value)
{
	if (ensure(Value.GetValueType() == EInputActionValueType::Axis1D))
	{
		const float NewRotation = Value.Get<float>() * RotateSpeed;
		TargetRotation = FRotator(TargetRotation.Pitch, TargetRotation.Yaw + NewRotation, 0.f);
	}
}

void ASPlayerPawn::Select(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Clear any current selection
	SPlayer->Handle_Selection(nullptr);

	// Reset box select
	BoxSelect = false;

	// Store the initial hit location
	SelectHitLocation = SPlayer->GetMousePositionOnTerrain();
}

void ASPlayerPawn::SelectHold(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	if ((SelectHitLocation - SPlayer->GetMousePositionOnTerrain()).Length() > 100.f)
	{
		if (!BoxSelect && SelectionBox)
		{
			SelectionBox->Start(SelectHitLocation, TargetRotation);
			BoxSelect = true;
		}
	}
}

void ASPlayerPawn::SelectEnd(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Check if there is an active box selection
	if (BoxSelect && SelectionBox)
	{
		// Use box fpr selection
		SelectionBox->End();

		// Reset box selection
		BoxSelect = false;
	}
	else
	{
		// if no box selection perform a single selection
		SPlayer->Handle_Selection(GetSelectedObject());
	}
}

void ASPlayerPawn::Zoom(const FInputActionValue& Value)
{
	if (ensure(Value.GetValueType() == EInputActionValueType::Axis1D))
	{
		TargetZoom = FMath::Clamp(TargetZoom + (Value.Get<float>() * ZoomSpeed), MinZoom, MaxZoom);
	}
}

void ASPlayerPawn::TestPlacement(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	SPlayer->SetPlacementPreview();
}

void ASPlayerPawn::SelectDoubleTap(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Get the selection under cursor
	if (AActor* Selection = GetSelectedObject())
	{
		if (ARtsProjectCharacter* SelectedCharacter = Cast<ARtsProjectCharacter>(Selection))
		{
			SPlayer->Handle_DeSelection(Selection);
			SelectedCharacter->Destroy();
		}
	}
}

void ASPlayerPawn::Shift(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("SHIFT : %s"), Value.Get<bool>() ? TEXT("ON") : TEXT("OFF"));
	SPlayer->SetInputShift(Value.Get<bool>());
}

void ASPlayerPawn::Alt(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// youtube : Enhanced Input Episode 4 Input Modifiers in Unreal Engine 5.1 C++ -> 10:00 je pense le probleme
	UE_LOG(LogTemp, Warning, TEXT("ALT : %s"), Value.Get<bool>() ? TEXT("ON") : TEXT("OFF"));
	SPlayer->SetInputAlt(Value.Get<bool>());
}

void ASPlayerPawn::Ctrl(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("CTRL : %s"), Value.Get<bool>() ? TEXT("ON") : TEXT("OFF"));
	SPlayer->SetInputCtrl(Value.Get<bool>());
}

void ASPlayerPawn::ShiftSelect(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}
	
	// Get the selection under cursor
	if (AActor* Selection = GetSelectedObject())
	{
		// Get selectionclass
		const TSubclassOf<AActor> SelectionClass = Selection->GetClass();

		TArray<AActor*> Actors;
		Actors.Add(Selection);

		for (TActorIterator<AActor> ActorItr(GetWorld(), SelectionClass); ActorItr; ++ActorItr)
		{
			AActor* Actor = *ActorItr;
			const float DistanceSquared = FVector::DistSquared(Actor->GetActorLocation(), SelectHitLocation);
			if (DistanceSquared <= FMath::Square(1000.f))
			{
				Actors.AddUnique(Actor);
			}
		}

		SPlayer->Handle_Selection(Actors);
	}
	else
	{
		SPlayer->Handle_Selection(nullptr);
	}
}

void ASPlayerPawn::AltSelect(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Reset box select
	BoxSelect = false;

	// Store the initial hit location
	SelectHitLocation = SPlayer->GetMousePositionOnTerrain();
}

void ASPlayerPawn::AltSelectEnd(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Check if there is an active box selection
	if (BoxSelect && SelectionBox)
	{
		// Use box for selection
		SelectionBox->End(false);

		// Reset box selection
		BoxSelect = false;
	}
	else
	{
		// if no box selection perform a single selection
		SPlayer->Handle_DeSelection(GetSelectedObject());
	}
}

void ASPlayerPawn::CtrlSelect(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Reset box select
	BoxSelect = false;

	// Store the initial hit location
	SelectHitLocation = SPlayer->GetMousePositionOnTerrain();
}

void ASPlayerPawn::CtrlSelectEnd(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	// Check if there is an active box selection
	if (BoxSelect && SelectionBox)
	{
		// Use box for selection
		SelectionBox->End(true, true);

		// Reset box selection
		BoxSelect = false;
	}
	else
	{
		// if no box selection perform a single selection
		if (AActor* Selection = GetSelectedObject())
		{
			SPlayer->Handle_Selection(Selection);
		}
	}
}

void ASPlayerPawn::Place(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	if (SPlayer->IsPlacementModeEnabled())
	{
		SPlayer->Place();
	}
}

void ASPlayerPawn::PlaceCancel(const FInputActionValue& Value)
{
	if (!SPlayer)
	{
		return;
	}

	if (SPlayer->IsPlacementModeEnabled())
	{
		SPlayer->PlaceCancel();
	}
}
