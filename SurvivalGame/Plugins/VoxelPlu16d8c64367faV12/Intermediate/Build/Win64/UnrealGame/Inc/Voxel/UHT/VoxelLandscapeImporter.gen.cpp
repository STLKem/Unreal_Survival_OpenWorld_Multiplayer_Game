// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelImporters/VoxelLandscapeImporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLandscapeImporter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelLandscapeImporter();
VOXEL_API UClass* Z_Construct_UClass_AVoxelLandscapeImporter_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelLandscapeImporterLayerInfo **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo;
class UScriptStruct* FVoxelLandscapeImporterLayerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeImporterLayerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeImporterLayerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLandscapeImporterLayerInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfo_MetaData), NewProp_LayerInfo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLandscapeImporterLayerInfo, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 2902135298
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLandscapeImporterLayerInfo, Index), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_LayerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelLandscapeImporterLayerInfo",
	Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::PropPointers),
	sizeof(FVoxelLandscapeImporterLayerInfo),
	alignof(FVoxelLandscapeImporterLayerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLandscapeImporterLayerInfo ************************************

// ********** Begin Class AVoxelLandscapeImporter **************************************************
void AVoxelLandscapeImporter::StaticRegisterNativesAVoxelLandscapeImporter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelLandscapeImporter;
UClass* AVoxelLandscapeImporter::GetPrivateStaticClass()
{
	using TClass = AVoxelLandscapeImporter;
	if (!Z_Registration_Info_UClass_AVoxelLandscapeImporter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLandscapeImporter"),
			Z_Registration_Info_UClass_AVoxelLandscapeImporter.InnerSingleton,
			StaticRegisterNativesAVoxelLandscapeImporter,
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
	return Z_Registration_Info_UClass_AVoxelLandscapeImporter.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelLandscapeImporter_NoRegister()
{
	return AVoxelLandscapeImporter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelLandscapeImporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking" },
		{ "IncludePath", "VoxelImporters/VoxelLandscapeImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelLandscapeImporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelLandscapeImporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelLandscapeImporter, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelLandscapeImporter, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 2828320909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo, METADATA_PARAMS(0, nullptr) }; // 3365253054
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelLandscapeImporter, LayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfos_MetaData), NewProp_LayerInfos_MetaData) }; // 3365253054
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLandscapeImporter_Statics::NewProp_LayerInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelLandscapeImporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelLandscapeImporter_Statics::ClassParams = {
	&AVoxelLandscapeImporter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLandscapeImporter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelLandscapeImporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelLandscapeImporter()
{
	if (!Z_Registration_Info_UClass_AVoxelLandscapeImporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelLandscapeImporter.OuterSingleton, Z_Construct_UClass_AVoxelLandscapeImporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelLandscapeImporter.OuterSingleton;
}
AVoxelLandscapeImporter::AVoxelLandscapeImporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelLandscapeImporter);
AVoxelLandscapeImporter::~AVoxelLandscapeImporter() {}
// ********** End Class AVoxelLandscapeImporter ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelLandscapeImporterLayerInfo::StaticStruct, Z_Construct_UScriptStruct_FVoxelLandscapeImporterLayerInfo_Statics::NewStructOps, TEXT("VoxelLandscapeImporterLayerInfo"), &Z_Registration_Info_UScriptStruct_FVoxelLandscapeImporterLayerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLandscapeImporterLayerInfo), 3365253054U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelLandscapeImporter, AVoxelLandscapeImporter::StaticClass, TEXT("AVoxelLandscapeImporter"), &Z_Registration_Info_UClass_AVoxelLandscapeImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelLandscapeImporter), 4102352885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h__Script_Voxel_3018292151(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelLandscapeImporter_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
