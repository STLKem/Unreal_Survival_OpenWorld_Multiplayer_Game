// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelGraphDataItemConfigFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphDataItemConfigFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphDataItemConfigFactory *****************************************
void UVoxelGraphDataItemConfigFactory::StaticRegisterNativesUVoxelGraphDataItemConfigFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory;
UClass* UVoxelGraphDataItemConfigFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphDataItemConfigFactory;
	if (!Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphDataItemConfigFactory"),
			Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory.InnerSingleton,
			StaticRegisterNativesUVoxelGraphDataItemConfigFactory,
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
	return Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_NoRegister()
{
	return UVoxelGraphDataItemConfigFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelGraphDataItemConfigFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelGraphDataItemConfigFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphDataItemConfigFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::ClassParams = {
	&UVoxelGraphDataItemConfigFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphDataItemConfigFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory.OuterSingleton, Z_Construct_UClass_UVoxelGraphDataItemConfigFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphDataItemConfigFactory);
UVoxelGraphDataItemConfigFactory::~UVoxelGraphDataItemConfigFactory() {}
// ********** End Class UVoxelGraphDataItemConfigFactory *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphDataItemConfigFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphDataItemConfigFactory, UVoxelGraphDataItemConfigFactory::StaticClass, TEXT("UVoxelGraphDataItemConfigFactory"), &Z_Registration_Info_UClass_UVoxelGraphDataItemConfigFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphDataItemConfigFactory), 3392275306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphDataItemConfigFactory_h__Script_VoxelEditor_401652960(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphDataItemConfigFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelGraphDataItemConfigFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
