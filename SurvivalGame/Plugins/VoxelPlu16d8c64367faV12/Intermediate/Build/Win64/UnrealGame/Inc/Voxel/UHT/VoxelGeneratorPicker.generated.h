// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelGenerators/VoxelGeneratorPicker.h"

#ifdef VOXEL_VoxelGeneratorPicker_generated_h
#error "VoxelGeneratorPicker.generated.h already included, missing '#pragma once' in VoxelGeneratorPicker.h"
#endif
#define VOXEL_VoxelGeneratorPicker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelGeneratorPicker *********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelGeneratorPicker;
// ********** End ScriptStruct FVoxelGeneratorPicker ***********************************************

// ********** Begin ScriptStruct FVoxelTransformableGeneratorPicker ********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelTransformableGeneratorPicker;
// ********** End ScriptStruct FVoxelTransformableGeneratorPicker **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h

// ********** Begin Enum EVoxelGeneratorPickerType *************************************************
#define FOREACH_ENUM_EVOXELGENERATORPICKERTYPE(op) \
	op(EVoxelGeneratorPickerType::Class) \
	op(EVoxelGeneratorPickerType::Object) 

enum class EVoxelGeneratorPickerType : uint8;
template<> struct TIsUEnumClass<EVoxelGeneratorPickerType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorPickerType>();
// ********** End Enum EVoxelGeneratorPickerType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
