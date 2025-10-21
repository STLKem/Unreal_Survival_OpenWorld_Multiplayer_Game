// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelImporters/VoxelMeshImporter.h"

#ifdef VOXEL_VoxelMeshImporter_generated_h
#error "VoxelMeshImporter.generated.h already included, missing '#pragma once' in VoxelMeshImporter.h"
#endif
#define VOXEL_VoxelMeshImporter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;
class UObject;
class UStaticMesh;
class UTextureRenderTarget2D;
class UVoxelDataAsset;
class UVoxelMeshImporterInputData;
struct FVoxelMeshImporterRenderTargetCache;
struct FVoxelMeshImporterSettings;
struct FVoxelMeshImporterSettingsBase;

// ********** Begin Class UVoxelMeshImporterInputData **********************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterInputData(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelMeshImporterInputData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister) \
	DECLARE_SERIALIZER(UVoxelMeshImporterInputData)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelMeshImporterInputData(UVoxelMeshImporterInputData&&) = delete; \
	UVoxelMeshImporterInputData(const UVoxelMeshImporterInputData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterInputData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterInputData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterInputData) \
	NO_API virtual ~UVoxelMeshImporterInputData();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_27_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelMeshImporterInputData;

// ********** End Class UVoxelMeshImporterInputData ************************************************

// ********** Begin ScriptStruct FVoxelMeshImporterRenderTargetCache *******************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelMeshImporterRenderTargetCache;
// ********** End ScriptStruct FVoxelMeshImporterRenderTargetCache *********************************

// ********** Begin ScriptStruct FVoxelMeshImporterSettingsBase ************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelMeshImporterSettingsBase;
// ********** End ScriptStruct FVoxelMeshImporterSettingsBase **************************************

// ********** Begin ScriptStruct FVoxelMeshImporterSettings ****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FVoxelMeshImporterSettingsBase Super;


struct FVoxelMeshImporterSettings;
// ********** End ScriptStruct FVoxelMeshImporterSettings ******************************************

// ********** Begin Class UVoxelMeshImporterLibrary ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertMeshToVoxels_NoMaterials); \
	DECLARE_FUNCTION(execConvertMeshToVoxels); \
	DECLARE_FUNCTION(execCreateTextureFromMaterial); \
	DECLARE_FUNCTION(execCreateMeshDataFromStaticMesh);


VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMeshImporterLibrary(); \
	friend struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelMeshImporterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVoxelMeshImporterLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMeshImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelMeshImporterLibrary(UVoxelMeshImporterLibrary&&) = delete; \
	UVoxelMeshImporterLibrary(const UVoxelMeshImporterLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMeshImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMeshImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMeshImporterLibrary) \
	NO_API virtual ~UVoxelMeshImporterLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_153_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelMeshImporterLibrary;

// ********** End Class UVoxelMeshImporterLibrary **************************************************

// ********** Begin Class AVoxelMeshImporter *******************************************************
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshImporter(); \
	friend struct Z_Construct_UClass_AVoxelMeshImporter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelMeshImporter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelMeshImporter_NoRegister) \
	DECLARE_SERIALIZER(AVoxelMeshImporter)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_223_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelMeshImporter(AVoxelMeshImporter&&) = delete; \
	AVoxelMeshImporter(const AVoxelMeshImporter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshImporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshImporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshImporter) \
	NO_API virtual ~AVoxelMeshImporter();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_220_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_223_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelMeshImporter;

// ********** End Class AVoxelMeshImporter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
