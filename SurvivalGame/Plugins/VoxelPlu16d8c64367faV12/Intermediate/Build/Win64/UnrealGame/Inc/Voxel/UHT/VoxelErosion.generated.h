// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelShaders/VoxelErosion.h"

#ifdef VOXEL_VoxelErosion_generated_h
#error "VoxelErosion.generated.h already included, missing '#pragma once' in VoxelErosion.h"
#endif
#define VOXEL_VoxelErosion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelFloatTexture;

// ********** Begin Class UVoxelErosion ************************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSedimentTexture); \
	DECLARE_FUNCTION(execGetWaterHeightTexture); \
	DECLARE_FUNCTION(execGetTerrainHeightTexture); \
	DECLARE_FUNCTION(execStep); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitialize);


VOXEL_API UClass* Z_Construct_UClass_UVoxelErosion_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelErosion(); \
	friend struct Z_Construct_UClass_UVoxelErosion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelErosion_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelErosion, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelErosion_NoRegister) \
	DECLARE_SERIALIZER(UVoxelErosion)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelErosion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelErosion(UVoxelErosion&&) = delete; \
	UVoxelErosion(const UVoxelErosion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelErosion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelErosion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelErosion) \
	NO_API virtual ~UVoxelErosion();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_14_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelErosion;

// ********** End Class UVoxelErosion **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelShaders_VoxelErosion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
