// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelSpawnersFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnersFactories() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelAssetSpawnerFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelAssetSpawnerFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerGroupFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerGroupFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMeshSpawnerFactory *************************************************
void UVoxelMeshSpawnerFactory::StaticRegisterNativesUVoxelMeshSpawnerFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory;
UClass* UVoxelMeshSpawnerFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawnerFactory;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerFactory"),
			Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawnerFactory,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawnerFactory_NoRegister()
{
	return UVoxelMeshSpawnerFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelSpawnersFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelSpawnersFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics::ClassParams = {
	&UVoxelMeshSpawnerFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawnerFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerFactory);
UVoxelMeshSpawnerFactory::~UVoxelMeshSpawnerFactory() {}
// ********** End Class UVoxelMeshSpawnerFactory ***************************************************

// ********** Begin Class UVoxelMeshSpawnerGroupFactory ********************************************
void UVoxelMeshSpawnerGroupFactory::StaticRegisterNativesUVoxelMeshSpawnerGroupFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory;
UClass* UVoxelMeshSpawnerGroupFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawnerGroupFactory;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerGroupFactory"),
			Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawnerGroupFactory,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_NoRegister()
{
	return UVoxelMeshSpawnerGroupFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelSpawnersFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelSpawnersFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerGroupFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics::ClassParams = {
	&UVoxelMeshSpawnerGroupFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerGroupFactory);
UVoxelMeshSpawnerGroupFactory::~UVoxelMeshSpawnerGroupFactory() {}
// ********** End Class UVoxelMeshSpawnerGroupFactory **********************************************

// ********** Begin Class UVoxelAssetSpawnerFactory ************************************************
void UVoxelAssetSpawnerFactory::StaticRegisterNativesUVoxelAssetSpawnerFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory;
UClass* UVoxelAssetSpawnerFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelAssetSpawnerFactory;
	if (!Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelAssetSpawnerFactory"),
			Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory.InnerSingleton,
			StaticRegisterNativesUVoxelAssetSpawnerFactory,
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
	return Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelAssetSpawnerFactory_NoRegister()
{
	return UVoxelAssetSpawnerFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelSpawnersFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelSpawnersFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetSpawnerFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics::ClassParams = {
	&UVoxelAssetSpawnerFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelAssetSpawnerFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory.OuterSingleton, Z_Construct_UClass_UVoxelAssetSpawnerFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetSpawnerFactory);
UVoxelAssetSpawnerFactory::~UVoxelAssetSpawnerFactory() {}
// ********** End Class UVoxelAssetSpawnerFactory **************************************************

// ********** Begin Class UVoxelSpawnerGroupFactory ************************************************
void UVoxelSpawnerGroupFactory::StaticRegisterNativesUVoxelSpawnerGroupFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory;
UClass* UVoxelSpawnerGroupFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawnerGroupFactory;
	if (!Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerGroupFactory"),
			Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory.InnerSingleton,
			StaticRegisterNativesUVoxelSpawnerGroupFactory,
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
	return Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawnerGroupFactory_NoRegister()
{
	return UVoxelSpawnerGroupFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelSpawnersFactories.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelSpawnersFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerGroupFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics::ClassParams = {
	&UVoxelSpawnerGroupFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawnerGroupFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerGroupFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerGroupFactory);
UVoxelSpawnerGroupFactory::~UVoxelSpawnerGroupFactory() {}
// ********** End Class UVoxelSpawnerGroupFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnersFactories_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMeshSpawnerFactory, UVoxelMeshSpawnerFactory::StaticClass, TEXT("UVoxelMeshSpawnerFactory"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerFactory), 2616061818U) },
		{ Z_Construct_UClass_UVoxelMeshSpawnerGroupFactory, UVoxelMeshSpawnerGroupFactory::StaticClass, TEXT("UVoxelMeshSpawnerGroupFactory"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerGroupFactory), 4266830734U) },
		{ Z_Construct_UClass_UVoxelAssetSpawnerFactory, UVoxelAssetSpawnerFactory::StaticClass, TEXT("UVoxelAssetSpawnerFactory"), &Z_Registration_Info_UClass_UVoxelAssetSpawnerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetSpawnerFactory), 4152173269U) },
		{ Z_Construct_UClass_UVoxelSpawnerGroupFactory, UVoxelSpawnerGroupFactory::StaticClass, TEXT("UVoxelSpawnerGroupFactory"), &Z_Registration_Info_UClass_UVoxelSpawnerGroupFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerGroupFactory), 296960940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnersFactories_h__Script_VoxelEditor_2340776367(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnersFactories_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelSpawnersFactories_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
