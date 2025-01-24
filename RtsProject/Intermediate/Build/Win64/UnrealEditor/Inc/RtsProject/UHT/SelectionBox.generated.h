// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RTSPROJECT_SelectionBox_generated_h
#error "SelectionBox.generated.h already included, missing '#pragma once' in SelectionBox.h"
#endif
#define RTSPROJECT_SelectionBox_generated_h

#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBoxColliderBeginOverlap); \
	DECLARE_FUNCTION(execHandleHighlight); \
	DECLARE_FUNCTION(execManage); \
	DECLARE_FUNCTION(execAdjust); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASelectionBox(); \
	friend struct Z_Construct_UClass_ASelectionBox_Statics; \
public: \
	DECLARE_CLASS(ASelectionBox, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RtsProject"), NO_API) \
	DECLARE_SERIALIZER(ASelectionBox)


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASelectionBox(ASelectionBox&&); \
	ASelectionBox(const ASelectionBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelectionBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelectionBox); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASelectionBox) \
	NO_API virtual ~ASelectionBox();


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_12_PROLOG
#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_INCLASS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSPROJECT_API UClass* StaticClass<class ASelectionBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_SelectionBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
