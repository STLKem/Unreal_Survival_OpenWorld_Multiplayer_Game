// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IVoxelPool.h"

#ifdef VOXEL_IVoxelPool_generated_h
#error "IVoxelPool.generated.h already included, missing '#pragma once' in IVoxelPool.h"
#endif
#define VOXEL_IVoxelPool_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_IVoxelPool_h

// ********** Begin Enum EVoxelTaskType ************************************************************
#define FOREACH_ENUM_EVOXELTASKTYPE(op) \
	op(EVoxelTaskType::ChunksMeshing) \
	op(EVoxelTaskType::CollisionsChunksMeshing) \
	op(EVoxelTaskType::VisibleChunksMeshing) \
	op(EVoxelTaskType::VisibleCollisionsChunksMeshing) \
	op(EVoxelTaskType::CollisionCooking) \
	op(EVoxelTaskType::FoliageBuild) \
	op(EVoxelTaskType::HISMBuild) \
	op(EVoxelTaskType::AsyncEditFunctions) \
	op(EVoxelTaskType::MeshMerge) \
	op(EVoxelTaskType::RenderOctree) 

enum class EVoxelTaskType : uint8;
template<> struct TIsUEnumClass<EVoxelTaskType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>();
// ********** End Enum EVoxelTaskType **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
