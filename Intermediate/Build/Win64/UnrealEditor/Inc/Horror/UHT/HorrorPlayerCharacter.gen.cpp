// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror/Public/Player/HorrorPlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorrorPlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
HORROR_API UClass* Z_Construct_UClass_AHorrorPlayerCharacter();
HORROR_API UClass* Z_Construct_UClass_AHorrorPlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHorrorPlayerCharacter ***************************************************
void AHorrorPlayerCharacter::StaticRegisterNativesAHorrorPlayerCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHorrorPlayerCharacter;
UClass* AHorrorPlayerCharacter::GetPrivateStaticClass()
{
	using TClass = AHorrorPlayerCharacter;
	if (!Z_Registration_Info_UClass_AHorrorPlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorrorPlayerCharacter"),
			Z_Registration_Info_UClass_AHorrorPlayerCharacter.InnerSingleton,
			StaticRegisterNativesAHorrorPlayerCharacter,
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
	return Z_Registration_Info_UClass_AHorrorPlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorrorPlayerCharacter_NoRegister()
{
	return AHorrorPlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorrorPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/HorrorPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/HorrorPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "HorrorPlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/HorrorPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorrorPlayerCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorPlayerCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorrorPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorPlayerCharacter_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHorrorPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Horror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorPlayerCharacter_Statics::ClassParams = {
	&AHorrorPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHorrorPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorPlayerCharacter_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHorrorPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AHorrorPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorPlayerCharacter.OuterSingleton, Z_Construct_UClass_AHorrorPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorrorPlayerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorPlayerCharacter);
AHorrorPlayerCharacter::~AHorrorPlayerCharacter() {}
// ********** End Class AHorrorPlayerCharacter *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h__Script_Horror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorPlayerCharacter, AHorrorPlayerCharacter::StaticClass, TEXT("AHorrorPlayerCharacter"), &Z_Registration_Info_UClass_AHorrorPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorPlayerCharacter), 720519823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h__Script_Horror_3755843993(TEXT("/Script/Horror"),
	Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h__Script_Horror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Player_HorrorPlayerCharacter_h__Script_Horror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
