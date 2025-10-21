// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelData/VoxelSaveUtilities.h"

#ifdef VOXEL_VoxelSaveUtilities_generated_h
#error "VoxelSaveUtilities.generated.h already included, missing '#pragma once' in VoxelSaveUtilities.h"
#endif
#define VOXEL_VoxelSaveUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelCompressedWorldSave;
struct FVoxelUncompressedWorldSave;

// ********** Begin Class UVoxelSaveUtilities ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecompressVoxelSave); \
	DECLARE_FUNCTION(execCompressVoxelSave);


VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSaveUtilities(); \
	friend struct Z_Construct_UClass_UVoxelSaveUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSaveUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelSaveUtilities_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSaveUtilities)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSaveUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSaveUtilities(UVoxelSaveUtilities&&) = delete; \
	UVoxelSaveUtilities(const UVoxelSaveUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSaveUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSaveUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSaveUtilities) \
	NO_API virtual ~UVoxelSaveUtilities();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_82_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSaveUtilities;

// ********** End Class UVoxelSaveUtilities ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
