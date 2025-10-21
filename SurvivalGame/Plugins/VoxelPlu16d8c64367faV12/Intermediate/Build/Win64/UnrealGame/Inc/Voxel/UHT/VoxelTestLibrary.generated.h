// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelTestLibrary.h"

#ifdef VOXEL_VoxelTestLibrary_generated_h
#error "VoxelTestLibrary.generated.h already included, missing '#pragma once' in VoxelTestLibrary.h"
#endif
#define VOXEL_VoxelTestLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
struct FVoxelIntBox;
struct FVoxelTestValues;

// ********** Begin ScriptStruct FVoxelTestValues **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelTestValues_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelTestValues;
// ********** End ScriptStruct FVoxelTestValues ****************************************************

// ********** Begin Class UVoxelTestLibrary ********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestValues); \
	DECLARE_FUNCTION(execReadValues);


VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelTestLibrary(); \
	friend struct Z_Construct_UClass_UVoxelTestLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelTestLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelTestLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVoxelTestLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTestLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelTestLibrary(UVoxelTestLibrary&&) = delete; \
	UVoxelTestLibrary(const UVoxelTestLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTestLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTestLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTestLibrary) \
	NO_API virtual ~UVoxelTestLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_21_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelTestLibrary;

// ********** End Class UVoxelTestLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
