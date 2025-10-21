// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelSpawnerConfigFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerConfigFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSpawnerConfigFactory ***********************************************
void UVoxelSpawnerConfigFactory::StaticRegisterNativesUVoxelSpawnerConfigFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory;
UClass* UVoxelSpawnerConfigFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawnerConfigFactory;
	if (!Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerConfigFactory"),
			Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory.InnerSingleton,
			StaticRegisterNativesUVoxelSpawnerConfigFactory,
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
	return Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory_NoRegister()
{
	return UVoxelSpawnerConfigFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelSpawnerConfigFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelSpawnerConfigFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerConfigFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::ClassParams = {
	&UVoxelSpawnerConfigFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawnerConfigFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerConfigFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerConfigFactory);
UVoxelSpawnerConfigFactory::~UVoxelSpawnerConfigFactory() {}
// ********** End Class UVoxelSpawnerConfigFactory *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnerConfigFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawnerConfigFactory, UVoxelSpawnerConfigFactory::StaticClass, TEXT("UVoxelSpawnerConfigFactory"), &Z_Registration_Info_UClass_UVoxelSpawnerConfigFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerConfigFactory), 2959700743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnerConfigFactory_h__Script_VoxelEditor_4070255579(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnerConfigFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnerConfigFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
