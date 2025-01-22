// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/Selectable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
RTSPROJECT_API UClass* Z_Construct_UClass_USelectable();
RTSPROJECT_API UClass* Z_Construct_UClass_USelectable_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Interface USelectable Function DeSelect
struct Z_Construct_UFunction_USelectable_DeSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectable_DeSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectable, nullptr, "DeSelect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectable_DeSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectable_DeSelect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USelectable_DeSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectable_DeSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISelectable::execDeSelect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeSelect();
	P_NATIVE_END;
}
// End Interface USelectable Function DeSelect

// Begin Interface USelectable Function Highlight
struct Z_Construct_UFunction_USelectable_Highlight_Statics
{
	struct Selectable_eventHighlight_Parms
	{
		bool Highlight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Highlight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Highlight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Highlight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USelectable_Highlight_Statics::NewProp_Highlight_SetBit(void* Obj)
{
	((Selectable_eventHighlight_Parms*)Obj)->Highlight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectable_Highlight_Statics::NewProp_Highlight = { "Highlight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Selectable_eventHighlight_Parms), &Z_Construct_UFunction_USelectable_Highlight_Statics::NewProp_Highlight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Highlight_MetaData), NewProp_Highlight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectable_Highlight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectable_Highlight_Statics::NewProp_Highlight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectable_Highlight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectable_Highlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectable, nullptr, "Highlight", nullptr, nullptr, Z_Construct_UFunction_USelectable_Highlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectable_Highlight_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectable_Highlight_Statics::Selectable_eventHighlight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectable_Highlight_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectable_Highlight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USelectable_Highlight_Statics::Selectable_eventHighlight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USelectable_Highlight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectable_Highlight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISelectable::execHighlight)
{
	P_GET_UBOOL(Z_Param_Highlight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Highlight(Z_Param_Highlight);
	P_NATIVE_END;
}
// End Interface USelectable Function Highlight

// Begin Interface USelectable Function Select
struct Z_Construct_UFunction_USelectable_Select_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectable_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectable, nullptr, "Select", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectable_Select_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectable_Select_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USelectable_Select()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectable_Select_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISelectable::execSelect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Select();
	P_NATIVE_END;
}
// End Interface USelectable Function Select

// Begin Interface USelectable
void USelectable::StaticRegisterNativesUSelectable()
{
	UClass* Class = USelectable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeSelect", &ISelectable::execDeSelect },
		{ "Highlight", &ISelectable::execHighlight },
		{ "Select", &ISelectable::execSelect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectable);
UClass* Z_Construct_UClass_USelectable_NoRegister()
{
	return USelectable::StaticClass();
}
struct Z_Construct_UClass_USelectable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selectable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectable_DeSelect, "DeSelect" }, // 817383939
		{ &Z_Construct_UFunction_USelectable_Highlight, "Highlight" }, // 3685302499
		{ &Z_Construct_UFunction_USelectable_Select, "Select" }, // 2525546104
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USelectable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectable_Statics::ClassParams = {
	&USelectable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectable_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectable()
{
	if (!Z_Registration_Info_UClass_USelectable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectable.OuterSingleton, Z_Construct_UClass_USelectable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectable.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<USelectable>()
{
	return USelectable::StaticClass();
}
USelectable::USelectable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectable);
USelectable::~USelectable() {}
// End Interface USelectable

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelectable, USelectable::StaticClass, TEXT("USelectable"), &Z_Registration_Info_UClass_USelectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectable), 1221920277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_2829416580(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
