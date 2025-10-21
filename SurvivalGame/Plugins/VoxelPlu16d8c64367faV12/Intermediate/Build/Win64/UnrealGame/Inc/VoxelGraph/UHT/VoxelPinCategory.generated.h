// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelPinCategory.h"

#ifdef VOXELGRAPH_VoxelPinCategory_generated_h
#error "VoxelPinCategory.generated.h already included, missing '#pragma once' in VoxelPinCategory.h"
#endif
#define VOXELGRAPH_VoxelPinCategory_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelPinCategory_h

// ********** Begin Enum EVoxelPinCategory *********************************************************
#define FOREACH_ENUM_EVOXELPINCATEGORY(op) \
	op(EVoxelPinCategory::Exec) \
	op(EVoxelPinCategory::Boolean) \
	op(EVoxelPinCategory::Int) \
	op(EVoxelPinCategory::Float) \
	op(EVoxelPinCategory::Material) \
	op(EVoxelPinCategory::Color) \
	op(EVoxelPinCategory::Seed) \
	op(EVoxelPinCategory::Wildcard) \
	op(EVoxelPinCategory::Vector) 

enum class EVoxelPinCategory : uint8;
template<> struct TIsUEnumClass<EVoxelPinCategory> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPinCategory>();
// ********** End Enum EVoxelPinCategory ***********************************************************

// ********** Begin Enum EVoxelDataPinCategory *****************************************************
#define FOREACH_ENUM_EVOXELDATAPINCATEGORY(op) \
	op(EVoxelDataPinCategory::Boolean) \
	op(EVoxelDataPinCategory::Int) \
	op(EVoxelDataPinCategory::Float) \
	op(EVoxelDataPinCategory::Material) \
	op(EVoxelDataPinCategory::Color) 

enum class EVoxelDataPinCategory : uint8;
template<> struct TIsUEnumClass<EVoxelDataPinCategory> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelDataPinCategory>();
// ********** End Enum EVoxelDataPinCategory *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
