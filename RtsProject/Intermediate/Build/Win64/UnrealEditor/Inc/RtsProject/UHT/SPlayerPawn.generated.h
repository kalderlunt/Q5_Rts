// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef RTSPROJECT_SPlayerPawn_generated_h
#error "SPlayerPawn.generated.h already included, missing '#pragma once' in SPlayerPawn.h"
#endif
#define RTSPROJECT_SPlayerPawn_generated_h

#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSelectionBox); \
	DECLARE_FUNCTION(execMouseRightReleased); \
	DECLARE_FUNCTION(execMouseRightPressed); \
	DECLARE_FUNCTION(execMouseLeftReleased); \
	DECLARE_FUNCTION(execLeftMouseInputHeld); \
	DECLARE_FUNCTION(execMouseLeftPressed); \
	DECLARE_FUNCTION(execGetSelectedObject); \
	DECLARE_FUNCTION(execCameraBounds); \
	DECLARE_FUNCTION(execEdgeScroll); \
	DECLARE_FUNCTION(execRotateVertical); \
	DECLARE_FUNCTION(execRotateHorizontal); \
	DECLARE_FUNCTION(execDisableRotate); \
	DECLARE_FUNCTION(execEnableRotate); \
	DECLARE_FUNCTION(execRotateLeft); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execZoom); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward); \
	DECLARE_FUNCTION(execGetTerrainPosition);


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPlayerPawn(); \
	friend struct Z_Construct_UClass_ASPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(ASPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RtsProject"), NO_API) \
	DECLARE_SERIALIZER(ASPlayerPawn)


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASPlayerPawn(ASPlayerPawn&&); \
	ASPlayerPawn(const ASPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPlayerPawn) \
	NO_API virtual ~ASPlayerPawn();


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_13_PROLOG
#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSPROJECT_API UClass* StaticClass<class ASPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
