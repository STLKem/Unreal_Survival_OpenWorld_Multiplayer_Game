// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelBiomeMapNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBiomeMapNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler_NoRegister();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FBiomeMapElement();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBiomeMapElement **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBiomeMapElement;
class UScriptStruct* FBiomeMapElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBiomeMapElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBiomeMapElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBiomeMapElement, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("BiomeMapElement"));
	}
	return Z_Registration_Info_UScriptStruct_FBiomeMapElement.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBiomeMapElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBiomeMapElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMapElement, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBiomeMapElement, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBiomeMapElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	&NewStructOps,
	"BiomeMapElement",
	Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::PropPointers),
	sizeof(FBiomeMapElement),
	alignof(FBiomeMapElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBiomeMapElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBiomeMapElement()
{
	if (!Z_Registration_Info_UScriptStruct_FBiomeMapElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBiomeMapElement.InnerSingleton, Z_Construct_UScriptStruct_FBiomeMapElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBiomeMapElement.InnerSingleton;
}
// ********** End ScriptStruct FBiomeMapElement ****************************************************

// ********** Begin Class UVoxelNode_BiomeMapSampler ***********************************************
void UVoxelNode_BiomeMapSampler::StaticRegisterNativesUVoxelNode_BiomeMapSampler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler;
UClass* UVoxelNode_BiomeMapSampler::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_BiomeMapSampler;
	if (!Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_BiomeMapSampler"),
			Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.InnerSingleton,
			StaticRegisterNativesUVoxelNode_BiomeMapSampler,
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
	return Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler_NoRegister()
{
	return UVoxelNode_BiomeMapSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Biomes" },
		{ "Comment", "// Find the strength of biomes from a biome map. Note: Alpha is ignored when computing the color distance\n" },
		{ "DisplayName", "Biome Map Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ToolTip", "Find the strength of biomes from a biome map. Note: Alpha is ignored when computing the color distance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "Comment", "// Distance = Max(Abs(ColorA - ColorB)). Values with a distance below or equal to this will be set to 1, value strictly above to 0\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ToolTip", "Distance = Max(Abs(ColorA - ColorB)). Values with a distance below or equal to this will be set to 1, value strictly above to 0" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Biomes_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMapNode.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Biomes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Biomes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BiomeMapSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_Inner = { "Biomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBiomeMapElement, METADATA_PARAMS(0, nullptr) }; // 1190376700
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes = { "Biomes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_BiomeMapSampler, Biomes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Biomes_MetaData), NewProp_Biomes_MetaData) }; // 1190376700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::NewProp_Biomes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::ClassParams = {
	&UVoxelNode_BiomeMapSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_BiomeMapSampler()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_BiomeMapSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BiomeMapSampler);
UVoxelNode_BiomeMapSampler::~UVoxelNode_BiomeMapSampler() {}
// ********** End Class UVoxelNode_BiomeMapSampler *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h__Script_VoxelGraph_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBiomeMapElement::StaticStruct, Z_Construct_UScriptStruct_FBiomeMapElement_Statics::NewStructOps, TEXT("BiomeMapElement"), &Z_Registration_Info_UScriptStruct_FBiomeMapElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBiomeMapElement), 1190376700U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_BiomeMapSampler, UVoxelNode_BiomeMapSampler::StaticClass, TEXT("UVoxelNode_BiomeMapSampler"), &Z_Registration_Info_UClass_UVoxelNode_BiomeMapSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_BiomeMapSampler), 2495755489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h__Script_VoxelGraph_1219441038(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h__Script_VoxelGraph_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h__Script_VoxelGraph_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMapNode_h__Script_VoxelGraph_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
