// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror/Public/Interactables/HidingSpot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHidingSpot() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
HORROR_API UClass* Z_Construct_UClass_AHidingSpot();
HORROR_API UClass* Z_Construct_UClass_AHidingSpot_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHidingSpot **************************************************************
void AHidingSpot::StaticRegisterNativesAHidingSpot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHidingSpot;
UClass* AHidingSpot::GetPrivateStaticClass()
{
	using TClass = AHidingSpot;
	if (!Z_Registration_Info_UClass_AHidingSpot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HidingSpot"),
			Z_Registration_Info_UClass_AHidingSpot.InnerSingleton,
			StaticRegisterNativesAHidingSpot,
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
	return Z_Registration_Info_UClass_AHidingSpot.InnerSingleton;
}
UClass* Z_Construct_UClass_AHidingSpot_NoRegister()
{
	return AHidingSpot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHidingSpot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/HidingSpot.h" },
		{ "ModuleRelativePath", "Public/Interactables/HidingSpot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "HidingSpot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interactables/HidingSpot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHidingSpot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHidingSpot_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHidingSpot, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHidingSpot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHidingSpot_Statics::NewProp_BoxComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHidingSpot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHidingSpot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Horror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHidingSpot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHidingSpot_Statics::ClassParams = {
	&AHidingSpot::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHidingSpot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHidingSpot_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHidingSpot_Statics::Class_MetaDataParams), Z_Construct_UClass_AHidingSpot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHidingSpot()
{
	if (!Z_Registration_Info_UClass_AHidingSpot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHidingSpot.OuterSingleton, Z_Construct_UClass_AHidingSpot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHidingSpot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHidingSpot);
AHidingSpot::~AHidingSpot() {}
// ********** End Class AHidingSpot ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h__Script_Horror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHidingSpot, AHidingSpot::StaticClass, TEXT("AHidingSpot"), &Z_Registration_Info_UClass_AHidingSpot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHidingSpot), 4184104943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h__Script_Horror_1867555676(TEXT("/Script/Horror"),
	Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h__Script_Horror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Interactables_HidingSpot_h__Script_Horror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
