// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRtsProject_init() {}
	RTSPROJECT_API UFunction* Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RtsProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RtsProject()
	{
		if (!Z_Registration_Info_UPackage__Script_RtsProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RtsProject_SelectedUpdateDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RtsProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA6FC8411,
				0xA520B8B9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RtsProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RtsProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RtsProject(Z_Construct_UPackage__Script_RtsProject, TEXT("/Script/RtsProject"), Z_Registration_Info_UPackage__Script_RtsProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA6FC8411, 0xA520B8B9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
