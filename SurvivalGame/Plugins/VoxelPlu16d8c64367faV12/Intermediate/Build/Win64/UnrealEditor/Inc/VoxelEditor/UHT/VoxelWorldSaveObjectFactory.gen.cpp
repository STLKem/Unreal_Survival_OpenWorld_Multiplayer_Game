// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelWorldSaveObjectFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWorldSaveObjectFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelWorldSaveObjectFactory *********************************************
void UVoxelWorldSaveObjectFactory::StaticRegisterNativesUVoxelWorldSaveObjectFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory;
UClass* UVoxelWorldSaveObjectFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelWorldSaveObjectFactory;
	if (!Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelWorldSaveObjectFactory"),
			Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.InnerSingleton,
			StaticRegisterNativesUVoxelWorldSaveObjectFactory,
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
	return Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory_NoRegister()
{
	return UVoxelWorldSaveObjectFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelWorldSaveObjectFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelWorldSaveObjectFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldSaveObjectFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::ClassParams = {
	&UVoxelWorldSaveObjectFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelWorldSaveObjectFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.OuterSingleton, Z_Construct_UClass_UVoxelWorldSaveObjectFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldSaveObjectFactory);
UVoxelWorldSaveObjectFactory::~UVoxelWorldSaveObjectFactory() {}
// ********** End Class UVoxelWorldSaveObjectFactory ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelWorldSaveObjectFactory, UVoxelWorldSaveObjectFactory::StaticClass, TEXT("UVoxelWorldSaveObjectFactory"), &Z_Registration_Info_UClass_UVoxelWorldSaveObjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelWorldSaveObjectFactory), 3533816500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h__Script_VoxelEditor_1363768307(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelWorldSaveObjectFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
