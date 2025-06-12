// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/HorrorPlayerCharacter.h"

#ifdef HORROR_HorrorPlayerCharacter_generated_h
#error "HorrorPlayerCharacter.generated.h already included, missing '#pragma once' in HorrorPlayerCharacter.h"
#endif
#define HORROR_HorrorPlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHorrorPlayerCharacter ***************************************************
HORROR_API UClass* Z_Construct_UClass_AHorrorPlayerCharacter_NoRegister();

#define FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorrorPlayerCharacter(); \
	friend struct Z_Construct_UClass_AHorrorPlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORROR_API UClass* Z_Construct_UClass_AHorrorPlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHorrorPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Horror"), Z_Construct_UClass_AHorrorPlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHorrorPlayerCharacter)


#define FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHorrorPlayerCharacter(AHorrorPlayerCharacter&&) = delete; \
	AHorrorPlayerCharacter(const AHorrorPlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorrorPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorrorPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHorrorPlayerCharacter) \
	NO_API virtual ~AHorrorPlayerCharacter();


#define FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h_7_PROLOG
#define FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h_10_INCLASS_NO_PURE_DECLS \
	FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHorrorPlayerCharacter;

// ********** End Class AHorrorPlayerCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
