// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MenuWidget.h"

#ifdef HORROR_MenuWidget_generated_h
#error "MenuWidget.generated.h already included, missing '#pragma once' in MenuWidget.h"
#endif
#define HORROR_MenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMenuWidget **************************************************************
#define FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_CALLBACK_WRAPPERS
HORROR_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();

#define FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HORROR_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Horror"), Z_Construct_UClass_UMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UMenuWidget)


#define FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenuWidget(UMenuWidget&&) = delete; \
	UMenuWidget(const UMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget) \
	NO_API virtual ~UMenuWidget();


#define FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_7_PROLOG
#define FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_CALLBACK_WRAPPERS \
	FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_INCLASS_NO_PURE_DECLS \
	FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenuWidget;

// ********** End Class UMenuWidget ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
