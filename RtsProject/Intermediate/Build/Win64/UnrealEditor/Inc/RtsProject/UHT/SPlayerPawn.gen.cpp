// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/SPlayerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPlayerPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerPawn();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class ASPlayerPawn Function CameraBounds
struct Z_Construct_UFunction_ASPlayerPawn_CameraBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
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

// Begin Class ASPlayerPawn Function DisableRotate
struct Z_Construct_UFunction_ASPlayerPawn_DisableRotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_DisableRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "DisableRotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_DisableRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_DisableRotate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_DisableRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_DisableRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execDisableRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableRotate();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function DisableRotate

// Begin Class ASPlayerPawn Function EnableRotate
struct Z_Construct_UFunction_ASPlayerPawn_EnableRotate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_EnableRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "EnableRotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_EnableRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_EnableRotate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_EnableRotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_EnableRotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execEnableRotate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRotate();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function EnableRotate

// Begin Class ASPlayerPawn Function Forward
struct Z_Construct_UFunction_ASPlayerPawn_Forward_Statics
{
	struct SPlayerPawn_eventForward_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventForward_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Forward", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::SPlayerPawn_eventForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::SPlayerPawn_eventForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Forward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Forward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Forward(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Forward

// Begin Class ASPlayerPawn Function Right
struct Z_Construct_UFunction_ASPlayerPawn_Right_Statics
{
	struct SPlayerPawn_eventRight_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_Right_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventRight_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Right_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Right", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::SPlayerPawn_eventRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Right_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_Right_Statics::SPlayerPawn_eventRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_Right()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_Right_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Right(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Right

// Begin Class ASPlayerPawn Function RotateHorizontal
struct Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics
{
	struct SPlayerPawn_eventRotateHorizontal_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventRotateHorizontal_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "RotateHorizontal", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::SPlayerPawn_eventRotateHorizontal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::SPlayerPawn_eventRotateHorizontal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execRotateHorizontal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateHorizontal(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function RotateHorizontal

// Begin Class ASPlayerPawn Function RotateLeft
struct Z_Construct_UFunction_ASPlayerPawn_RotateLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_RotateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "RotateLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_RotateLeft_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_RotateLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_RotateLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execRotateLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateLeft();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function RotateLeft

// Begin Class ASPlayerPawn Function RotateRight
struct Z_Construct_UFunction_ASPlayerPawn_RotateRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_RotateRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "RotateRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_RotateRight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASPlayerPawn_RotateRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_RotateRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execRotateRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateRight();
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function RotateRight

// Begin Class ASPlayerPawn Function RotateVertical
struct Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics
{
	struct SPlayerPawn_eventRotateVertical_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventRotateVertical_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "RotateVertical", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::SPlayerPawn_eventRotateVertical_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::SPlayerPawn_eventRotateVertical_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASPlayerPawn_RotateVertical()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPlayerPawn_RotateVertical_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASPlayerPawn::execRotateVertical)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateVertical(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function RotateVertical

// Begin Class ASPlayerPawn Function Zoom
struct Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics
{
	struct SPlayerPawn_eventZoom_Parms
	{
		float AxisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPlayerPawn_eventZoom_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::NewProp_AxisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPlayerPawn, nullptr, "Zoom", nullptr, nullptr, Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::SPlayerPawn_eventZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPlayerPawn_Zoom_Statics::Function_MetaDataParams) };
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
	P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Zoom(Z_Param_AxisValue);
	P_NATIVE_END;
}
// End Class ASPlayerPawn Function Zoom

// Begin Class ASPlayerPawn
void ASPlayerPawn::StaticRegisterNativesASPlayerPawn()
{
	UClass* Class = ASPlayerPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CameraBounds", &ASPlayerPawn::execCameraBounds },
		{ "DisableRotate", &ASPlayerPawn::execDisableRotate },
		{ "EnableRotate", &ASPlayerPawn::execEnableRotate },
		{ "Forward", &ASPlayerPawn::execForward },
		{ "Right", &ASPlayerPawn::execRight },
		{ "RotateHorizontal", &ASPlayerPawn::execRotateHorizontal },
		{ "RotateLeft", &ASPlayerPawn::execRotateLeft },
		{ "RotateRight", &ASPlayerPawn::execRotateRight },
		{ "RotateVertical", &ASPlayerPawn::execRotateVertical },
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
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatePitchMin_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatePitchMax_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoom_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoom_MetaData[] = {
		{ "Category", "Settings|Camera" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SPlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetZoom_MetaData[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanRotate_MetaData[] = {
		{ "ModuleRelativePath", "SPlayerPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatePitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatePitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetZoom;
	static void NewProp_CanRotate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanRotate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPlayerPawn_CameraBounds, "CameraBounds" }, // 66206963
		{ &Z_Construct_UFunction_ASPlayerPawn_DisableRotate, "DisableRotate" }, // 1360418224
		{ &Z_Construct_UFunction_ASPlayerPawn_EnableRotate, "EnableRotate" }, // 3457198172
		{ &Z_Construct_UFunction_ASPlayerPawn_Forward, "Forward" }, // 2179694479
		{ &Z_Construct_UFunction_ASPlayerPawn_Right, "Right" }, // 2834279437
		{ &Z_Construct_UFunction_ASPlayerPawn_RotateHorizontal, "RotateHorizontal" }, // 1444947453
		{ &Z_Construct_UFunction_ASPlayerPawn_RotateLeft, "RotateLeft" }, // 306765408
		{ &Z_Construct_UFunction_ASPlayerPawn_RotateRight, "RotateRight" }, // 2332634480
		{ &Z_Construct_UFunction_ASPlayerPawn_RotateVertical, "RotateVertical" }, // 2978091575
		{ &Z_Construct_UFunction_ASPlayerPawn_Zoom, "Zoom" }, // 148807129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateSpeed_MetaData), NewProp_RotateSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMin = { "RotatePitchMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, RotatePitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatePitchMin_MetaData), NewProp_RotatePitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMax = { "RotatePitchMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, RotatePitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatePitchMax_MetaData), NewProp_RotatePitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom = { "MinZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MinZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoom_MetaData), NewProp_MinZoom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom = { "MaxZoom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, MaxZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoom_MetaData), NewProp_MaxZoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComponent_MetaData), NewProp_SpringArmComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, CameraComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom = { "TargetZoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPlayerPawn, TargetZoom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetZoom_MetaData), NewProp_TargetZoom_MetaData) };
void Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CanRotate_SetBit(void* Obj)
{
	((ASPlayerPawn*)Obj)->CanRotate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CanRotate = { "CanRotate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASPlayerPawn), &Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CanRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanRotate_MetaData), NewProp_CanRotate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPlayerPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_RotatePitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MinZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_MaxZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_SpringArmComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_TargetZoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPlayerPawn_Statics::NewProp_CanRotate,
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
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASPlayerPawn, ASPlayerPawn::StaticClass, TEXT("ASPlayerPawn"), &Z_Registration_Info_UClass_ASPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerPawn), 3301828257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_1787794083(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
