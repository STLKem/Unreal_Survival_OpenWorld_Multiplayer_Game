// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelDebug/VoxelDebugUtilities.h"

#ifdef VOXEL_VoxelDebugUtilities_generated_h
#error "VoxelDebugUtilities.generated.h already included, missing '#pragma once' in VoxelDebugUtilities.h"
#endif
#define VOXEL_VoxelDebugUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
enum class EVoxelDataType : uint8;
struct FColor;
struct FLinearColor;
struct FVoxelIntBox;

// ********** Begin Class UVoxelDebugUtilities *****************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawDataOctree); \
	DECLARE_FUNCTION(execDebugVoxelsInsideBounds); \
	DECLARE_FUNCTION(execDrawDebugIntBox);


VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugUtilities_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDebugUtilities(); \
	friend struct Z_Construct_UClass_UVoxelDebugUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelDebugUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelDebugUtilities_NoRegister) \
	DECLARE_SERIALIZER(UVoxelDebugUtilities)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDebugUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelDebugUtilities(UVoxelDebugUtilities&&) = delete; \
	UVoxelDebugUtilities(const UVoxelDebugUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDebugUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDebugUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDebugUtilities) \
	NO_API virtual ~UVoxelDebugUtilities();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_17_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelDebugUtilities;

// ********** End Class UVoxelDebugUtilities *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
