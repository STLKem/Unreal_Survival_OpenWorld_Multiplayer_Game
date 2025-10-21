// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelPaintMaterial.h"

#ifdef VOXEL_VoxelPaintMaterial_generated_h
#error "VoxelPaintMaterial.generated.h already included, missing '#pragma once' in VoxelPaintMaterial.h"
#endif
#define VOXEL_VoxelPaintMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelPaintMaterial_MaterialCollectionChannel *********************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterial_MaterialCollectionChannel;
// ********** End ScriptStruct FVoxelPaintMaterial_MaterialCollectionChannel ***********************

// ********** Begin ScriptStruct FVoxelPaintMaterialColor ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialColor;
// ********** End ScriptStruct FVoxelPaintMaterialColor ********************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialFiveWayBlend ***********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialFiveWayBlend;
// ********** End ScriptStruct FVoxelPaintMaterialFiveWayBlend *************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialSingleIndex ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialSingleIndex;
// ********** End ScriptStruct FVoxelPaintMaterialSingleIndex **************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialMultiIndex *************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialMultiIndex;
// ********** End ScriptStruct FVoxelPaintMaterialMultiIndex ***************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialMultiIndexWetness ******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialMultiIndexWetness;
// ********** End ScriptStruct FVoxelPaintMaterialMultiIndexWetness ********************************

// ********** Begin ScriptStruct FVoxelPaintMaterialMultiIndexRaw **********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialMultiIndexRaw;
// ********** End ScriptStruct FVoxelPaintMaterialMultiIndexRaw ************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialUV *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterialUV;
// ********** End ScriptStruct FVoxelPaintMaterialUV ***********************************************

// ********** Begin ScriptStruct FVoxelPaintMaterial ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelPaintMaterial;
// ********** End ScriptStruct FVoxelPaintMaterial *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h

// ********** Begin Enum EVoxelPaintMaterialType ***************************************************
#define FOREACH_ENUM_EVOXELPAINTMATERIALTYPE(op) \
	op(EVoxelPaintMaterialType::Color) \
	op(EVoxelPaintMaterialType::FiveWayBlend) \
	op(EVoxelPaintMaterialType::SingleIndex) \
	op(EVoxelPaintMaterialType::MultiIndex) \
	op(EVoxelPaintMaterialType::MultiIndexWetness) \
	op(EVoxelPaintMaterialType::MultiIndexRaw) \
	op(EVoxelPaintMaterialType::UV) 

enum class EVoxelPaintMaterialType : uint8;
template<> struct TIsUEnumClass<EVoxelPaintMaterialType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelPaintMaterialType>();
// ********** End Enum EVoxelPaintMaterialType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
