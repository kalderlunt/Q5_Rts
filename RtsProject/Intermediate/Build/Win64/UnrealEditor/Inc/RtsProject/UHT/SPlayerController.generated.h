// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataAsset;
class UInputMappingContext;
#ifdef RTSPROJECT_SPlayerController_generated_h
#error "SPlayerController.generated.h already included, missing '#pragma once' in SPlayerController.h"
#endif
#define RTSPROJECT_SPlayerController_generated_h

#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_10_DELEGATE \
RTSPROJECT_API void FSelectedUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& SelectedUpdateDelegate);


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_ClearSelected_Implementation(); \
	virtual void Server_DeSelect_Implementation(AActor* ActorToDeSelect); \
	virtual void Server_Select_Group_Implementation(TArray<AActor*> const& ActorsToSelect); \
	virtual void Server_Select_Implementation(AActor* ActorToSelect); \
	DECLARE_FUNCTION(execGetInputActionsAsset); \
	DECLARE_FUNCTION(execSetInputDefault); \
	DECLARE_FUNCTION(execRemoveInputMapping); \
	DECLARE_FUNCTION(execOnRep_Selected); \
	DECLARE_FUNCTION(execServer_ClearSelected); \
	DECLARE_FUNCTION(execServer_DeSelect); \
	DECLARE_FUNCTION(execServer_Select_Group); \
	DECLARE_FUNCTION(execServer_Select); \
	DECLARE_FUNCTION(execActorSelected); \
	DECLARE_FUNCTION(execGetMousePositionOnTerrain); \
	DECLARE_FUNCTION(execHandle_Selection);


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_CALLBACK_WRAPPERS
#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerController(); \
	friend struct Z_Construct_UClass_ASPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RtsProject"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Selected=NETFIELD_REP_START, \
		NETFIELD_REP_END=Selected	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASPlayerController(ASPlayerController&&); \
	ASPlayerController(const ASPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPlayerController) \
	NO_API virtual ~ASPlayerController();


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_15_PROLOG
#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSPROJECT_API UClass* StaticClass<class ASPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
