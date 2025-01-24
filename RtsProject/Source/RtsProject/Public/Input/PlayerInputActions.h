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
}
