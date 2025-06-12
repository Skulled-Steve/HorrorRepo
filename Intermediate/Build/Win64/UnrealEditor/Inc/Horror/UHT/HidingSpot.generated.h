// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/HidingSpot.h"

#ifdef HORROR_HidingSpot_generated_h
#error "HidingSpot.generated.h already included, missing '#pragma once' in HidingSpot.h"
#endif
#define HORROR_HidingSpot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHidingSpot **************************************************************
HORROR_API UClass* Z_Construct_UClass_AHidingSpot_NoRegister();

#define FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHidingSpot(); \
	friend struct Z_Construct_UClass_AHidingSpot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORROR_API UClass* Z_Construct_UClass_AHidingSpot_NoRegister(); \
public: \
	DECLARE_CLASS2(AHidingSpot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horror"), Z_Construct_UClass_AHidingSpot_NoRegister) \
	DECLARE_SERIALIZER(AHidingSpot)


#define FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHidingSpot(AHidingSpot&&) = delete; \
	AHidingSpot(const AHidingSpot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHidingSpot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHidingSpot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHidingSpot) \
	NO_API virtual ~AHidingSpot();


#define FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h_7_PROLOG
#define FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h_10_INCLASS_NO_PURE_DECLS \
	FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHidingSpot;

// ********** End Class AHidingSpot ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
