// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RtsProject/Public/Input/PlayerInputActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInputActions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
RTSPROJECT_API UClass* Z_Construct_UClass_UPlayerInputActions();
RTSPROJECT_API UClass* Z_Construct_UClass_UPlayerInputActions_NoRegister();
UPackage* Z_Construct_UPackage__Script_RtsProject();
// End Cross Module References

// Begin Class UPlayerInputActions
void UPlayerInputActions::StaticRegisterNativesUPlayerInputActions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInputActions);
UClass* Z_Construct_UClass_UPlayerInputActions_NoRegister()
{
	return UPlayerInputActions::StaticClass();
}
struct Z_Construct_UClass_UPlayerInputActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Input/PlayerInputActions.h" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContextDefault_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default Player Mapping Context */" },
#endif
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Player Mapping Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPriorityDefault_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Look_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Select_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPlacement_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContextPlacement_MetaData[] = {
		{ "Category", "Placement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Placement Mapping Context **/" },
#endif
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Placement Mapping Context *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPriorityPlacement_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Place_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceCancel_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/Input/PlayerInputActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContextDefault;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapPriorityDefault;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Zoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Select;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rotate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestPlacement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContextPlacement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapPriorityPlacement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Place;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceCancel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInputActions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MappingContextDefault = { "MappingContextDefault", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, MappingContextDefault), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContextDefault_MetaData), NewProp_MappingContextDefault_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MapPriorityDefault = { "MapPriorityDefault", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, MapPriorityDefault), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPriorityDefault_MetaData), NewProp_MapPriorityDefault_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Move_MetaData), NewProp_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Look = { "Look", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Look_MetaData), NewProp_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, Zoom), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Zoom_MetaData), NewProp_Zoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Select = { "Select", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, Select), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Select_MetaData), NewProp_Select_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Rotate = { "Rotate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, Rotate), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotate_MetaData), NewProp_Rotate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_TestPlacement = { "TestPlacement", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, TestPlacement), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPlacement_MetaData), NewProp_TestPlacement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MappingContextPlacement = { "MappingContextPlacement", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, MappingContextPlacement), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContextPlacement_MetaData), NewProp_MappingContextPlacement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MapPriorityPlacement = { "MapPriorityPlacement", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, MapPriorityPlacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPriorityPlacement_MetaData), NewProp_MapPriorityPlacement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Place = { "Place", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, Place), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Place_MetaData), NewProp_Place_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_PlaceCancel = { "PlaceCancel", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInputActions, PlaceCancel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceCancel_MetaData), NewProp_PlaceCancel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInputActions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MappingContextDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MapPriorityDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Zoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Select,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Rotate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_TestPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MappingContextPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_MapPriorityPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_Place,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInputActions_Statics::NewProp_PlaceCancel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInputActions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInputActions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RtsProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInputActions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInputActions_Statics::ClassParams = {
	&UPlayerInputActions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerInputActions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInputActions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInputActions_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInputActions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInputActions()
{
	if (!Z_Registration_Info_UClass_UPlayerInputActions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInputActions.OuterSingleton, Z_Construct_UClass_UPlayerInputActions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInputActions.OuterSingleton;
}
template<> RTSPROJECT_API UClass* StaticClass<UPlayerInputActions>()
{
	return UPlayerInputActions::StaticClass();
}
UPlayerInputActions::UPlayerInputActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInputActions);
UPlayerInputActions::~UPlayerInputActions() {}
// End Class UPlayerInputActions

// Begin Registration
struct Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_PlayerInputActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInputActions, UPlayerInputActions::StaticClass, TEXT("UPlayerInputActions"), &Z_Registration_Info_UClass_UPlayerInputActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInputActions), 1223023335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_PlayerInputActions_h_3204972716(TEXT("/Script/RtsProject"),
	Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_PlayerInputActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Input_PlayerInputActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
