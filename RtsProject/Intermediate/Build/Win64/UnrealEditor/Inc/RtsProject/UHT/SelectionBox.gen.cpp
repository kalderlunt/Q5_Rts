// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/SelectionBox.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionBox() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
RTSPROJECT_API UClass* Z_Construct_UClass_ASelectionBox();
RTSPROJECT_API UClass* Z_Construct_UClass_ASelectionBox_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class ASelectionBox Function Adjust
struct Z_Construct_UFunction_ASelectionBox_Adjust_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectionBox_Adjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectionBox, nullptr, "Adjust", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_Adjust_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectionBox_Adjust_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASelectionBox_Adjust()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectionBox_Adjust_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelectionBox::execAdjust)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Adjust();
	P_NATIVE_END;
}
// End Class ASelectionBox Function Adjust

// Begin Class ASelectionBox Function End
struct Z_Construct_UFunction_ASelectionBox_End_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectionBox_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectionBox, nullptr, "End", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_End_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectionBox_End_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASelectionBox_End()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectionBox_End_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelectionBox::execEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->End();
	P_NATIVE_END;
}
// End Class ASelectionBox Function End

// Begin Class ASelectionBox Function HandleHighlight
struct Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics
{
	struct SelectionBox_eventHandleHighlight_Parms
	{
		AActor* ActorInBox;
		bool Highlight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Highlight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorInBox;
	static void NewProp_Highlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Highlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::NewProp_ActorInBox = { "ActorInBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventHandleHighlight_Parms, ActorInBox), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::NewProp_Highlight_SetBit(void* Obj)
{
	((SelectionBox_eventHandleHighlight_Parms*)Obj)->Highlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::NewProp_Highlight = { "Highlight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectionBox_eventHandleHighlight_Parms), &Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::NewProp_Highlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Highlight_MetaData), NewProp_Highlight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::NewProp_ActorInBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::NewProp_Highlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectionBox, nullptr, "HandleHighlight", nullptr, nullptr, Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::SelectionBox_eventHandleHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::SelectionBox_eventHandleHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASelectionBox_HandleHighlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectionBox_HandleHighlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelectionBox::execHandleHighlight)
{
	P_GET_OBJECT(AActor,Z_Param_ActorInBox);
	P_GET_UBOOL(Z_Param_Highlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHighlight(Z_Param_ActorInBox,Z_Param_Highlight);
	P_NATIVE_END;
}
// End Class ASelectionBox Function HandleHighlight

// Begin Class ASelectionBox Function Manage
struct Z_Construct_UFunction_ASelectionBox_Manage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectionBox_Manage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectionBox, nullptr, "Manage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_Manage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectionBox_Manage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASelectionBox_Manage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectionBox_Manage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelectionBox::execManage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Manage();
	P_NATIVE_END;
}
// End Class ASelectionBox Function Manage

// Begin Class ASelectionBox Function OnBoxColliderBeginOverlap
struct Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics
{
	struct SelectionBox_eventOnBoxColliderBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventOnBoxColliderBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventOnBoxColliderBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventOnBoxColliderBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventOnBoxColliderBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SelectionBox_eventOnBoxColliderBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectionBox_eventOnBoxColliderBeginOverlap_Parms), &Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventOnBoxColliderBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectionBox, nullptr, "OnBoxColliderBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::SelectionBox_eventOnBoxColliderBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::SelectionBox_eventOnBoxColliderBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelectionBox::execOnBoxColliderBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxColliderBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASelectionBox Function OnBoxColliderBeginOverlap

// Begin Class ASelectionBox Function Start
struct Z_Construct_UFunction_ASelectionBox_Start_Statics
{
	struct SelectionBox_eventStart_Parms
	{
		FVector Position;
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectionBox_Start_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventStart_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASelectionBox_Start_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionBox_eventStart_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASelectionBox_Start_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_Start_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASelectionBox_Start_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_Start_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASelectionBox_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASelectionBox, nullptr, "Start", nullptr, nullptr, Z_Construct_UFunction_ASelectionBox_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_Start_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASelectionBox_Start_Statics::SelectionBox_eventStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASelectionBox_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASelectionBox_Start_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASelectionBox_Start_Statics::SelectionBox_eventStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASelectionBox_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASelectionBox_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASelectionBox::execStart)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start(Z_Param_Position,Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class ASelectionBox Function Start

// Begin Class ASelectionBox
void ASelectionBox::StaticRegisterNativesASelectionBox()
{
	UClass* Class = ASelectionBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Adjust", &ASelectionBox::execAdjust },
		{ "End", &ASelectionBox::execEnd },
		{ "HandleHighlight", &ASelectionBox::execHandleHighlight },
		{ "Manage", &ASelectionBox::execManage },
		{ "OnBoxColliderBeginOverlap", &ASelectionBox::execOnBoxColliderBeginOverlap },
		{ "Start", &ASelectionBox::execStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASelectionBox);
UClass* Z_Construct_UClass_ASelectionBox_NoRegister()
{
	return ASelectionBox::StaticClass();
}
struct Z_Construct_UClass_ASelectionBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SelectionBox.h" },
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterInBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SelectionBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SelectionBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSelect_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBox_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenterInBox_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CenterInBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalComponent;
	static void NewProp_BoxSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoxSelect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASelectionBox_Adjust, "Adjust" }, // 2921504625
		{ &Z_Construct_UFunction_ASelectionBox_End, "End" }, // 930642308
		{ &Z_Construct_UFunction_ASelectionBox_HandleHighlight, "HandleHighlight" }, // 830780650
		{ &Z_Construct_UFunction_ASelectionBox_Manage, "Manage" }, // 2837326669
		{ &Z_Construct_UFunction_ASelectionBox_OnBoxColliderBeginOverlap, "OnBoxColliderBeginOverlap" }, // 473474235
		{ &Z_Construct_UFunction_ASelectionBox_Start, "Start" }, // 1424307950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectionBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_InBox_Inner = { "InBox", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_InBox = { "InBox", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, InBox), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBox_MetaData), NewProp_InBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_CenterInBox_Inner = { "CenterInBox", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_CenterInBox = { "CenterInBox", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, CenterInBox), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterInBox_MetaData), NewProp_CenterInBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_DecalComponent = { "DecalComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, DecalComponent), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalComponent_MetaData), NewProp_DecalComponent_MetaData) };
void Z_Construct_UClass_ASelectionBox_Statics::NewProp_BoxSelect_SetBit(void* Obj)
{
	((ASelectionBox*)Obj)->BoxSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_BoxSelect = { "BoxSelect", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASelectionBox), &Z_Construct_UClass_ASelectionBox_Statics::NewProp_BoxSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSelect_MetaData), NewProp_BoxSelect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASelectionBox_Statics::NewProp_SPlayer = { "SPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionBox, SPlayer), Z_Construct_UClass_ASPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SPlayer_MetaData), NewProp_SPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelectionBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_StartRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_InBox_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_InBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_CenterInBox_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_CenterInBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_DecalComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_BoxSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectionBox_Statics::NewProp_SPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectionBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASelectionBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectionBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASelectionBox_Statics::ClassParams = {
	&ASelectionBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASelectionBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASelectionBox_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASelectionBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ASelectionBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASelectionBox()
{
	if (!Z_Registration_Info_UClass_ASelectionBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelectionBox.OuterSingleton, Z_Construct_UClass_ASelectionBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASelectionBox.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<ASelectionBox>()
{
	return ASelectionBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASelectionBox);
ASelectionBox::~ASelectionBox() {}
// End Class ASelectionBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASelectionBox, ASelectionBox::StaticClass, TEXT("ASelectionBox"), &Z_Registration_Info_UClass_ASelectionBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelectionBox), 1717511313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_1710838692(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
