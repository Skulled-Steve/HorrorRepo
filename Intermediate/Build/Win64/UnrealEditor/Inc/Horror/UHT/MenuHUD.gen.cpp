// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror/Public/HUD/MenuHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
HORROR_API UClass* Z_Construct_UClass_AMenuHUD();
HORROR_API UClass* Z_Construct_UClass_AMenuHUD_NoRegister();
HORROR_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMenuHUD *****************************************************************
void AMenuHUD::StaticRegisterNativesAMenuHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMenuHUD;
UClass* AMenuHUD::GetPrivateStaticClass()
{
	using TClass = AMenuHUD;
	if (!Z_Registration_Info_UClass_AMenuHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuHUD"),
			Z_Registration_Info_UClass_AMenuHUD.InnerSingleton,
			StaticRegisterNativesAMenuHUD,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMenuHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AMenuHUD_NoRegister()
{
	return AMenuHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMenuHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/MenuHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/MenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/HUD/MenuHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMenuHUD_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMenuHUD, MenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMenuWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuClass_MetaData), NewProp_MenuClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMenuHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMenuHUD_Statics::NewProp_MenuClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMenuHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Horror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMenuHUD_Statics::ClassParams = {
	&AMenuHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMenuHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMenuHUD_Statics::PropPointers),
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMenuHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMenuHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMenuHUD()
{
	if (!Z_Registration_Info_UClass_AMenuHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMenuHUD.OuterSingleton, Z_Construct_UClass_AMenuHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMenuHUD.OuterSingleton;
}
AMenuHUD::AMenuHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuHUD);
AMenuHUD::~AMenuHUD() {}
// ********** End Class AMenuHUD *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h__Script_Horror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMenuHUD, AMenuHUD::StaticClass, TEXT("AMenuHUD"), &Z_Registration_Info_UClass_AMenuHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMenuHUD), 2741433209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h__Script_Horror_4111081300(TEXT("/Script/Horror"),
	Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h__Script_Horror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_HUD_MenuHUD_h__Script_Horror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
