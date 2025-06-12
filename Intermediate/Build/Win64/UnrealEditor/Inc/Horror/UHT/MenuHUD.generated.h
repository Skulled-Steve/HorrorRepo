// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/MenuHUD.h"

#ifdef HORROR_MenuHUD_generated_h
#error "MenuHUD.generated.h already included, missing '#pragma once' in MenuHUD.h"
#endif
#define HORROR_MenuHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMenuHUD *****************************************************************
HORROR_API UClass* Z_Construct_UClass_AMenuHUD_NoRegister();

#define FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMenuHUD(); \
	friend struct Z_Construct_UClass_AMenuHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORROR_API UClass* Z_Construct_UClass_AMenuHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AMenuHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horror"), Z_Construct_UClass_AMenuHUD_NoRegister) \
	DECLARE_SERIALIZER(AMenuHUD)


#define FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMenuHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMenuHUD(AMenuHUD&&) = delete; \
	AMenuHUD(const AMenuHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMenuHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMenuHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMenuHUD) \
	NO_API virtual ~AMenuHUD();


#define FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h_9_PROLOG
#define FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h_12_INCLASS_NO_PURE_DECLS \
	FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMenuHUD;

// ********** End Class AMenuHUD *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
