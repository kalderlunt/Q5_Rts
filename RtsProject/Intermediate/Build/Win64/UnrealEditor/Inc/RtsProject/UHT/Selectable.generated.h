// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Selectable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTSPROJECT_Selectable_generated_h
#error "Selectable.generated.h already included, missing '#pragma once' in Selectable.h"
#endif
#define RTSPROJECT_Selectable_generated_h

#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHighlight); \
	DECLARE_FUNCTION(execDeSelect); \
	DECLARE_FUNCTION(execSelect);


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USelectable(USelectable&&); \
	USelectable(const USelectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectable) \
	NO_API virtual ~USelectable();


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectable(); \
	friend struct Z_Construct_UClass_USelectable_Statics; \
public: \
	DECLARE_CLASS(USelectable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RtsProject"), NO_API) \
	DECLARE_SERIALIZER(USelectable)


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectable() {} \
public: \
	typedef USelectable UClassType; \
	typedef ISelectable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_10_PROLOG
#define FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSPROJECT_API UClass* StaticClass<class USelectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_OneDrive___La_Horde_B2_Quetes_Q5_Rts_Q5_Rts_RtsProject_Source_RtsProject_Public_Selectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
