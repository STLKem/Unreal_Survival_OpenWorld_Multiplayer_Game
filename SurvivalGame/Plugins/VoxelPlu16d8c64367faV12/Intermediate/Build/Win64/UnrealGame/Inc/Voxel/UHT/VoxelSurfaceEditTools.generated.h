// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Gen/VoxelSurfaceEditTools.h"

#ifdef VOXEL_VoxelSurfaceEditTools_generated_h
#error "VoxelSurfaceEditTools.generated.h already included, missing '#pragma once' in VoxelSurfaceEditTools.h"
#endif
#define VOXEL_VoxelSurfaceEditTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UObject;
struct FLatentActionInfo;
struct FModifiedVoxelMaterial;
struct FModifiedVoxelValue;
struct FVoxelIntBox;
struct FVoxelPaintMaterial;
struct FVoxelSurfaceEditsProcessedVoxels;

// ********** Begin Class UVoxelSurfaceEditTools ***************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPropagateVoxelMaterialsAsync); \
	DECLARE_FUNCTION(execPropagateVoxelMaterials); \
	DECLARE_FUNCTION(execEditVoxelMaterialsAsync); \
	DECLARE_FUNCTION(execEditVoxelMaterials); \
	DECLARE_FUNCTION(execEditVoxelValuesAsync); \
	DECLARE_FUNCTION(execEditVoxelValues);


VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceEditTools_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceEditTools(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceEditTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceEditTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSurfaceEditTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelSurfaceEditTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSurfaceEditTools)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSurfaceEditTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSurfaceEditTools(UVoxelSurfaceEditTools&&) = delete; \
	UVoxelSurfaceEditTools(const UVoxelSurfaceEditTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceEditTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceEditTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSurfaceEditTools) \
	NO_API virtual ~UVoxelSurfaceEditTools();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_10_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSurfaceEditTools;

// ********** End Class UVoxelSurfaceEditTools *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSurfaceEditTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
