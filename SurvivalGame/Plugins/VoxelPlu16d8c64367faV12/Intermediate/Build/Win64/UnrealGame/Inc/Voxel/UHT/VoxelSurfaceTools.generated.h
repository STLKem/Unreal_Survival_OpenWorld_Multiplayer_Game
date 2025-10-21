// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelSurfaceTools.h"

#ifdef VOXEL_VoxelSurfaceTools_generated_h
#error "VoxelSurfaceTools.generated.h already included, missing '#pragma once' in VoxelSurfaceTools.h"
#endif
#define VOXEL_VoxelSurfaceTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UCurveFloat;
class UObject;
enum class EVoxelFalloff : uint8;
enum class EVoxelSamplerMode : uint8;
enum class EVoxelSDFMergeMode : uint8;
struct FLatentActionInfo;
struct FVoxelFloatTexture;
struct FVoxelIntBox;
struct FVoxelSurfaceEditsProcessedVoxels;
struct FVoxelSurfaceEditsStack;
struct FVoxelSurfaceEditsStackElement;
struct FVoxelSurfaceEditsVoxels;

// ********** Begin Class UVoxelSurfaceTools *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugSurfaceVoxels); \
	DECLARE_FUNCTION(execApplyFlatten); \
	DECLARE_FUNCTION(execApplyTerrace); \
	DECLARE_FUNCTION(execGetStrengthMaskScale); \
	DECLARE_FUNCTION(execApplyStrengthMask); \
	DECLARE_FUNCTION(execApplyFalloff); \
	DECLARE_FUNCTION(execApplyStrengthCurve); \
	DECLARE_FUNCTION(execApplyConstantStrength); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execApplyStackAsync); \
	DECLARE_FUNCTION(execApplyStack); \
	DECLARE_FUNCTION(execAddToStack); \
	DECLARE_FUNCTION(execFindSurfaceVoxels2DAsync); \
	DECLARE_FUNCTION(execFindSurfaceVoxels2D); \
	DECLARE_FUNCTION(execFindSurfaceVoxelsFromDistanceField); \
	DECLARE_FUNCTION(execFindSurfaceVoxelsAsync); \
	DECLARE_FUNCTION(execFindSurfaceVoxels);


VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceTools(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSurfaceTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelSurfaceTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSurfaceTools)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSurfaceTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSurfaceTools(UVoxelSurfaceTools&&) = delete; \
	UVoxelSurfaceTools(const UVoxelSurfaceTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSurfaceTools) \
	NO_API virtual ~UVoxelSurfaceTools();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_33_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSurfaceTools;

// ********** End Class UVoxelSurfaceTools *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h

// ********** Begin Enum EVoxelSDFMergeMode ********************************************************
#define FOREACH_ENUM_EVOXELSDFMERGEMODE(op) \
	op(EVoxelSDFMergeMode::Union) \
	op(EVoxelSDFMergeMode::Intersection) \
	op(EVoxelSDFMergeMode::Override) 

enum class EVoxelSDFMergeMode : uint8;
template<> struct TIsUEnumClass<EVoxelSDFMergeMode> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelSDFMergeMode>();
// ********** End Enum EVoxelSDFMergeMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
