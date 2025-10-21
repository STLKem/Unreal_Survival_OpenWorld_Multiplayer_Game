// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelGraphGeneratorAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphGeneratorAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphGeneratorAssetFactory *****************************************
void UVoxelGraphGeneratorAssetFactory::StaticRegisterNativesUVoxelGraphGeneratorAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory;
UClass* UVoxelGraphGeneratorAssetFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphGeneratorAssetFactory;
	if (!Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphGeneratorAssetFactory"),
			Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory.InnerSingleton,
			StaticRegisterNativesUVoxelGraphGeneratorAssetFactory,
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
	return Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_NoRegister()
{
	return UVoxelGraphGeneratorAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelGraphGeneratorAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelGraphGeneratorAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGeneratorAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::ClassParams = {
	&UVoxelGraphGeneratorAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory.OuterSingleton, Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGeneratorAssetFactory);
UVoxelGraphGeneratorAssetFactory::~UVoxelGraphGeneratorAssetFactory() {}
// ********** End Class UVoxelGraphGeneratorAssetFactory *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphGeneratorAssetFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphGeneratorAssetFactory, UVoxelGraphGeneratorAssetFactory::StaticClass, TEXT("UVoxelGraphGeneratorAssetFactory"), &Z_Registration_Info_UClass_UVoxelGraphGeneratorAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphGeneratorAssetFactory), 464691159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphGeneratorAssetFactory_h__Script_VoxelEditor_2492565236(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphGeneratorAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphGeneratorAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
