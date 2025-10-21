// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelGraphMacroAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphMacroAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphMacroAssetFactory *********************************************
void UVoxelGraphMacroAssetFactory::StaticRegisterNativesUVoxelGraphMacroAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory;
UClass* UVoxelGraphMacroAssetFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphMacroAssetFactory;
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphMacroAssetFactory"),
			Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.InnerSingleton,
			StaticRegisterNativesUVoxelGraphMacroAssetFactory,
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
	return Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory_NoRegister()
{
	return UVoxelGraphMacroAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelGraphMacroAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelGraphMacroAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::ClassParams = {
	&UVoxelGraphMacroAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphMacroAssetFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroAssetFactory);
UVoxelGraphMacroAssetFactory::~UVoxelGraphMacroAssetFactory() {}
// ********** End Class UVoxelGraphMacroAssetFactory ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphMacroAssetFactory, UVoxelGraphMacroAssetFactory::StaticClass, TEXT("UVoxelGraphMacroAssetFactory"), &Z_Registration_Info_UClass_UVoxelGraphMacroAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroAssetFactory), 2331846187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h__Script_VoxelEditor_769849581(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphMacroAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
