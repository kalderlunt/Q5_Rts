// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerPawn.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
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

// Called every frame
void ASPlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CameraBounds();
	
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

	// Clamp Desired location to within bounds
	TargetLocation = FVector(TargetLocation.X, TargetLocation.Y, 0.f);
}


void ASPlayerPawn::PrintMessage(FString Message, float TimeToDisplay, FColor Color)
{
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, TimeToDisplay, Color, *Message);	
}