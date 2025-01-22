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
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerController();
RTSPROJECT_API UClass* Z_Construct_UClass_ASPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class ASPlayerController
void ASPlayerController::StaticRegisterNativesASPlayerController()
{
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
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
ASPlayerController::ASPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASPlayerController);
ASPlayerController::~ASPlayerController() {}
// End Class ASPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASPlayerController, ASPlayerController::StaticClass, TEXT("ASPlayerController"), &Z_Registration_Info_UClass_ASPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPlayerController), 2069043926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_3671887558(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
