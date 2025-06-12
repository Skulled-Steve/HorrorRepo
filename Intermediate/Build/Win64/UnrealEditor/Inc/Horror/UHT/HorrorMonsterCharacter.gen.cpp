// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Horror/Public/Monster/HorrorMonsterCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorrorMonsterCharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
HORROR_API UClass* Z_Construct_UClass_AHorrorMonsterCharacter();
HORROR_API UClass* Z_Construct_UClass_AHorrorMonsterCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Horror();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHorrorMonsterCharacter Function OnSeePawn *******************************
struct Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics
{
	struct HorrorMonsterCharacter_eventOnSeePawn_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Monster/HorrorMonsterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HorrorMonsterCharacter_eventOnSeePawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHorrorMonsterCharacter, nullptr, "OnSeePawn", Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::HorrorMonsterCharacter_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::HorrorMonsterCharacter_eventOnSeePawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHorrorMonsterCharacter::execOnSeePawn)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePawn(Z_Param_Pawn);
	P_NATIVE_END;
}
// ********** End Class AHorrorMonsterCharacter Function OnSeePawn *********************************

// ********** Begin Class AHorrorMonsterCharacter **************************************************
void AHorrorMonsterCharacter::StaticRegisterNativesAHorrorMonsterCharacter()
{
	UClass* Class = AHorrorMonsterCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSeePawn", &AHorrorMonsterCharacter::execOnSeePawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHorrorMonsterCharacter;
UClass* AHorrorMonsterCharacter::GetPrivateStaticClass()
{
	using TClass = AHorrorMonsterCharacter;
	if (!Z_Registration_Info_UClass_AHorrorMonsterCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorrorMonsterCharacter"),
			Z_Registration_Info_UClass_AHorrorMonsterCharacter.InnerSingleton,
			StaticRegisterNativesAHorrorMonsterCharacter,
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
	return Z_Registration_Info_UClass_AHorrorMonsterCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorrorMonsterCharacter_NoRegister()
{
	return AHorrorMonsterCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorrorMonsterCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster/HorrorMonsterCharacter.h" },
		{ "ModuleRelativePath", "Public/Monster/HorrorMonsterCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "HorrorMonsterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Monster/HorrorMonsterCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHorrorMonsterCharacter_OnSeePawn, "OnSeePawn" }, // 2824040617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorMonsterCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorrorMonsterCharacter_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorMonsterCharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComp_MetaData), NewProp_PawnSensingComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorrorMonsterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorMonsterCharacter_Statics::NewProp_PawnSensingComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorMonsterCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHorrorMonsterCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Horror,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorMonsterCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorMonsterCharacter_Statics::ClassParams = {
	&AHorrorMonsterCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHorrorMonsterCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorMonsterCharacter_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorMonsterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorMonsterCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHorrorMonsterCharacter()
{
	if (!Z_Registration_Info_UClass_AHorrorMonsterCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorMonsterCharacter.OuterSingleton, Z_Construct_UClass_AHorrorMonsterCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorrorMonsterCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorMonsterCharacter);
AHorrorMonsterCharacter::~AHorrorMonsterCharacter() {}
// ********** End Class AHorrorMonsterCharacter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Monster_HorrorMonsterCharacter_h__Script_Horror_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorMonsterCharacter, AHorrorMonsterCharacter::StaticClass, TEXT("AHorrorMonsterCharacter"), &Z_Registration_Info_UClass_AHorrorMonsterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorMonsterCharacter), 601697240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Monster_HorrorMonsterCharacter_h__Script_Horror_3843018122(TEXT("/Script/Horror"),
	Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Monster_HorrorMonsterCharacter_h__Script_Horror_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HorrorRepo_Source_Horror_Public_Monster_HorrorMonsterCharacter_h__Script_Horror_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
