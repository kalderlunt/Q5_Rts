// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/SPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerController();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerController_NoRegister();
RTSPROJECT_API UFunction* Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Delegate FSelectedUpdateDelegate
struct Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RtsProject, nullptr, "SelectedUpdateDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSelectedUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SelectedUpdateDelegate)
{
	SelectedUpdateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FSelectedUpdateDelegate

// Begin Class ASPlayerController Function ActorSelected
struct Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics
{
	struct SPlayerController_eventActorSelected_Parms
	{
		AActor* ActorToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::NewProp_ActorToCheck = { "ActorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventActorSelected_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SPlayerController_eventActorSelected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPlayerController_eventActorSelected_Parms), &Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::NewProp_ActorToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "ActorSelected", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::SPlayerController_eventActorSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::SPlayerController_eventActorSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_ActorSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_ActorSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execActorSelected)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ActorSelected(Z_Param_ActorToCheck);
	P_NATIVE_END;
}
// End Class ASPlayerController Function ActorSelected

// Begin Class ASPlayerController Function EndPlacement
static const FName NAME_ASPlayerController_EndPlacement = FName(TEXT("EndPlacement"));
void ASPlayerController::EndPlacement()
{
	UFunction* Func = FindFunctionChecked(NAME_ASPlayerController_EndPlacement);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASPlayerController_EndPlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_EndPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "EndPlacement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_EndPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_EndPlacement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_EndPlacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_EndPlacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execEndPlacement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndPlacement_Implementation();
	P_NATIVE_END;
}
// End Class ASPlayerController Function EndPlacement

// Begin Class ASPlayerController Function GetInputActionsAsset
struct Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics
{
	struct SPlayerController_eventGetInputActionsAsset_Parms
	{
		UDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventGetInputActionsAsset_Parms, ReturnValue), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "GetInputActionsAsset", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::SPlayerController_eventGetInputActionsAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::SPlayerController_eventGetInputActionsAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execGetInputActionsAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataAsset**)Z_Param__Result=P_THIS->GetInputActionsAsset();
	P_NATIVE_END;
}
// End Class ASPlayerController Function GetInputActionsAsset

// Begin Class ASPlayerController Function GetMousePositionOnSurface
struct Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics
{
	struct SPlayerController_eventGetMousePositionOnSurface_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventGetMousePositionOnSurface_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "GetMousePositionOnSurface", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::SPlayerController_eventGetMousePositionOnSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::SPlayerController_eventGetMousePositionOnSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execGetMousePositionOnSurface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetMousePositionOnSurface();
	P_NATIVE_END;
}
// End Class ASPlayerController Function GetMousePositionOnSurface

// Begin Class ASPlayerController Function GetMousePositionOnTerrain
struct Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics
{
	struct SPlayerController_eventGetMousePositionOnTerrain_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventGetMousePositionOnTerrain_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "GetMousePositionOnTerrain", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::SPlayerController_eventGetMousePositionOnTerrain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::SPlayerController_eventGetMousePositionOnTerrain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execGetMousePositionOnTerrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetMousePositionOnTerrain();
	P_NATIVE_END;
}
// End Class ASPlayerController Function GetMousePositionOnTerrain

// Begin Class ASPlayerController Function Handle_Selection
struct Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics
{
	struct SPlayerController_eventHandle_Selection_Parms
	{
		AActor* ActorToSelect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::NewProp_ActorToSelect = { "ActorToSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventHandle_Selection_Parms, ActorToSelect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::NewProp_ActorToSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Handle_Selection", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::SPlayerController_eventHandle_Selection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::SPlayerController_eventHandle_Selection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_Handle_Selection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Handle_Selection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execHandle_Selection)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Handle_Selection(Z_Param_ActorToSelect);
	P_NATIVE_END;
}
// End Class ASPlayerController Function Handle_Selection

// Begin Class ASPlayerController Function IsPlacementModeEnabled
struct Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics
{
	struct SPlayerController_eventIsPlacementModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SPlayerController_eventIsPlacementModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPlayerController_eventIsPlacementModeEnabled_Parms), &Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "IsPlacementModeEnabled", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::SPlayerController_eventIsPlacementModeEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::SPlayerController_eventIsPlacementModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execIsPlacementModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlacementModeEnabled();
	P_NATIVE_END;
}
// End Class ASPlayerController Function IsPlacementModeEnabled

// Begin Class ASPlayerController Function OnRep_Selected
struct Z_Construct_UFunction_ASPlayerController_OnRep_Selected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_OnRep_Selected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "OnRep_Selected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_OnRep_Selected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_OnRep_Selected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_OnRep_Selected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_OnRep_Selected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execOnRep_Selected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Selected();
	P_NATIVE_END;
}
// End Class ASPlayerController Function OnRep_Selected

// Begin Class ASPlayerController Function Place
struct Z_Construct_UFunction_ASPlayerController_Place_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Place_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Place", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Place_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Place_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_Place()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Place_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execPlace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Place();
	P_NATIVE_END;
}
// End Class ASPlayerController Function Place

