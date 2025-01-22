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

// Begin Interface USelectable
void USelectable::StaticRegisterNativesUSelectable()
{
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_USelectable, USelectable::StaticClass, TEXT("USelectable"), &Z_Registration_Info_UClass_USelectable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectable), 2719983104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_3830013992(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
