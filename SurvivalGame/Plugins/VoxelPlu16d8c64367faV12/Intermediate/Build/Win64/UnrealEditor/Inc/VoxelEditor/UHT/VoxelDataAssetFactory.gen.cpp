// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelDataAssetFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelDataAssetFactory ***************************************************
void UVoxelDataAssetFactory::StaticRegisterNativesUVoxelDataAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataAssetFactory;
UClass* UVoxelDataAssetFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelDataAssetFactory;
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataAssetFactory"),
			Z_Registration_Info_UClass_UVoxelDataAssetFactory.InnerSingleton,
			StaticRegisterNativesUVoxelDataAssetFactory,
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
	return Z_Registration_Info_UClass_UVoxelDataAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataAssetFactory_NoRegister()
{
	return UVoxelDataAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelDataAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFactory_Statics::ClassParams = {
	&UVoxelDataAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataAssetFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFactory);
UVoxelDataAssetFactory::~UVoxelDataAssetFactory() {}
// ********** End Class UVoxelDataAssetFactory *****************************************************

// ********** Begin Class UVoxelDataAssetFromMeshImporterFactory ***********************************
void UVoxelDataAssetFromMeshImporterFactory::StaticRegisterNativesUVoxelDataAssetFromMeshImporterFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory;
UClass* UVoxelDataAssetFromMeshImporterFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelDataAssetFromMeshImporterFactory;
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataAssetFromMeshImporterFactory"),
			Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.InnerSingleton,
			StaticRegisterNativesUVoxelDataAssetFromMeshImporterFactory,
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
	return Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister()
{
	return UVoxelDataAssetFromMeshImporterFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshImporter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshImporter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMeshImporterFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter = { "MeshImporter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAssetFromMeshImporterFactory, MeshImporter), Z_Construct_UClass_AVoxelMeshImporter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshImporter_MetaData), NewProp_MeshImporter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams = {
	&UVoxelDataAssetFromMeshImporterFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMeshImporterFactory);
UVoxelDataAssetFromMeshImporterFactory::~UVoxelDataAssetFromMeshImporterFactory() {}
// ********** End Class UVoxelDataAssetFromMeshImporterFactory *************************************

// ********** Begin Class UVoxelDataAssetFromMagicaVoxFactory **************************************
void UVoxelDataAssetFromMagicaVoxFactory::StaticRegisterNativesUVoxelDataAssetFromMagicaVoxFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory;
UClass* UVoxelDataAssetFromMagicaVoxFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelDataAssetFromMagicaVoxFactory;
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataAssetFromMagicaVoxFactory"),
			Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.InnerSingleton,
			StaticRegisterNativesUVoxelDataAssetFromMagicaVoxFactory,
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
	return Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister()
{
	return UVoxelDataAssetFromMagicaVoxFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePalette_MetaData[] = {
		{ "Category", "Import configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, the material index will be set to the palette index (Single Index material config)\n// If true, the palette will be read and the color will be imported instead (RGB material config)\n// If you're not sure, leave to true\n" },
#endif
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, the material index will be set to the palette index (Single Index material config)\nIf true, the palette will be read and the color will be imported instead (RGB material config)\nIf you're not sure, leave to true" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUsePalette_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePalette;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMagicaVoxFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit(void* Obj)
{
	((UVoxelDataAssetFromMagicaVoxFactory*)Obj)->bUsePalette = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette = { "bUsePalette", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDataAssetFromMagicaVoxFactory), &Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePalette_MetaData), NewProp_bUsePalette_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams = {
	&UVoxelDataAssetFromMagicaVoxFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMagicaVoxFactory);
UVoxelDataAssetFromMagicaVoxFactory::~UVoxelDataAssetFromMagicaVoxFactory() {}
// ********** End Class UVoxelDataAssetFromMagicaVoxFactory ****************************************

// ********** Begin Class UVoxelDataAssetFromRawVoxFactory *****************************************
void UVoxelDataAssetFromRawVoxFactory::StaticRegisterNativesUVoxelDataAssetFromRawVoxFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory;
UClass* UVoxelDataAssetFromRawVoxFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelDataAssetFromRawVoxFactory;
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataAssetFromRawVoxFactory"),
			Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.InnerSingleton,
			StaticRegisterNativesUVoxelDataAssetFromRawVoxFactory,
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
	return Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_NoRegister()
{
	return UVoxelDataAssetFromRawVoxFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromRawVoxFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::ClassParams = {
	&UVoxelDataAssetFromRawVoxFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromRawVoxFactory);
UVoxelDataAssetFromRawVoxFactory::~UVoxelDataAssetFromRawVoxFactory() {}
// ********** End Class UVoxelDataAssetFromRawVoxFactory *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataAssetFactory, UVoxelDataAssetFactory::StaticClass, TEXT("UVoxelDataAssetFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFactory), 2606945791U) },
		{ Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory, UVoxelDataAssetFromMeshImporterFactory::StaticClass, TEXT("UVoxelDataAssetFromMeshImporterFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFromMeshImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFromMeshImporterFactory), 680723638U) },
		{ Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory, UVoxelDataAssetFromMagicaVoxFactory::StaticClass, TEXT("UVoxelDataAssetFromMagicaVoxFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFromMagicaVoxFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFromMagicaVoxFactory), 2311141396U) },
		{ Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory, UVoxelDataAssetFromRawVoxFactory::StaticClass, TEXT("UVoxelDataAssetFromRawVoxFactory"), &Z_Registration_Info_UClass_UVoxelDataAssetFromRawVoxFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetFromRawVoxFactory), 2079732425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h__Script_VoxelEditor_2934533496(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelDataAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