// Begin Class ASPlayerController Function PlaceCancel
struct Z_Construct_UFunction_ASPlayerController_PlaceCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_PlaceCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "PlaceCancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_PlaceCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_PlaceCancel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_PlaceCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_PlaceCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execPlaceCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceCancel();
	P_NATIVE_END;
}
// End Class ASPlayerController Function PlaceCancel

// Begin Class ASPlayerController Function RemoveInputMapping
struct Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics
{
	struct SPlayerController_eventRemoveInputMapping_Parms
	{
		const UInputMappingContext* InputMapping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventRemoveInputMapping_Parms, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::NewProp_InputMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "RemoveInputMapping", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::SPlayerController_eventRemoveInputMapping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::SPlayerController_eventRemoveInputMapping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_RemoveInputMapping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_RemoveInputMapping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execRemoveInputMapping)
{
	P_GET_OBJECT(UInputMappingContext,Z_Param_InputMapping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInputMapping(Z_Param_InputMapping);
	P_NATIVE_END;
}
// End Class ASPlayerController Function RemoveInputMapping

// Begin Class ASPlayerController Function Server_ClearSelected
static const FName NAME_ASPlayerController_Server_ClearSelected = FName(TEXT("Server_ClearSelected"));
void ASPlayerController::Server_ClearSelected()
{
	UFunction* Func = FindFunctionChecked(NAME_ASPlayerController_Server_ClearSelected);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ASPlayerController_Server_ClearSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Server_ClearSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Server_ClearSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_ClearSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Server_ClearSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_Server_ClearSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Server_ClearSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execServer_ClearSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_ClearSelected_Implementation();
	P_NATIVE_END;
}
// End Class ASPlayerController Function Server_ClearSelected

// Begin Class ASPlayerController Function Server_DeSelect
struct SPlayerController_eventServer_DeSelect_Parms
{
	AActor* ActorToDeSelect;
};
static const FName NAME_ASPlayerController_Server_DeSelect = FName(TEXT("Server_DeSelect"));
void ASPlayerController::Server_DeSelect(AActor* ActorToDeSelect)
{
	SPlayerController_eventServer_DeSelect_Parms Parms;
	Parms.ActorToDeSelect=ActorToDeSelect;
	UFunction* Func = FindFunctionChecked(NAME_ASPlayerController_Server_DeSelect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToDeSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::NewProp_ActorToDeSelect = { "ActorToDeSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventServer_DeSelect_Parms, ActorToDeSelect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::NewProp_ActorToDeSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Server_DeSelect", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::PropPointers), sizeof(SPlayerController_eventServer_DeSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::Function_MetaDataParams) };
static_assert(sizeof(SPlayerController_eventServer_DeSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_Server_DeSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Server_DeSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execServer_DeSelect)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToDeSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_DeSelect_Implementation(Z_Param_ActorToDeSelect);
	P_NATIVE_END;
}
// End Class ASPlayerController Function Server_DeSelect

// Begin Class ASPlayerController Function Server_Place
struct SPlayerController_eventServer_Place_Parms
{
	AActor* PlacementPreviewToSpawn;
};
static const FName NAME_ASPlayerController_Server_Place = FName(TEXT("Server_Place"));
void ASPlayerController::Server_Place(AActor* PlacementPreviewToSpawn)
{
	SPlayerController_eventServer_Place_Parms Parms;
	Parms.PlacementPreviewToSpawn=PlacementPreviewToSpawn;
	UFunction* Func = FindFunctionChecked(NAME_ASPlayerController_Server_Place);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASPlayerController_Server_Place_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementPreviewToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::NewProp_PlacementPreviewToSpawn = { "PlacementPreviewToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventServer_Place_Parms, PlacementPreviewToSpawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::NewProp_PlacementPreviewToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Server_Place", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::PropPointers), sizeof(SPlayerController_eventServer_Place_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::Function_MetaDataParams) };
static_assert(sizeof(SPlayerController_eventServer_Place_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_Server_Place()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Server_Place_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execServer_Place)
{
	P_GET_OBJECT(AActor,Z_Param_PlacementPreviewToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Place_Implementation(Z_Param_PlacementPreviewToSpawn);
	P_NATIVE_END;
}
// End Class ASPlayerController Function Server_Place

// Begin Class ASPlayerController Function Server_Select
struct SPlayerController_eventServer_Select_Parms
{
	AActor* ActorToSelect;
};
static const FName NAME_ASPlayerController_Server_Select = FName(TEXT("Server_Select"));
void ASPlayerController::Server_Select(AActor* ActorToSelect)
{
	SPlayerController_eventServer_Select_Parms Parms;
	Parms.ActorToSelect=ActorToSelect;
	UFunction* Func = FindFunctionChecked(NAME_ASPlayerController_Server_Select);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASPlayerController_Server_Select_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::NewProp_ActorToSelect = { "ActorToSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventServer_Select_Parms, ActorToSelect), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::NewProp_ActorToSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Server_Select", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::PropPointers), sizeof(SPlayerController_eventServer_Select_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::Function_MetaDataParams) };
static_assert(sizeof(SPlayerController_eventServer_Select_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_Server_Select()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Server_Select_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execServer_Select)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Select_Implementation(Z_Param_ActorToSelect);
	P_NATIVE_END;
}
// End Class ASPlayerController Function Server_Select

// Begin Class ASPlayerController Function Server_Select_Group
struct SPlayerController_eventServer_Select_Group_Parms
{
	TArray<AActor*> ActorsToSelect;
};
static const FName NAME_ASPlayerController_Server_Select_Group = FName(TEXT("Server_Select_Group"));
void ASPlayerController::Server_Select_Group(TArray<AActor*> const& ActorsToSelect)
{
	SPlayerController_eventServer_Select_Group_Parms Parms;
	Parms.ActorsToSelect=ActorsToSelect;
	UFunction* Func = FindFunctionChecked(NAME_ASPlayerController_Server_Select_Group);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToSelect_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::NewProp_ActorsToSelect_Inner = { "ActorsToSelect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::NewProp_ActorsToSelect = { "ActorsToSelect", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerController_eventServer_Select_Group_Parms, ActorsToSelect), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToSelect_MetaData), NewProp_ActorsToSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::NewProp_ActorsToSelect_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::NewProp_ActorsToSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "Server_Select_Group", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::PropPointers), sizeof(SPlayerController_eventServer_Select_Group_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::Function_MetaDataParams) };
static_assert(sizeof(SPlayerController_eventServer_Select_Group_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_Server_Select_Group()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_Server_Select_Group_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execServer_Select_Group)
{
	P_GET_TARRAY(AActor*,Z_Param_ActorsToSelect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_Select_Group_Implementation(Z_Param_ActorsToSelect);
	P_NATIVE_END;
}
// End Class ASPlayerController Function Server_Select_Group

// Begin Class ASPlayerController Function SetInputDefault
struct Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics
{
	struct SPlayerController_eventSetInputDefault_Parms
	{
		bool Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((SPlayerController_eventSetInputDefault_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPlayerController_eventSetInputDefault_Parms), &Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "SetInputDefault", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::SPlayerController_eventSetInputDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::SPlayerController_eventSetInputDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_SetInputDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_SetInputDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execSetInputDefault)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputDefault(Z_Param_Enabled);
	P_NATIVE_END;
}
// End Class ASPlayerController Function SetInputDefault

// Begin Class ASPlayerController Function SetInputPlacement
struct Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics
{
	struct SPlayerController_eventSetInputPlacement_Parms
	{
		bool Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((SPlayerController_eventSetInputPlacement_Parms*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SPlayerController_eventSetInputPlacement_Parms), &Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "SetInputPlacement", nullptr, nullptr, Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::SPlayerController_eventSetInputPlacement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::SPlayerController_eventSetInputPlacement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerController_SetInputPlacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_SetInputPlacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execSetInputPlacement)
{
	P_GET_UBOOL(Z_Param_Enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputPlacement(Z_Param_Enabled);
	P_NATIVE_END;
}
// End Class ASPlayerController Function SetInputPlacement

// Begin Class ASPlayerController Function SetPlacementPreview
struct Z_Construct_UFunction_ASPlayerController_SetPlacementPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_SetPlacementPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "SetPlacementPreview", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_SetPlacementPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_SetPlacementPreview_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_SetPlacementPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_SetPlacementPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execSetPlacementPreview)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlacementPreview();
	P_NATIVE_END;
}
// End Class ASPlayerController Function SetPlacementPreview

// Begin Class ASPlayerController Function UpdatePlacement
struct Z_Construct_UFunction_ASPlayerController_UpdatePlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerController_UpdatePlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerController, nullptr, "UpdatePlacement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerController_UpdatePlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerController_UpdatePlacement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerController_UpdatePlacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerController_UpdatePlacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerController::execUpdatePlacement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlacement();
	P_NATIVE_END;
}
// End Class ASPlayerController Function UpdatePlacement

// Begin Class ASPlayerController
void ASPlayerController::StaticRegisterNativesASPlayerController()
{
	UClass* Class = ASPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActorSelected", &ASPlayerController::execActorSelected },
		{ "EndPlacement", &ASPlayerController::execEndPlacement },
		{ "GetInputActionsAsset", &ASPlayerController::execGetInputActionsAsset },
		{ "GetMousePositionOnSurface", &ASPlayerController::execGetMousePositionOnSurface },
		{ "GetMousePositionOnTerrain", &ASPlayerController::execGetMousePositionOnTerrain },
		{ "Handle_Selection", &ASPlayerController::execHandle_Selection },
		{ "IsPlacementModeEnabled", &ASPlayerController::execIsPlacementModeEnabled },
		{ "OnRep_Selected", &ASPlayerController::execOnRep_Selected },
		{ "Place", &ASPlayerController::execPlace },
		{ "PlaceCancel", &ASPlayerController::execPlaceCancel },
		{ "RemoveInputMapping", &ASPlayerController::execRemoveInputMapping },
		{ "Server_ClearSelected", &ASPlayerController::execServer_ClearSelected },
		{ "Server_DeSelect", &ASPlayerController::execServer_DeSelect },
		{ "Server_Place", &ASPlayerController::execServer_Place },
		{ "Server_Select", &ASPlayerController::execServer_Select },
		{ "Server_Select_Group", &ASPlayerController::execServer_Select_Group },
		{ "SetInputDefault", &ASPlayerController::execSetInputDefault },
		{ "SetInputPlacement", &ASPlayerController::execSetInputPlacement },
		{ "SetPlacementPreview", &ASPlayerController::execSetPlacementPreview },
		{ "UpdatePlacement", &ASPlayerController::execUpdatePlacement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPlayerController);
UClass* Z_Construct_UClass_ASPlayerController_NoRegister()
{
	return ASPlayerController::StaticClass();
}
struct Z_Construct_UClass_ASPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SPlayerController.h" },
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActionsAsset_MetaData[] = {
		{ "Category", "Player Settings" },
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlacementModeEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementPreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActorType_MetaData[] = {
		{ "Category", "Settings|Placeable" },
		{ "ModuleRelativePath", "Public/SPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selected_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Selected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedUpdated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActionsAsset;
	static void NewProp_bPlacementModeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlacementModeEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacementPreviewActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewActorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerController_ActorSelected, "ActorSelected" }, // 2221510552
		{ &Z_Construct_UFunction_ASPlayerController_EndPlacement, "EndPlacement" }, // 3247569765
		{ &Z_Construct_UFunction_ASPlayerController_GetInputActionsAsset, "GetInputActionsAsset" }, // 3616479880
		{ &Z_Construct_UFunction_ASPlayerController_GetMousePositionOnSurface, "GetMousePositionOnSurface" }, // 2448914906
		{ &Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain, "GetMousePositionOnTerrain" }, // 3709734971
		{ &Z_Construct_UFunction_ASPlayerController_Handle_Selection, "Handle_Selection" }, // 140923160
		{ &Z_Construct_UFunction_ASPlayerController_IsPlacementModeEnabled, "IsPlacementModeEnabled" }, // 827456844
		{ &Z_Construct_UFunction_ASPlayerController_OnRep_Selected, "OnRep_Selected" }, // 1134188566
		{ &Z_Construct_UFunction_ASPlayerController_Place, "Place" }, // 1683450717
		{ &Z_Construct_UFunction_ASPlayerController_PlaceCancel, "PlaceCancel" }, // 189087687
		{ &Z_Construct_UFunction_ASPlayerController_RemoveInputMapping, "RemoveInputMapping" }, // 2781948446
		{ &Z_Construct_UFunction_ASPlayerController_Server_ClearSelected, "Server_ClearSelected" }, // 1630769326
		{ &Z_Construct_UFunction_ASPlayerController_Server_DeSelect, "Server_DeSelect" }, // 2094628059
		{ &Z_Construct_UFunction_ASPlayerController_Server_Place, "Server_Place" }, // 3539453701
		{ &Z_Construct_UFunction_ASPlayerController_Server_Select, "Server_Select" }, // 56605078
		{ &Z_Construct_UFunction_ASPlayerController_Server_Select_Group, "Server_Select_Group" }, // 3283564284
		{ &Z_Construct_UFunction_ASPlayerController_SetInputDefault, "SetInputDefault" }, // 414828233
		{ &Z_Construct_UFunction_ASPlayerController_SetInputPlacement, "SetInputPlacement" }, // 3613819052
		{ &Z_Construct_UFunction_ASPlayerController_SetPlacementPreview, "SetPlacementPreview" }, // 4179145869
		{ &Z_Construct_UFunction_ASPlayerController_UpdatePlacement, "UpdatePlacement" }, // 2581784684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_Selected_Inner = { "Selected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_Selected = { "Selected", "OnRep_Selected", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerController, Selected), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selected_MetaData), NewProp_Selected_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnSelectedUpdated = { "OnSelectedUpdated", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerController, OnSelectedUpdated), Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSelectedUpdated_MetaData), NewProp_OnSelectedUpdated_MetaData) }; // 1813153521
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_PlayerActionsAsset = { "PlayerActionsAsset", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerController, PlayerActionsAsset), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerActionsAsset_MetaData), NewProp_PlayerActionsAsset_MetaData) };
void Z_Construct_UClass_ASPlayerController_Statics::NewProp_bPlacementModeEnabled_SetBit(void* Obj)
{
	((ASPlayerController*)Obj)->bPlacementModeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_bPlacementModeEnabled = { "bPlacementModeEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASPlayerController), &Z_Construct_UClass_ASPlayerController_Statics::NewProp_bPlacementModeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlacementModeEnabled_MetaData), NewProp_bPlacementModeEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_PlacementPreviewActor = { "PlacementPreviewActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerController, PlacementPreviewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementPreviewActor_MetaData), NewProp_PlacementPreviewActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPlayerController_Statics::NewProp_PreviewActorType = { "PreviewActorType", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerController, PreviewActorType), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActorType_MetaData), NewProp_PreviewActorType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_Selected_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_Selected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnSelectedUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_PlayerActionsAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_bPlacementModeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_PlacementPreviewActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_PreviewActorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerController_Statics::ClassParams = {
	&ASPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASPlayerController()
{
	if (!Z_Registration_Info_UClass_ASPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPlayerController.OuterSingleton, Z_Construct_UClass_ASPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASPlayerController.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<ASPlayerController>()
{
	return ASPlayerController::StaticClass();
}
void ASPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Selected(TEXT("Selected"));
	const bool bIsValid = true
		&& Name_Selected == ClassReps[(int32)ENetFields_Private::Selected].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerController);
ASPlayerController::~ASPlayerController() {}
// End Class ASPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASPlayerController, ASPlayerController::StaticClass, TEXT("ASPlayerController"), &Z_Registration_Info_UClass_ASPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerController), 3814936218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_3357537837(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
