// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "Engine/DataAsset.h"
#include "PlayerInputActions.generated.h"

class UInputAction;
class UInputMappingContext;
/**
 * 
 */
UCLASS(BlueprintType)
class RTSPROJECT_API UPlayerInputActions : public UDataAsset
{
	GENERATED_BODY()

public:
	/** Default Player Mapping Context */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputMappingContext* MappingContextDefault;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	int32 MapPriorityDefault;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* Move;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* Look;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* Zoom;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* Select;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* Rotate;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* TestPlacement;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Default")
	UInputAction* SelectDoubleTap;

	/** Modifier Keys **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Modifiers")
	UInputAction* Shift;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Modifiers")
	UInputAction* Alt;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Modifiers")
	UInputAction* Ctrl;
	

	/** Placement Mapping Context **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Placement")
	UInputMappingContext* MappingContextPlacement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Placement")
	int32 MapPriorityPlacement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Placement")
	UInputAction* Place;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Placement")
	UInputAction* PlaceCancel;

	
	/** Shift Mapping Context **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shift")
	UInputMappingContext* MappingContextShift;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shift")
	int32 MapPriorityShift;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Shift")
	UInputAction* ShiftSelect;

	
	/** Alt Mapping Context **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Alt")
	UInputMappingContext* MappingContextAlt;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Alt")
	int32 MapPriorityAlt;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Alt")
	UInputAction* AltSelect;
	
	
	/** Ctrl Mapping Context **/
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ctrl")
	UInputMappingContext* MappingContextCtrl;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ctrl")
	int32 MapPriorityCtrl;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Ctrl")
	UInputAction* CtrlSelect;
};

namespace EPlayerInputActions
{
	template<class T, class FuncType>
	void BindInput_TriggerOnly(UEnhancedInputComponent* Input, const UInputAction* Action, T* Obj, FuncType TriggerFunc)
	{
		if (TriggerFunc != nullptr)
		{
			Input->BindAction(Action, ETriggerEvent::Triggered, Obj, TriggerFunc);
		}
	}

	template<class T, class FuncType>
	void BindInput_StartTriggerComplete(UEnhancedInputComponent* Input, const UInputAction* Action, T* Obj, FuncType StartFunc, FuncType TriggerFunc, FuncType CompleteFunc)
	{
		if (StartFunc != nullptr)
		{
			Input->BindAction(Action, ETriggerEvent::Started, Obj, StartFunc);
		}
		
		if (TriggerFunc != nullptr)
		{
			Input->BindAction(Action, ETriggerEvent::Triggered, Obj, TriggerFunc);
		}
		
		if (CompleteFunc != nullptr)
		{
			Input->BindAction(Action, ETriggerEvent::Completed, Obj, CompleteFunc);
		}
	}

	template<class T, class FuncType>
	void BindInput_Simple(UEnhancedInputComponent* Input, const UInputAction* Action, T* Obj, FuncType TriggerFunc, FuncType CompleteFunc)
	{
		if (TriggerFunc != nullptr)
		{
			Input->BindAction(Action, ETriggerEvent::Started, Obj, TriggerFunc);
		}
		
		if (CompleteFunc != nullptr)
		{
			Input->BindAction(Action, ETriggerEvent::Completed, Obj, CompleteFunc);
		}
	}
}
