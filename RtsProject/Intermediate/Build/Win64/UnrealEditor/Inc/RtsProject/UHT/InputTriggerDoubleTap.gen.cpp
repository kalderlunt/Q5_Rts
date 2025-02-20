// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/Input/InputTriggerDoubleTap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTriggerDoubleTap() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
RTSPROJECT_API UClass* Z_Construct_UClass_UInputTriggerDoubleTap();
RTSPROJECT_API UClass* Z_Construct_UClass_UInputTriggerDoubleTap_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class UInputTriggerDoubleTap
void UInputTriggerDoubleTap::StaticRegisterNativesUInputTriggerDoubleTap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerDoubleTap);
UClass* Z_Construct_UClass_UInputTriggerDoubleTap_NoRegister()
{
	return UInputTriggerDoubleTap::StaticClass();
}
struct Z_Construct_UClass_UInputTriggerDoubleTap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Double Tap" },
		{ "IncludePath", "Input/InputTriggerDoubleTap.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerDoubleTap.h" },
		{ "NotInputConfigurable", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Input/InputTriggerDoubleTap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerDoubleTap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerDoubleTap_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputTriggerDoubleTap, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerDoubleTap_Statics::NewProp_Delay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputTriggerDoubleTap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputTrigger,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerDoubleTap_Statics::ClassParams = {
	&UInputTriggerDoubleTap::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputTriggerDoubleTap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputTriggerDoubleTap()
{
	if (!Z_Registration_Info_UClass_UInputTriggerDoubleTap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerDoubleTap.OuterSingleton, Z_Construct_UClass_UInputTriggerDoubleTap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputTriggerDoubleTap.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<UInputTriggerDoubleTap>()
{
	return UInputTriggerDoubleTap::StaticClass();
}
UInputTriggerDoubleTap::UInputTriggerDoubleTap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerDoubleTap);
UInputTriggerDoubleTap::~UInputTriggerDoubleTap() {}
// End Class UInputTriggerDoubleTap

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_InputTriggerDoubleTap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputTriggerDoubleTap, UInputTriggerDoubleTap::StaticClass, TEXT("UInputTriggerDoubleTap"), &Z_Registration_Info_UClass_UInputTriggerDoubleTap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerDoubleTap), 340123331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_InputTriggerDoubleTap_h_4157614934(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_InputTriggerDoubleTap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_InputTriggerDoubleTap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
