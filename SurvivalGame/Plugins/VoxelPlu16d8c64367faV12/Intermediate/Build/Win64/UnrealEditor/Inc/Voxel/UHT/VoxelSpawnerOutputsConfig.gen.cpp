// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelSpawnerOutputsConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerOutputsConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSpawnerOutputsConfig ***********************************************
void UVoxelSpawnerOutputsConfig::StaticRegisterNativesUVoxelSpawnerOutputsConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig;
UClass* UVoxelSpawnerOutputsConfig::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawnerOutputsConfig;
	if (!Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerOutputsConfig"),
			Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.InnerSingleton,
			StaticRegisterNativesUVoxelSpawnerOutputsConfig,
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
	return Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister()
{
	return UVoxelSpawnerOutputsConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerOutputsConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerOutputsConfig.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerOutputsConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::ClassParams = {
	&UVoxelSpawnerOutputsConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerOutputsConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig.OuterSingleton;
}
UVoxelSpawnerOutputsConfig::UVoxelSpawnerOutputsConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerOutputsConfig);
UVoxelSpawnerOutputsConfig::~UVoxelSpawnerOutputsConfig() {}
// ********** End Class UVoxelSpawnerOutputsConfig *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawnerOutputsConfig, UVoxelSpawnerOutputsConfig::StaticClass, TEXT("UVoxelSpawnerOutputsConfig"), &Z_Registration_Info_UClass_UVoxelSpawnerOutputsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerOutputsConfig), 3521770558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h__Script_Voxel_1699625620(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerOutputsConfig_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
