// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorror_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Horror;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Horror()
	{
		if (!Z_Registration_Info_UPackage__Script_Horror.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Horror",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5503E661,
				0xF3EDA248,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Horror.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Horror.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Horror(Z_Construct_UPackage__Script_Horror, TEXT("/Script/Horror"), Z_Registration_Info_UPackage__Script_Horror, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5503E661, 0xF3EDA248));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
