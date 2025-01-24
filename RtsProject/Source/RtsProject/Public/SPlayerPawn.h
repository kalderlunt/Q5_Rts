// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "SPlayerPawn.generated.h"

class ASelectionBox;
class ASPlayerController;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class RTSPROJECT_API ASPlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASPlayerPawn();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void GetTerrainPosition(FVector& TerrainPosition) const;
	
	UFUNCTION()
	void Forward(float AxisValue);

	UFUNCTION()
	void Right(float AxisValue);

	UFUNCTION()
	void Zoom(float AxisValue);

	UFUNCTION()
	void RotateRight();

	UFUNCTION()
	void RotateLeft();
	
	UFUNCTION()
	void EnableRotate();

	UFUNCTION()
	void DisableRotate();
	
	UFUNCTION()
	void RotateHorizontal(float AxisValue);
	
	UFUNCTION()
	void RotateVertical(float AxisValue);

	UFUNCTION()
	void EdgeScroll();
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float MoveSpeed = 20.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float EdgeScrollSpeed = 3.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float RotateSpeed = 2.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float RotatePitchMin = 10.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float RotatePitchMax = 80.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float ZoomSpeed = 2.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float MinZoom = 500.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Camera")
	float MaxZoom = 4000.f;
	
private:
	UFUNCTION()
	void CameraBounds();
	void PrintMessage(FString Message, float TimeToDisplay, FColor Color);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	USceneComponent* SceneComponent;
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	USceneComponent* CameraComponent;

	UPROPERTY()
	FVector TargetLocation;

	UPROPERTY()
	FRotator TargetRotation;

	UPROPERTY()
	float TargetZoom;

	UPROPERTY()
	bool CanRotate;

	/** Mouse Input **/
protected:

	UFUNCTION()
	AActor* GetSelectedObject();

	UFUNCTION()
	void MouseLeftPressed();

	UFUNCTION()
	void LeftMouseInputHeld(float AxisValue);

	UFUNCTION()
	void MouseLeftReleased();

	UFUNCTION()
	void MouseRightPressed();

	UFUNCTION()
	void MouseRightReleased();

	UFUNCTION()
	void CreateSelectionBox();

	UPROPERTY()
	ASPlayerController* SPlayer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Mouse")
	float LeftMouseHoldThreshold = 0.15f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Mouse")
	TSubclassOf<ASelectionBox> SelectionBoxClass;

	UPROPERTY()
	ASelectionBox* SelectionBox;

	UPROPERTY()
	bool BoxSelect;

	UPROPERTY()
	FVector LeftMouseHitLocation;

	/** Enhanced Input **/

	UFUNCTION()
	void Move(const FInputActionValue& Value);

	
};