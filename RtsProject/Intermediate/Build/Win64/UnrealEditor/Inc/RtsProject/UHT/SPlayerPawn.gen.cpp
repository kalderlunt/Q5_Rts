// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/SPlayerPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerPawn() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
RTSPROJECT_API UClass* Z_Construct_UClass_ASelectionBox_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerController_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerPawn();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class ASPlayerPawn Function CameraBounds
struct Z_Construct_UFunction_ASPlayerPawn_CameraBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_CameraBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "CameraBounds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_CameraBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_CameraBounds_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_CameraBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_CameraBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execCameraBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CameraBounds();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function CameraBounds

// Begin Class ASPlayerPawn Function CreateSelectionBox
struct Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "CreateSelectionBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execCreateSelectionBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSelectionBox();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function CreateSelectionBox

// Begin Class ASPlayerPawn Function EdgeScroll
struct Z_Construct_UFunction_ASPlayerPawn_EdgeScroll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_EdgeScroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "EdgeScroll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_EdgeScroll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_EdgeScroll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_EdgeScroll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_EdgeScroll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execEdgeScroll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EdgeScroll();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function EdgeScroll

// Begin Class ASPlayerPawn Function GetSelectedObject
struct Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics
{
	struct SPlayerPawn_eventGetSelectedObject_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventGetSelectedObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "GetSelectedObject", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::SPlayerPawn_eventGetSelectedObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::SPlayerPawn_eventGetSelectedObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execGetSelectedObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetSelectedObject();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function GetSelectedObject

// Begin Class ASPlayerPawn Function GetTerrainPosition
struct Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics
{
	struct SPlayerPawn_eventGetTerrainPosition_Parms
	{
		FVector TerrainPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TerrainPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::NewProp_TerrainPosition = { "TerrainPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventGetTerrainPosition_Parms, TerrainPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::NewProp_TerrainPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "GetTerrainPosition", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::SPlayerPawn_eventGetTerrainPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::SPlayerPawn_eventGetTerrainPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execGetTerrainPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TerrainPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTerrainPosition(Z_Param_Out_TerrainPosition);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function GetTerrainPosition

// Begin Class ASPlayerPawn Function Look
struct Z_Construct_UFunction_ASPlayerPawn_Look_Statics
{
	struct SPlayerPawn_eventLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Look_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Look_Statics::SPlayerPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Look_Statics::SPlayerPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Look

// Begin Class ASPlayerPawn Function Move
struct Z_Construct_UFunction_ASPlayerPawn_Move_Statics
{
	struct SPlayerPawn_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enhanced Input **/" },
#endif
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Move_Statics::SPlayerPawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Move_Statics::SPlayerPawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Move

// Begin Class ASPlayerPawn Function Rotate
struct Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics
{
	struct SPlayerPawn_eventRotate_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventRotate_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Rotate", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::SPlayerPawn_eventRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::SPlayerPawn_eventRotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Rotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Rotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execRotate)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Rotate(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Rotate

// Begin Class ASPlayerPawn Function Select
struct Z_Construct_UFunction_ASPlayerPawn_Select_Statics
{
	struct SPlayerPawn_eventSelect_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_Select_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventSelect_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Select_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Select_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Select_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Select", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Select_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Select_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Select_Statics::SPlayerPawn_eventSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Select_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Select_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Select_Statics::SPlayerPawn_eventSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Select()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Select_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execSelect)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Select(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Select

// Begin Class ASPlayerPawn Function SelectEnd
struct Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics
{
	struct SPlayerPawn_eventSelectEnd_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventSelectEnd_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "SelectEnd", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::SPlayerPawn_eventSelectEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::SPlayerPawn_eventSelectEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_SelectEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_SelectEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execSelectEnd)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectEnd(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function SelectEnd

// Begin Class ASPlayerPawn Function SelectHold
struct Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics
{
	struct SPlayerPawn_eventSelectHold_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventSelectHold_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "SelectHold", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::SPlayerPawn_eventSelectHold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::SPlayerPawn_eventSelectHold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_SelectHold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_SelectHold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execSelectHold)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectHold(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function SelectHold

// Begin Class ASPlayerPawn Function Zoom
struct Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics
{
	struct SPlayerPawn_eventZoom_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventZoom_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Zoom", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::SPlayerPawn_eventZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::SPlayerPawn_eventZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Zoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execZoom)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Zoom(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Zoom

// Begin Class ASPlayerPawn
void ASPlayerPawn::StaticRegisterNativesASPlayerPawn()
{
	UClass* Class = ASPlayerPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CameraBounds", &ASPlayerPawn::execCameraBounds },
		{ "CreateSelectionBox", &ASPlayerPawn::execCreateSelectionBox },
		{ "EdgeScroll", &ASPlayerPawn::execEdgeScroll },
		{ "GetSelectedObject", &ASPlayerPawn::execGetSelectedObject },
		{ "GetTerrainPosition", &ASPlayerPawn::execGetTerrainPosition },
		{ "Look", &ASPlayerPawn::execLook },
		{ "Move", &ASPlayerPawn::execMove },
		{ "Rotate", &ASPlayerPawn::execRotate },
		{ "Select", &ASPlayerPawn::execSelect },
		{ "SelectEnd", &ASPlayerPawn::execSelectEnd },
		{ "SelectHold", &ASPlayerPawn::execSelectHold },
		{ "Zoom", &ASPlayerPawn::execZoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPlayerPawn);
UClass* Z_Construct_UClass_ASPlayerPawn_NoRegister()
{
	return ASPlayerPawn::StaticClass();
}
struct Z_Construct_UClass_ASPlayerPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SPlayerPawn.h" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatePitchMin_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatePitchMax_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoom_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoom_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetZoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBoxClass_MetaData[] = {
		{ "Category", "Settings|Mouse" },
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSelect_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectHitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatePitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatePitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetZoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SPlayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectionBoxClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionBox;
	static void NewProp_BoxSelect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoxSelect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectHitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerPawn_CameraBounds, "CameraBounds" }, // 4047234879
		{ &Z_Construct_UFunction_ASPlayerPawn_CreateSelectionBox, "CreateSelectionBox" }, // 372051341
		{ &Z_Construct_UFunction_ASPlayerPawn_EdgeScroll, "EdgeScroll" }, // 313748433
		{ &Z_Construct_UFunction_ASPlayerPawn_GetSelectedObject, "GetSelectedObject" }, // 584511560
		{ &Z_Construct_UFunction_ASPlayerPawn_GetTerrainPosition, "GetTerrainPosition" }, // 3567289929
		{ &Z_Construct_UFunction_ASPlayerPawn_Look, "Look" }, // 2554909319
		{ &Z_Construct_UFunction_ASPlayerPawn_Move, "Move" }, // 3397606101
		{ &Z_Construct_UFunction_ASPlayerPawn_Rotate, "Rotate" }, // 1360787432
		{ &Z_Construct_UFunction_ASPlayerPawn_Select, "Select" }, // 416665506
		{ &Z_Construct_UFunction_ASPlayerPawn_SelectEnd, "SelectEnd" }, // 23355840
		{ &Z_Construct_UFunction_ASPlayerPawn_SelectHold, "SelectHold" }, // 3750890487
		{ &Z_Construct_UFunction_ASPlayerPawn_Zoom, "Zoom" }, // 3021649989
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_EdgeScrollSpeed = { "EdgeScrollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, EdgeScrollSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScrollSpeed_MetaData), NewProp_EdgeScrollSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMin = { "RotatePitchMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, RotatePitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatePitchMin_MetaData), NewProp_RotatePitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMax = { "RotatePitchMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, RotatePitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatePitchMax_MetaData), NewProp_RotatePitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom = { "MinZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MinZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoom_MetaData), NewProp_MinZoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom = { "MaxZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MaxZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoom_MetaData), NewProp_MaxZoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, Smoothing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoothing_MetaData), NewProp_Smoothing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, CameraComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom = { "TargetZoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetZoom_MetaData), NewProp_TargetZoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SPlayer = { "SPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SPlayer), Z_Construct_UClass_ASPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SPlayer_MetaData), NewProp_SPlayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SelectionBoxClass = { "SelectionBoxClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SelectionBoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASelectionBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionBoxClass_MetaData), NewProp_SelectionBoxClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SelectionBox = { "SelectionBox", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SelectionBox), Z_Construct_UClass_ASelectionBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionBox_MetaData), NewProp_SelectionBox_MetaData) };
void Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_BoxSelect_SetBit(void* Obj)
{
	((ASPlayerPawn*)Obj)->BoxSelect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_BoxSelect = { "BoxSelect", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASPlayerPawn), &Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_BoxSelect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSelect_MetaData), NewProp_BoxSelect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SelectHitLocation = { "SelectHitLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SelectHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectHitLocation_MetaData), NewProp_SelectHitLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_EdgeScrollSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_Smoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SelectionBoxClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SelectionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_BoxSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SelectHitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASPlayerPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPlayerPawn_Statics::ClassParams = {
	&ASPlayerPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPlayerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPlayerPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASPlayerPawn()
{
	if (!Z_Registration_Info_UClass_ASPlayerPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPlayerPawn.OuterSingleton, Z_Construct_UClass_ASPlayerPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASPlayerPawn.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<ASPlayerPawn>()
{
	return ASPlayerPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerPawn);
ASPlayerPawn::~ASPlayerPawn() {}
// End Class ASPlayerPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASPlayerPawn, ASPlayerPawn::StaticClass, TEXT("ASPlayerPawn"), &Z_Registration_Info_UClass_ASPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerPawn), 1578025581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_1589183955(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
