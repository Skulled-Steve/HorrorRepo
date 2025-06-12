// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror/Public/UI/MenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
HORROR_API UClass* Z_Construct_UClass_UMenuWidget();
HORROR_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Horror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMenuWidget Function OnStartGame *****************************************
static FName NAME_UMenuWidget_OnStartGame = FName(TEXT("OnStartGame"));
void UMenuWidget::OnStartGame()
{
	UFunction* Func = FindFunctionChecked(NAME_UMenuWidget_OnStartGame);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuWidget, nullptr, "OnStartGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenuWidget_OnStartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuWidget_OnStartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMenuWidget Function OnStartGame *******************************************

// ********** Begin Class UMenuWidget **************************************************************
void UMenuWidget::StaticRegisterNativesUMenuWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenuWidget;
UClass* UMenuWidget::GetPrivateStaticClass()
{
	using TClass = UMenuWidget;
	if (!Z_Registration_Info_UClass_UMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuWidget"),
			Z_Registration_Info_UClass_UMenuWidget.InnerSingleton,
			StaticRegisterNativesUMenuWidget,
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
	return Z_Registration_Info_UClass_UMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
{
	return UMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MenuWidget.h" },
		{ "ModuleRelativePath", "Public/UI/MenuWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuWidget_OnStartGame, "OnStartGame" }, // 3749699101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Horror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidget_Statics::ClassParams = {
	&UMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuWidget.OuterSingleton, Z_Construct_UClass_UMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuWidget.OuterSingleton;
}
UMenuWidget::UMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
UMenuWidget::~UMenuWidget() {}
// ********** End Class UMenuWidget ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h__Script_Horror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuWidget, UMenuWidget::StaticClass, TEXT("UMenuWidget"), &Z_Registration_Info_UClass_UMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuWidget), 3996474104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h__Script_Horror_1054432288(TEXT("/Script/Horror"),
	Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h__Script_Horror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_UI_MenuWidget_h__Script_Horror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
