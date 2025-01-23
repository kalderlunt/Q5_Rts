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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
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

// Begin Class ASPlayerController
void ASPlayerController::StaticRegisterNativesASPlayerController()
{
	UClass* Class = ASPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActorSelected", &ASPlayerController::execActorSelected },
		{ "GetMousePositionOnTerrain", &ASPlayerController::execGetMousePositionOnTerrain },
		{ "Handle_Selection", &ASPlayerController::execHandle_Selection },
		{ "OnRep_Selected", &ASPlayerController::execOnRep_Selected },
		{ "Server_ClearSelected", &ASPlayerController::execServer_ClearSelected },
		{ "Server_DeSelect", &ASPlayerController::execServer_DeSelect },
		{ "Server_Select", &ASPlayerController::execServer_Select },
		{ "Server_Select_Group", &ASPlayerController::execServer_Select_Group },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Selected_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Selected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerController_ActorSelected, "ActorSelected" }, // 2221510552
		{ &Z_Construct_UFunction_ASPlayerController_GetMousePositionOnTerrain, "GetMousePositionOnTerrain" }, // 3709734971
		{ &Z_Construct_UFunction_ASPlayerController_Handle_Selection, "Handle_Selection" }, // 140923160
		{ &Z_Construct_UFunction_ASPlayerController_OnRep_Selected, "OnRep_Selected" }, // 1134188566
		{ &Z_Construct_UFunction_ASPlayerController_Server_ClearSelected, "Server_ClearSelected" }, // 1630769326
		{ &Z_Construct_UFunction_ASPlayerController_Server_DeSelect, "Server_DeSelect" }, // 2094628059
		{ &Z_Construct_UFunction_ASPlayerController_Server_Select, "Server_Select" }, // 56605078
		{ &Z_Construct_UFunction_ASPlayerController_Server_Select_Group, "Server_Select_Group" }, // 3283564284
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_Selected_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_Selected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerController_Statics::NewProp_OnSelectedUpdated,
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
		{ Z_Construct_UClass_ASPlayerController, ASPlayerController::StaticClass, TEXT("ASPlayerController"), &Z_Registration_Info_UClass_ASPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerController), 1902021102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_3897977614(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
