// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelTextureSamplerNode.h"
#include "Voxel/Public/VoxelTexture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelTextureSamplerNode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TextureSampler();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TextureSampler_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_TextureSampler ************************************************
void UVoxelNode_TextureSampler::StaticRegisterNativesUVoxelNode_TextureSampler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_TextureSampler;
UClass* UVoxelNode_TextureSampler::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_TextureSampler;
	if (!Z_Registration_Info_UClass_UVoxelNode_TextureSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_TextureSampler"),
			Z_Registration_Info_UClass_UVoxelNode_TextureSampler.InnerSingleton,
			StaticRegisterNativesUVoxelNode_TextureSampler,
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
	return Z_Registration_Info_UClass_UVoxelNode_TextureSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_TextureSampler_NoRegister()
{
	return UVoxelNode_TextureSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_TextureSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// Texture sampler. Inputs are in the texture dimension, not between 0 and 1\n" },
		{ "DisplayName", "Texture Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "Keywords", "constant parameter" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "Texture sampler. Inputs are in the texture dimension, not between 0 and 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ReconstructNode", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_TextureSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_TextureSampler, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
void Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
{
	((UVoxelNode_TextureSampler*)Obj)->bBilinearInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_TextureSampler), &Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBilinearInterpolation_MetaData), NewProp_bBilinearInterpolation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_TextureSampler, Mode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1375046996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_bBilinearInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::NewProp_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::ClassParams = {
	&UVoxelNode_TextureSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_TextureSampler()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_TextureSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_TextureSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_TextureSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_TextureSampler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_TextureSampler);
UVoxelNode_TextureSampler::~UVoxelNode_TextureSampler() {}
// ********** End Class UVoxelNode_TextureSampler **************************************************

// ********** Begin Class UVoxelNode_VoxelTextureSampler *******************************************
void UVoxelNode_VoxelTextureSampler::StaticRegisterNativesUVoxelNode_VoxelTextureSampler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler;
UClass* UVoxelNode_VoxelTextureSampler::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_VoxelTextureSampler;
	if (!Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_VoxelTextureSampler"),
			Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.InnerSingleton,
			StaticRegisterNativesUVoxelNode_VoxelTextureSampler,
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
	return Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_NoRegister()
{
	return UVoxelNode_VoxelTextureSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "// Voxel Texture sampler. Inputs are in the texture dimension, not between 0 and 1\n// The voxel texture can only be set in BP\n// You can create a voxel texture from another graph, or using erosion\n" },
		{ "DisplayName", "Voxel Texture Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "Keywords", "constant parameter" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "Voxel Texture sampler. Inputs are in the texture dimension, not between 0 and 1\nThe voxel texture can only be set in BP\nYou can create a voxel texture from another graph, or using erosion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Texture settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Comment", "// For parameters to work\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelTextureSamplerNode.h" },
		{ "ToolTip", "For parameters to work" },
	};
#endif // WITH_METADATA
	static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoxelTextureSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
{
	((UVoxelNode_VoxelTextureSampler*)Obj)->bBilinearInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_VoxelTextureSampler), &Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBilinearInterpolation_MetaData), NewProp_bBilinearInterpolation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_VoxelTextureSampler, Mode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 1375046996
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_VoxelTextureSampler, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_bBilinearInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::ClassParams = {
	&UVoxelNode_VoxelTextureSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_VoxelTextureSampler()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_VoxelTextureSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoxelTextureSampler);
UVoxelNode_VoxelTextureSampler::~UVoxelNode_VoxelTextureSampler() {}
// ********** End Class UVoxelNode_VoxelTextureSampler *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_TextureSampler, UVoxelNode_TextureSampler::StaticClass, TEXT("UVoxelNode_TextureSampler"), &Z_Registration_Info_UClass_UVoxelNode_TextureSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_TextureSampler), 766908502U) },
		{ Z_Construct_UClass_UVoxelNode_VoxelTextureSampler, UVoxelNode_VoxelTextureSampler::StaticClass, TEXT("UVoxelNode_VoxelTextureSampler"), &Z_Registration_Info_UClass_UVoxelNode_VoxelTextureSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_VoxelTextureSampler), 706774064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h__Script_VoxelGraph_2728458135(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelTextureSamplerNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
