// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelRender/VoxelPrimitiveComponentSettings.h"

#ifdef VOXEL_VoxelPrimitiveComponentSettings_generated_h
#error "VoxelPrimitiveComponentSettings.generated.h already included, missing '#pragma once' in VoxelPrimitiveComponentSettings.h"
#endif
#define VOXEL_VoxelPrimitiveComponentSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelPrimitiveComponentSettings **********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelPrimitiveComponentSettings_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPrimitiveComponentSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelPrimitiveComponentSettings;
// ********** End ScriptStruct FVoxelPrimitiveComponentSettings ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelPrimitiveComponentSettings_h

// ********** Begin Enum EVoxelShadowCacheInvalidationBehavior *************************************
#define FOREACH_ENUM_EVOXELSHADOWCACHEINVALIDATIONBEHAVIOR(op) \
	op(EVoxelShadowCacheInvalidationBehavior::Auto) \
	op(EVoxelShadowCacheInvalidationBehavior::Always) \
	op(EVoxelShadowCacheInvalidationBehavior::Rigid) \
	op(EVoxelShadowCacheInvalidationBehavior::Static) 

enum class EVoxelShadowCacheInvalidationBehavior : uint8;
template<> struct TIsUEnumClass<EVoxelShadowCacheInvalidationBehavior> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelShadowCacheInvalidationBehavior>();
// ********** End Enum EVoxelShadowCacheInvalidationBehavior ***************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
