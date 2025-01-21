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
ENGINE_API UClass* Z_Construct_UClass_APawn();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerPawn();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class ASPlayerPawn
void ASPlayerPawn::StaticRegisterNativesASPlayerPawn()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ASPlayerPawn, ASPlayerPawn::StaticClass, TEXT("ASPlayerPawn"), &Z_Registration_Info_UClass_ASPlayerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerPawn), 2974695351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_3087468459(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_SPlayerPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
