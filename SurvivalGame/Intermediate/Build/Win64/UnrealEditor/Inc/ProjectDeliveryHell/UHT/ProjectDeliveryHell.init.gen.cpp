// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDeliveryHell_init() {}
	PROJECTDELIVERYHELL_API UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnEnemyDied__DelegateSignature();
	PROJECTDELIVERYHELL_API UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature();
	PROJECTDELIVERYHELL_API UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectDeliveryHell;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectDeliveryHell.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnEnemyDied__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectDeliveryHell",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8A926A19,
				0xE963FA80,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectDeliveryHell.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectDeliveryHell.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectDeliveryHell(Z_Construct_UPackage__Script_ProjectDeliveryHell, TEXT("/Script/ProjectDeliveryHell"), Z_Registration_Info_UPackage__Script_ProjectDeliveryHell, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8A926A19, 0xE963FA80));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
