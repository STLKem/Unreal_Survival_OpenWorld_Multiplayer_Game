// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FastNoise/VoxelFastNoiseBase.h"

#ifdef VOXEL_VoxelFastNoiseBase_generated_h
#error "VoxelFastNoiseBase.generated.h already included, missing '#pragma once' in VoxelFastNoiseBase.h"
#endif
#define VOXEL_VoxelFastNoiseBase_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h

// ********** Begin Enum EVoxelNoiseInterpolation **************************************************
#define FOREACH_ENUM_EVOXELNOISEINTERPOLATION(op) \
	op(EVoxelNoiseInterpolation::Linear) \
	op(EVoxelNoiseInterpolation::Hermite) \
	op(EVoxelNoiseInterpolation::Quintic) 

enum class EVoxelNoiseInterpolation : uint8;
template<> struct TIsUEnumClass<EVoxelNoiseInterpolation> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseInterpolation>();
// ********** End Enum EVoxelNoiseInterpolation ****************************************************

// ********** Begin Enum EVoxelNoiseFractalType ****************************************************
#define FOREACH_ENUM_EVOXELNOISEFRACTALTYPE(op) \
	op(EVoxelNoiseFractalType::FBM) \
	op(EVoxelNoiseFractalType::Billow) \
	op(EVoxelNoiseFractalType::RigidMulti) 

enum class EVoxelNoiseFractalType : uint8;
template<> struct TIsUEnumClass<EVoxelNoiseFractalType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseFractalType>();
// ********** End Enum EVoxelNoiseFractalType ******************************************************

// ********** Begin Enum EVoxelCellularDistanceFunction ********************************************
#define FOREACH_ENUM_EVOXELCELLULARDISTANCEFUNCTION(op) \
	op(EVoxelCellularDistanceFunction::Euclidean) \
	op(EVoxelCellularDistanceFunction::Manhattan) \
	op(EVoxelCellularDistanceFunction::Natural) 

enum class EVoxelCellularDistanceFunction : uint8;
template<> struct TIsUEnumClass<EVoxelCellularDistanceFunction> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularDistanceFunction>();
// ********** End Enum EVoxelCellularDistanceFunction **********************************************

// ********** Begin Enum EVoxelCellularReturnType **************************************************
#define FOREACH_ENUM_EVOXELCELLULARRETURNTYPE(op) \
	op(EVoxelCellularReturnType::CellValue) \
	op(EVoxelCellularReturnType::Distance) \
	op(EVoxelCellularReturnType::Distance2) \
	op(EVoxelCellularReturnType::Distance2Add) \
	op(EVoxelCellularReturnType::Distance2Sub) \
	op(EVoxelCellularReturnType::Distance2Mul) \
	op(EVoxelCellularReturnType::Distance2Div) 

enum class EVoxelCellularReturnType : uint8;
template<> struct TIsUEnumClass<EVoxelCellularReturnType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularReturnType>();
// ********** End Enum EVoxelCellularReturnType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
