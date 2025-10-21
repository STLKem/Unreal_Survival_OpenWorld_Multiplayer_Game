// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelGenerators/VoxelGeneratorParameters.h"

#ifdef VOXEL_VoxelGeneratorParameters_generated_h
#error "VoxelGeneratorParameters.generated.h already included, missing '#pragma once' in VoxelGeneratorParameters.h"
#endif
#define VOXEL_VoxelGeneratorParameters_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelGeneratorParameterTerminalType ******************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelGeneratorParameterTerminalType;
// ********** End ScriptStruct FVoxelGeneratorParameterTerminalType ********************************

// ********** Begin ScriptStruct FVoxelGeneratorParameterType **************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelGeneratorParameterTerminalType Super;


struct FVoxelGeneratorParameterType;
// ********** End ScriptStruct FVoxelGeneratorParameterType ****************************************

// ********** Begin ScriptStruct FVoxelGeneratorParameter ******************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelGeneratorParameter;
// ********** End ScriptStruct FVoxelGeneratorParameter ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h

// ********** Begin Enum EVoxelGeneratorParameterContainerType *************************************
#define FOREACH_ENUM_EVOXELGENERATORPARAMETERCONTAINERTYPE(op) \
	op(EVoxelGeneratorParameterContainerType::None) \
	op(EVoxelGeneratorParameterContainerType::Array) \
	op(EVoxelGeneratorParameterContainerType::Set) \
	op(EVoxelGeneratorParameterContainerType::Map) 

enum class EVoxelGeneratorParameterContainerType : uint8;
template<> struct TIsUEnumClass<EVoxelGeneratorParameterContainerType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterContainerType>();
// ********** End Enum EVoxelGeneratorParameterContainerType ***************************************

// ********** Begin Enum EVoxelGeneratorParameterPropertyType **************************************
#define FOREACH_ENUM_EVOXELGENERATORPARAMETERPROPERTYTYPE(op) \
	op(EVoxelGeneratorParameterPropertyType::Float) \
	op(EVoxelGeneratorParameterPropertyType::Int) \
	op(EVoxelGeneratorParameterPropertyType::Bool) \
	op(EVoxelGeneratorParameterPropertyType::Object) \
	op(EVoxelGeneratorParameterPropertyType::Struct) 

enum class EVoxelGeneratorParameterPropertyType : uint8;
template<> struct TIsUEnumClass<EVoxelGeneratorParameterPropertyType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterPropertyType>();
// ********** End Enum EVoxelGeneratorParameterPropertyType ****************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
