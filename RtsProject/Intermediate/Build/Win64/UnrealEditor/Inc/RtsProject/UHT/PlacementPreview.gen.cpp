// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/PlacementPreview.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementPreview() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_APlacementPreview();
RTSPROJECT_API UClass* Z_Construct_UClass_APlacementPreview_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_ARtsProjectCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class APlacementPreview
void APlacementPreview::StaticRegisterNativesAPlacementPreview()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlacementPreview);
UClass* Z_Construct_UClass_APlacementPreview_NoRegister()
{
	return APlacementPreview::StaticClass();
}
struct Z_Construct_UClass_APlacementPreview_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlacementPreview.h" },
		{ "ModuleRelativePath", "Public/PlacementPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableClass_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/PlacementPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlacementPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacementPreview.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlacementPreview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacementPreview.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlaceableClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlacementPreview>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlacementPreview_Statics::NewProp_PlaceableClass = { "PlaceableClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacementPreview, PlaceableClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARtsProjectCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableClass_MetaData), NewProp_PlaceableClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacementPreview_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacementPreview, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacementPreview_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacementPreview, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlacementPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementPreview_Statics::NewProp_PlaceableClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementPreview_Statics::NewProp_SceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacementPreview_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlacementPreview_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlacementPreview_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlacementPreview_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlacementPreview_Statics::ClassParams = {
	&APlacementPreview::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlacementPreview_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlacementPreview_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlacementPreview_Statics::Class_MetaDataParams), Z_Construct_UClass_APlacementPreview_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlacementPreview()
{
	if (!Z_Registration_Info_UClass_APlacementPreview.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlacementPreview.OuterSingleton, Z_Construct_UClass_APlacementPreview_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlacementPreview.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<APlacementPreview>()
{
	return APlacementPreview::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlacementPreview);
APlacementPreview::~APlacementPreview() {}
// End Class APlacementPreview

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_PlacementPreview_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlacementPreview, APlacementPreview::StaticClass, TEXT("APlacementPreview"), &Z_Registration_Info_UClass_APlacementPreview, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlacementPreview), 3502822192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_PlacementPreview_h_2323836694(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_PlacementPreview_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_PlacementPreview_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
