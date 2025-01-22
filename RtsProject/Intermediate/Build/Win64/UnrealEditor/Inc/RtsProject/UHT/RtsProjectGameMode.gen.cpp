// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/RtsProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRtsProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RTSPROJECT_API UClass* Z_Construct_UClass_ARtsProjectGameMode();
RTSPROJECT_API UClass* Z_Construct_UClass_ARtsProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class ARtsProjectGameMode
void ARtsProjectGameMode::StaticRegisterNativesARtsProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARtsProjectGameMode);
UClass* Z_Construct_UClass_ARtsProjectGameMode_NoRegister()
{
	return ARtsProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ARtsProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RtsProjectGameMode.h" },
		{ "ModuleRelativePath", "Public/RtsProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARtsProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARtsProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARtsProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARtsProjectGameMode_Statics::ClassParams = {
	&ARtsProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARtsProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARtsProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARtsProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ARtsProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARtsProjectGameMode.OuterSingleton, Z_Construct_UClass_ARtsProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARtsProjectGameMode.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<ARtsProjectGameMode>()
{
	return ARtsProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARtsProjectGameMode);
ARtsProjectGameMode::~ARtsProjectGameMode() {}
// End Class ARtsProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_RtsProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARtsProjectGameMode, ARtsProjectGameMode::StaticClass, TEXT("ARtsProjectGameMode"), &Z_Registration_Info_UClass_ARtsProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARtsProjectGameMode), 2169284024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_RtsProjectGameMode_h_1187642941(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_RtsProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_RtsProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
