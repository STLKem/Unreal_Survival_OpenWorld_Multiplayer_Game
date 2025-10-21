// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelAxisDependencies.h"

#ifdef VOXELGRAPH_VoxelAxisDependencies_generated_h
#error "VoxelAxisDependencies.generated.h already included, missing '#pragma once' in VoxelAxisDependencies.h"
#endif
#define VOXELGRAPH_VoxelAxisDependencies_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelAxisDependencies_h

// ********** Begin Enum EVoxelFunctionAxisDependencies ********************************************
#define FOREACH_ENUM_EVOXELFUNCTIONAXISDEPENDENCIES(op) \
	op(EVoxelFunctionAxisDependencies::X) \
	op(EVoxelFunctionAxisDependencies::XYWithCache) \
	op(EVoxelFunctionAxisDependencies::XYWithoutCache) \
	op(EVoxelFunctionAxisDependencies::XYZWithCache) \
	op(EVoxelFunctionAxisDependencies::XYZWithoutCache) 

enum class EVoxelFunctionAxisDependencies : uint8;
template<> struct TIsUEnumClass<EVoxelFunctionAxisDependencies> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelFunctionAxisDependencies>();
// ********** End Enum EVoxelFunctionAxisDependencies **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
