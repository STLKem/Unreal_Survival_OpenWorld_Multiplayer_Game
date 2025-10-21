// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelPhysics.h"

#ifdef VOXEL_VoxelPhysics_generated_h
#error "VoxelPhysics.generated.h already included, missing '#pragma once' in VoxelPhysics.h"
#endif
#define VOXEL_VoxelPhysics_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class IVoxelPhysicsPartSpawner;
class IVoxelPhysicsPartSpawnerResult;
class UObject;
struct FLatentActionInfo;
struct FVoxelIntBox;

// ********** Begin Class UVoxelPhysicsTools *******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyVoxelPhysics);


VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsTools_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPhysicsTools(); \
	friend struct Z_Construct_UClass_UVoxelPhysicsTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelPhysicsTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelPhysicsTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelPhysicsTools)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPhysicsTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelPhysicsTools(UVoxelPhysicsTools&&) = delete; \
	UVoxelPhysicsTools(const UVoxelPhysicsTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPhysicsTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPhysicsTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPhysicsTools) \
	NO_API virtual ~UVoxelPhysicsTools();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_28_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelPhysicsTools;

// ********** End Class UVoxelPhysicsTools *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysics_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
