// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelMathLibrary.h"

#ifdef VOXEL_VoxelMathLibrary_generated_h
#error "VoxelMathLibrary.generated.h already included, missing '#pragma once' in VoxelMathLibrary.h"
#endif
#define VOXEL_VoxelMathLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelHaltonStream;

// ********** Begin ScriptStruct FVoxelHaltonStream ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelHaltonStream;
// ********** End ScriptStruct FVoxelHaltonStream **************************************************

// ********** Begin Class UVoxelMathLibrary ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHalton3D); \
	DECLARE_FUNCTION(execGetHalton2D); \
	DECLARE_FUNCTION(execGetHalton1D); \
	DECLARE_FUNCTION(execResetHaltonStream); \
	DECLARE_FUNCTION(execMakeHaltonStream); \
	DECLARE_FUNCTION(execGetUnitVectorFromRandom);


VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMathLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMathLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelMathLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVoxelMathLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelMathLibrary(UVoxelMathLibrary&&) = delete; \
	UVoxelMathLibrary(const UVoxelMathLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMathLibrary) \
	NO_API virtual ~UVoxelMathLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_21_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelMathLibrary;

// ********** End Class UVoxelMathLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
