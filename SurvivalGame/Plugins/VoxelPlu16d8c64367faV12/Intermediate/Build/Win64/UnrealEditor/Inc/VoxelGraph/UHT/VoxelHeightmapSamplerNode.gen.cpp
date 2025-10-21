// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelHeightmapSamplerNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapSamplerNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_HeightmapSampler **********************************************
void UVoxelNode_HeightmapSampler::StaticRegisterNativesUVoxelNode_HeightmapSampler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler;
UClass* UVoxelNode_HeightmapSampler::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_HeightmapSampler;
	if (!Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_HeightmapSampler"),
			Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.InnerSingleton,
			StaticRegisterNativesUVoxelNode_HeightmapSampler,
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
	return Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler_NoRegister()
{
	return UVoxelNode_HeightmapSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Heightmap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heightmap sampler\n" },
#endif
		{ "DisplayName", "Heightmap Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelHeightmapSamplerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heightmap sampler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFloatHeightmap_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapFloat_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "DisplayName", "Heightmap (float)" },
		{ "EditCondition", "bFloatHeightmap" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapUINT16_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "DisplayName", "Heightmap (uint16)" },
		{ "EditCondition", "!bFloatHeightmap" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplerType_MetaData[] = {
		{ "Category", "Heightmap settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCenter_MetaData[] = {
		{ "Category", "Heightmap settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the heightmap will be centered\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightmapSamplerNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the heightmap will be centered" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bFloatHeightmap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloatHeightmap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapFloat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapUINT16;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplerType;
	static void NewProp_bCenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_HeightmapSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_SetBit(void* Obj)
{
	((UVoxelNode_HeightmapSampler*)Obj)->bFloatHeightmap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap = { "bFloatHeightmap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_HeightmapSampler), &Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFloatHeightmap_MetaData), NewProp_bFloatHeightmap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat = { "HeightmapFloat", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, HeightmapFloat), Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapFloat_MetaData), NewProp_HeightmapFloat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16 = { "HeightmapUINT16", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, HeightmapUINT16), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapUINT16_MetaData), NewProp_HeightmapUINT16_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType = { "SamplerType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_HeightmapSampler, SamplerType), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplerType_MetaData), NewProp_SamplerType_MetaData) }; // 1375046996
void Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_SetBit(void* Obj)
{
	((UVoxelNode_HeightmapSampler*)Obj)->bCenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter = { "bCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_HeightmapSampler), &Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCenter_MetaData), NewProp_bCenter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bFloatHeightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_HeightmapUINT16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_SamplerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::NewProp_bCenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::ClassParams = {
	&UVoxelNode_HeightmapSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_HeightmapSampler()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_HeightmapSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_HeightmapSampler);
UVoxelNode_HeightmapSampler::~UVoxelNode_HeightmapSampler() {}
// ********** End Class UVoxelNode_HeightmapSampler ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_HeightmapSampler, UVoxelNode_HeightmapSampler::StaticClass, TEXT("UVoxelNode_HeightmapSampler"), &Z_Registration_Info_UClass_UVoxelNode_HeightmapSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_HeightmapSampler), 22934443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h__Script_VoxelGraph_3456236316(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightmapSamplerNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
