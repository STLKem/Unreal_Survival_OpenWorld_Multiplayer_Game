// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Gen/VoxelLevelTools.h"

#ifdef VOXEL_VoxelLevelTools_generated_h
#error "VoxelLevelTools.generated.h already included, missing '#pragma once' in VoxelLevelTools.h"
#endif
#define VOXEL_VoxelLevelTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UObject;
struct FLatentActionInfo;
struct FModifiedVoxelValue;
struct FVoxelIntBox;

// ********** Begin Class UVoxelLevelTools *********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLevelAsync); \
	DECLARE_FUNCTION(execLevel);


VOXEL_API UClass* Z_Construct_UClass_UVoxelLevelTools_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelLevelTools(); \
	friend struct Z_Construct_UClass_UVoxelLevelTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelLevelTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelLevelTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelLevelTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelLevelTools)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelLevelTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelLevelTools(UVoxelLevelTools&&) = delete; \
	UVoxelLevelTools(const UVoxelLevelTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelLevelTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelLevelTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelLevelTools) \
	NO_API virtual ~UVoxelLevelTools();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_9_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelLevelTools;

// ********** End Class UVoxelLevelTools ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
