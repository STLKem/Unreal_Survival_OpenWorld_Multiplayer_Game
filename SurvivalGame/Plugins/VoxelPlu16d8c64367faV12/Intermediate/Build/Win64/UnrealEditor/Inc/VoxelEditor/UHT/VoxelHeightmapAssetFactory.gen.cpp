// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelHeightmapAssetFactory.h"
#include "VoxelAssets/VoxelHeightmapAsset.h"
#include "VoxelImporters/VoxelLandscapeImporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapAssetFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelHeightmapAssetFloatFactory *****************************************
void UVoxelHeightmapAssetFloatFactory::StaticRegisterNativesUVoxelHeightmapAssetFloatFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory;
UClass* UVoxelHeightmapAssetFloatFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelHeightmapAssetFloatFactory;
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHeightmapAssetFloatFactory"),
			Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.InnerSingleton,
			StaticRegisterNativesUVoxelHeightmapAssetFloatFactory,
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
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_NoRegister()
{
	return UVoxelHeightmapAssetFloatFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelHeightmapAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Components_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetFloatFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 2828320909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo, METADATA_PARAMS(0, nullptr) }; // 3365253054
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, LayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfos_MetaData), NewProp_LayerInfos_MetaData) }; // 3365253054
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, Components), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Components_MetaData), NewProp_Components_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLocation_MetaData), NewProp_ActorLocation_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetFloatFactory, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_LayerInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_Components,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_ActorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::NewProp_AssetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::ClassParams = {
	&UVoxelHeightmapAssetFloatFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetFloatFactory);
UVoxelHeightmapAssetFloatFactory::~UVoxelHeightmapAssetFloatFactory() {}
// ********** End Class UVoxelHeightmapAssetFloatFactory *******************************************

// ********** Begin Class UVoxelHeightmapAssetUINT16Factory ****************************************
void UVoxelHeightmapAssetUINT16Factory::StaticRegisterNativesUVoxelHeightmapAssetUINT16Factory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory;
UClass* UVoxelHeightmapAssetUINT16Factory::GetPrivateStaticClass()
{
	using TClass = UVoxelHeightmapAssetUINT16Factory;
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHeightmapAssetUINT16Factory"),
			Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.InnerSingleton,
			StaticRegisterNativesUVoxelHeightmapAssetUINT16Factory,
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
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_NoRegister()
{
	return UVoxelHeightmapAssetUINT16Factory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VoxelHeightmapAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Heightmap_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapsInfos_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "DisplayName", "Weightmaps" },
		{ "ModuleRelativePath", "Private/Factories/VoxelHeightmapAssetFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Heightmap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapsInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapsInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetUINT16Factory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16Factory, Heightmap), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Heightmap_MetaData), NewProp_Heightmap_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16Factory, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 2828320909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_Inner = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, METADATA_PARAMS(0, nullptr) }; // 2439625825
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16Factory, WeightmapsInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapsInfos_MetaData), NewProp_WeightmapsInfos_MetaData) }; // 2439625825
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_Heightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::NewProp_WeightmapsInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::ClassParams = {
	&UVoxelHeightmapAssetUINT16Factory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::PropPointers),
	0,
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory()
{
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetUINT16Factory);
UVoxelHeightmapAssetUINT16Factory::~UVoxelHeightmapAssetUINT16Factory() {}
// ********** End Class UVoxelHeightmapAssetUINT16Factory ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHeightmapAssetFloatFactory, UVoxelHeightmapAssetFloatFactory::StaticClass, TEXT("UVoxelHeightmapAssetFloatFactory"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetFloatFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetFloatFactory), 4052489745U) },
		{ Z_Construct_UClass_UVoxelHeightmapAssetUINT16Factory, UVoxelHeightmapAssetUINT16Factory::StaticClass, TEXT("UVoxelHeightmapAssetUINT16Factory"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetUINT16Factory), 3667137431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h__Script_VoxelEditor_3847421288(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelHeightmapAssetFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
