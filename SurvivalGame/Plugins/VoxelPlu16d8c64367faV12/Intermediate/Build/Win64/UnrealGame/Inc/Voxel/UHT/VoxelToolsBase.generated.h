// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Gen/VoxelToolsBase.h"

#ifdef VOXEL_VoxelToolsBase_generated_h
#error "VoxelToolsBase.generated.h already included, missing '#pragma once' in VoxelToolsBase.h"
#endif
#define VOXEL_VoxelToolsBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FModifiedVoxelMaterial;
struct FModifiedVoxelValue;
struct FVoxelIntBox;

// ********** Begin ScriptStruct FModifiedVoxelValue ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FModifiedVoxelValue;
// ********** End ScriptStruct FModifiedVoxelValue *************************************************

// ********** Begin ScriptStruct FModifiedVoxelMaterial ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FModifiedVoxelMaterial;
// ********** End ScriptStruct FModifiedVoxelMaterial **********************************************

// ********** Begin Class UVoxelToolsBase **********************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetModifiedVoxelMaterialsBounds); \
	DECLARE_FUNCTION(execGetModifiedVoxelValuesBounds);


VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolsBase(); \
	friend struct Z_Construct_UClass_UVoxelToolsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelToolsBase, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelToolsBase_NoRegister) \
	DECLARE_SERIALIZER(UVoxelToolsBase)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelToolsBase(UVoxelToolsBase&&) = delete; \
	UVoxelToolsBase(const UVoxelToolsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolsBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolsBase) \
	NO_API virtual ~UVoxelToolsBase();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_65_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelToolsBase;

// ********** End Class UVoxelToolsBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
