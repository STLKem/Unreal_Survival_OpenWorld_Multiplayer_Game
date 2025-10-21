// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Gen/VoxelSphereTools.h"

#ifdef VOXEL_VoxelSphereTools_generated_h
#error "VoxelSphereTools.generated.h already included, missing '#pragma once' in VoxelSphereTools.h"
#endif
#define VOXEL_VoxelSphereTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UObject;
enum class EVoxelFalloff : uint8;
struct FLatentActionInfo;
struct FModifiedVoxelMaterial;
struct FModifiedVoxelValue;
struct FVoxelIntBox;
struct FVoxelPaintMaterial;

// ********** Begin Class UVoxelSphereTools ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRevertSphereToGeneratorAsync); \
	DECLARE_FUNCTION(execRevertSphereToGenerator); \
	DECLARE_FUNCTION(execRevertSphereAsync); \
	DECLARE_FUNCTION(execRevertSphere); \
	DECLARE_FUNCTION(execTrimSphereAsync); \
	DECLARE_FUNCTION(execTrimSphere); \
	DECLARE_FUNCTION(execSmoothMaterialSphereAsync); \
	DECLARE_FUNCTION(execSmoothMaterialSphere); \
	DECLARE_FUNCTION(execSmoothSphereAsync); \
	DECLARE_FUNCTION(execSmoothSphere); \
	DECLARE_FUNCTION(execApplyMaterialKernelSphereAsync); \
	DECLARE_FUNCTION(execApplyMaterialKernelSphere); \
	DECLARE_FUNCTION(execApplyKernelSphereAsync); \
	DECLARE_FUNCTION(execApplyKernelSphere); \
	DECLARE_FUNCTION(execSetMaterialSphereAsync); \
	DECLARE_FUNCTION(execSetMaterialSphere); \
	DECLARE_FUNCTION(execAddSphereAsync); \
	DECLARE_FUNCTION(execAddSphere); \
	DECLARE_FUNCTION(execRemoveSphereAsync); \
	DECLARE_FUNCTION(execRemoveSphere); \
	DECLARE_FUNCTION(execSetValueSphereAsync); \
	DECLARE_FUNCTION(execSetValueSphere);


VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSphereTools(); \
	friend struct Z_Construct_UClass_UVoxelSphereTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSphereTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelSphereTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSphereTools)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSphereTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSphereTools(UVoxelSphereTools&&) = delete; \
	UVoxelSphereTools(const UVoxelSphereTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSphereTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSphereTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSphereTools) \
	NO_API virtual ~UVoxelSphereTools();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_9_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSphereTools;

// ********** End Class UVoxelSphereTools **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
