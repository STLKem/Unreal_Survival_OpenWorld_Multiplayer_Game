// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelMeshConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMeshConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshConfig();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelMeshConfig **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelMeshConfig;
class UScriptStruct* FVoxelMeshConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelMeshConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshConfig, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Whether the primitive receives decals. */" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "Whether the primitive receives decals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** If true, this component will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "If true, this component will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "EditCondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "EditCondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMeshConfig.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((FVoxelMeshConfig*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshConfig), &Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((FVoxelMeshConfig*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshConfig), &Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshConfig, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2385485039
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshConfig, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewProp_CustomDepthStencilValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelMeshConfig",
	Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::PropPointers),
	sizeof(FVoxelMeshConfig),
	alignof(FVoxelMeshConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelMeshConfig.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshConfig.InnerSingleton;
}
// ********** End ScriptStruct FVoxelMeshConfig ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelMeshConfig::StaticStruct, Z_Construct_UScriptStruct_FVoxelMeshConfig_Statics::NewStructOps, TEXT("VoxelMeshConfig"), &Z_Registration_Info_UScriptStruct_FVoxelMeshConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMeshConfig), 54758636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h__Script_Voxel_3957647063(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMeshConfig_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
