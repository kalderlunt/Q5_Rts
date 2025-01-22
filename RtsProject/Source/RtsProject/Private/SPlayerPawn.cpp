// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerPawn.h"

#include "SPlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
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
	TargetRotation = FRotator(Rotation.Pitch + -50, Rotation.Yaw, 0.f);

	// Assign player controller reference
	SPlayer = Cast<ASPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
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

void ASPlayerPawn::Forward(float AxisValue)
{
	if (AxisValue == 0.f)
	{
		return;
	}

	if (AxisValue >= 0.f)
		PrintMessage(TEXT("Forward Action"), 0.2f, FColor::Green);
	else
		PrintMessage(TEXT("Backward Action"), 0.2f, FColor::Green);
		
	TargetLocation = SpringArmComponent->GetForwardVector() * AxisValue * MoveSpeed + TargetLocation;
	GetTerrainPosition(TargetLocation);
}

void ASPlayerPawn::Right(float AxisValue)
{
	if (AxisValue == 0.f)
	{
		return;
	}
	
	if (AxisValue >= 0.f)
		PrintMessage(TEXT("Right Action"), 0.2f, FColor::Red);
	else
		PrintMessage(TEXT("Left Action"), 0.2f, FColor::Red);

	TargetLocation = SpringArmComponent->GetRightVector() * AxisValue * MoveSpeed + TargetLocation;
	GetTerrainPosition(TargetLocation);
}

void ASPlayerPawn::Zoom(float AxisValue)
{
	if (AxisValue == 0.f)
	{
		return;
	}

	if (AxisValue >= 0.f)
	{
		FString DebugMessage = FString::Printf(TEXT("Zoom Out Action"));
		PrintMessage(DebugMessage, 0.5f, FColor::Blue);
	}
	else
		PrintMessage(TEXT("Zoom In Action"), 0.5f, FColor::Blue);

	const float Zoom = AxisValue * 100.f;
	TargetZoom = FMath::Clamp(Zoom + TargetZoom, MinZoom, MaxZoom);
}

void ASPlayerPawn::RotateRight()
{
	PrintMessage(TEXT("Rotate Right Action"), 0.5f, FColor::Yellow);
	TargetRotation = UKismetMathLibrary::ComposeRotators(TargetRotation, FRotator(0.f, -45, 0.f));
}

void ASPlayerPawn::RotateLeft()
{
	PrintMessage(TEXT("Rotate Left Action"), 0.5f, FColor::Yellow);
	TargetRotation = UKismetMathLibrary::ComposeRotators(TargetRotation, FRotator(0.f, 45, 0.f));
}

void ASPlayerPawn::EnableRotate()
{
	PrintMessage(TEXT("Enable Rotate Action"), 1.f, FColor::Orange);
	CanRotate = true;
}


void ASPlayerPawn::DisableRotate()
{
	PrintMessage(TEXT("Disable Rotate Action"), 1.f, FColor::Orange);
	CanRotate = false;
}

void ASPlayerPawn::RotateHorizontal(float AxisValue)
{
	if (AxisValue == 0.f)
	{
		return;
	}

	if (CanRotate)
	{
		TargetRotation = UKismetMathLibrary::ComposeRotators(TargetRotation, FRotator(0.f, AxisValue, 0.f));
	}
}

void ASPlayerPawn::RotateVertical(float AxisValue)
{
	if (AxisValue == 0.f)
	{
		return;
	}
	
	if (CanRotate)
	{
		TargetRotation = UKismetMathLibrary::ComposeRotators(TargetRotation, FRotator(AxisValue, 0.f, 0.f));
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
			Right(EdgeScrollSpeed); // Right
		}
		else if (MousePosition.X < 0.02f && MousePosition.X > 0.f)
		{
			Right(-EdgeScrollSpeed); // Left
		}

		// Forward/Backward
		if (MousePosition.Y > 0.98f && MousePosition.Y < 1.f)
		{
			Forward(-EdgeScrollSpeed); // Backward
		}
		else if (MousePosition.Y < 0.02f && MousePosition.Y > 0.f)
		{
			Forward(EdgeScrollSpeed); // Forward
		}
	}
}

// Called every frame
void ASPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CameraBounds();
	EdgeScroll();
	
	// Move the pawn in the desired direction
	const FVector InterpolatedLocation = UKismetMathLibrary::VInterpTo(GetActorLocation(), TargetLocation, DeltaTime, MoveSpeed);
	SetActorLocation(InterpolatedLocation);

	// Zoom the camera in the desired direction
	const float InterpolatedZoom = UKismetMathLibrary::FInterpTo(SpringArmComponent->TargetArmLength, TargetZoom, DeltaTime, ZoomSpeed);
	SpringArmComponent->TargetArmLength = InterpolatedZoom;

	// Rotate the camera in the desired direction
	const FRotator InterpolatedRotation = UKismetMathLibrary::RInterpTo(SpringArmComponent->GetRelativeRotation(), TargetRotation, DeltaTime, RotateSpeed);
	SpringArmComponent->SetRelativeRotation(InterpolatedRotation);
}

// Called to bind functionality to input
void ASPlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &ASPlayerPawn::Forward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &ASPlayerPawn::Right);
	PlayerInputComponent->BindAxis(TEXT("Zoom"), this, &ASPlayerPawn::Zoom);
	PlayerInputComponent->BindAxis(TEXT("RotateHorizontal"), this, &ASPlayerPawn::RotateHorizontal);
	PlayerInputComponent->BindAxis(TEXT("RotateVertical"), this, &ASPlayerPawn::RotateVertical);
	
	PlayerInputComponent->BindAction(TEXT("RotateRight"), EInputEvent::IE_Pressed, this, &ASPlayerPawn::RotateRight);
	PlayerInputComponent->BindAction(TEXT("RotateLeft"), EInputEvent::IE_Pressed, this, &ASPlayerPawn::RotateLeft);
	PlayerInputComponent->BindAction(TEXT("Rotate"), EInputEvent::IE_Pressed, this, &ASPlayerPawn::EnableRotate);
	PlayerInputComponent->BindAction(TEXT("Rotate"), EInputEvent::IE_Released, this, &ASPlayerPawn::DisableRotate);
	
	PlayerInputComponent->BindAction(TEXT("MouseLeft"), EInputEvent::IE_Pressed, this, &ASPlayerPawn::MouseLeftPressed);
	PlayerInputComponent->BindAction(TEXT("MouseLeft"), EInputEvent::IE_Released, this, &ASPlayerPawn::MouseLeftReleased);
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


void ASPlayerPawn::PrintMessage(FString Message, float TimeToDisplay, FColor Color)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, Color, *Message);	
}

AActor* ASPlayerPawn::GetSelectedObject()
{
	// Check if we hit a actor we could potentially select
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

void ASPlayerPawn::MouseLeftPressed()
{
	
}

void ASPlayerPawn::MouseLeftReleased()
{
	if (SPlayer)
	{
		if(GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::White, TEXT("Handle_Selection"));	
		SPlayer->Handle_Selection(GetSelectedObject());
	}
}

void ASPlayerPawn::MouseRightPressed()
{
	
}

void ASPlayerPawn::MouseRightReleased()
{
	
}
