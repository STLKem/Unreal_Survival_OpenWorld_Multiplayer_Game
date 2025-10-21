// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelIntBoxLibrary.h"

#ifdef VOXEL_VoxelIntBoxLibrary_generated_h
#error "VoxelIntBoxLibrary.generated.h already included, missing '#pragma once' in VoxelIntBoxLibrary.h"
#endif
#define VOXEL_VoxelIntBoxLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelIntBox;
struct FVoxelIntBoxWithValidity;

// ********** Begin Class UVoxelIntBoxLibrary ******************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeIntBoxFromPoints); \
	DECLARE_FUNCTION(execNotEqual_IntBoxIntBox); \
	DECLARE_FUNCTION(execEqualEqual_IntBoxIntBox); \
	DECLARE_FUNCTION(execScale); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execAddPoint); \
	DECLARE_FUNCTION(execApplyTransform); \
	DECLARE_FUNCTION(execExtend_IntVector); \
	DECLARE_FUNCTION(execExtend); \
	DECLARE_FUNCTION(execOverlap); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execIntersect); \
	DECLARE_FUNCTION(execGetCorners); \
	DECLARE_FUNCTION(execGetCenter); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execIsVectorInsideBox); \
	DECLARE_FUNCTION(execIsIntVectorInsideBox); \
	DECLARE_FUNCTION(execMakeBoxFromPositionAndRadius); \
	DECLARE_FUNCTION(execMakeBoxFromLocalPositionAndRadius); \
	DECLARE_FUNCTION(execConv_IntBoxToString); \
	DECLARE_FUNCTION(execRemoveTranslation); \
	DECLARE_FUNCTION(execCenter); \
	DECLARE_FUNCTION(execTranslateBox); \
	DECLARE_FUNCTION(execInfiniteBox); \
	DECLARE_FUNCTION(execBreakIntBoxWithValidity); \
	DECLARE_FUNCTION(execMakeIntBoxWithValidity); \
	DECLARE_FUNCTION(execBreakIntBox); \
	DECLARE_FUNCTION(execMakeIntBox);


VOXEL_API UClass* Z_Construct_UClass_UVoxelIntBoxLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelIntBoxLibrary(); \
	friend struct Z_Construct_UClass_UVoxelIntBoxLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelIntBoxLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelIntBoxLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelIntBoxLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVoxelIntBoxLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelIntBoxLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelIntBoxLibrary(UVoxelIntBoxLibrary&&) = delete; \
	UVoxelIntBoxLibrary(const UVoxelIntBoxLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelIntBoxLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelIntBoxLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelIntBoxLibrary) \
	NO_API virtual ~UVoxelIntBoxLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_11_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelIntBoxLibrary;

// ********** End Class UVoxelIntBoxLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelIntBoxLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
