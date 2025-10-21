// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelDataTools.h"

#ifdef VOXEL_VoxelDataTools_generated_h
#error "VoxelDataTools.generated.h already included, missing '#pragma once' in VoxelDataTools.h"
#endif
#define VOXEL_VoxelDataTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UObject;
class UVoxelHeightmapAsset;
struct FLatentActionInfo;
struct FVoxelCompressedWorldSave;
struct FVoxelDataMemoryUsageInMB;
struct FVoxelFindClosestNonEmptyVoxelResult;
struct FVoxelIntBox;
struct FVoxelMaterial;
struct FVoxelUncompressedWorldSave;
struct FVoxelValueMaterial;

// ********** Begin ScriptStruct FVoxelValueMaterial ***********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelValueMaterial;
// ********** End ScriptStruct FVoxelValueMaterial *************************************************

// ********** Begin ScriptStruct FVoxelDataMemoryUsageInMB *****************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelDataMemoryUsageInMB;
// ********** End ScriptStruct FVoxelDataMemoryUsageInMB *******************************************

// ********** Begin ScriptStruct FVoxelFindClosestNonEmptyVoxelResult ******************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelFindClosestNonEmptyVoxelResult;
// ********** End ScriptStruct FVoxelFindClosestNonEmptyVoxelResult ********************************

// ********** Begin Class UVoxelDataTools **********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindClosestNonEmptyVoxelAsync); \
	DECLARE_FUNCTION(execFindClosestNonEmptyVoxel); \
	DECLARE_FUNCTION(execSetBoxAsDirtyAsync); \
	DECLARE_FUNCTION(execSetBoxAsDirty); \
	DECLARE_FUNCTION(execCheckIfSameAsGeneratorAsync); \
	DECLARE_FUNCTION(execCheckIfSameAsGenerator); \
	DECLARE_FUNCTION(execRoundToGeneratorAsync); \
	DECLARE_FUNCTION(execRoundToGenerator); \
	DECLARE_FUNCTION(execCompressIntoHeightmap); \
	DECLARE_FUNCTION(execCheckForSingleMaterialsAsync); \
	DECLARE_FUNCTION(execCheckForSingleMaterials); \
	DECLARE_FUNCTION(execCheckForSingleValuesAsync); \
	DECLARE_FUNCTION(execCheckForSingleValues); \
	DECLARE_FUNCTION(execClearCachedMaterialsAsync); \
	DECLARE_FUNCTION(execClearCachedMaterials); \
	DECLARE_FUNCTION(execClearCachedValuesAsync); \
	DECLARE_FUNCTION(execClearCachedValues); \
	DECLARE_FUNCTION(execGetDataMemoryUsageInMB); \
	DECLARE_FUNCTION(execGetVoxelsValueAndMaterialAsync); \
	DECLARE_FUNCTION(execGetVoxelsValueAndMaterial); \
	DECLARE_FUNCTION(execClearUnusedMaterialsAsync); \
	DECLARE_FUNCTION(execClearUnusedMaterials); \
	DECLARE_FUNCTION(execRoundVoxelsAsync); \
	DECLARE_FUNCTION(execRoundVoxels); \
	DECLARE_FUNCTION(execLoadFromCompressedSave); \
	DECLARE_FUNCTION(execLoadFromSave); \
	DECLARE_FUNCTION(execGetCompressedSaveAsync); \
	DECLARE_FUNCTION(execGetSaveAsync); \
	DECLARE_FUNCTION(execGetCompressedSave); \
	DECLARE_FUNCTION(execGetSave); \
	DECLARE_FUNCTION(execCacheMaterialsAsync); \
	DECLARE_FUNCTION(execCacheValuesAsync); \
	DECLARE_FUNCTION(execSetMaterialAsync); \
	DECLARE_FUNCTION(execGetMaterialAsync); \
	DECLARE_FUNCTION(execSetValueAsync); \
	DECLARE_FUNCTION(execGetValueAsync); \
	DECLARE_FUNCTION(execCacheMaterials); \
	DECLARE_FUNCTION(execCacheValues); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetInterpolatedValue); \
	DECLARE_FUNCTION(execGetValue);


VOXEL_API UClass* Z_Construct_UClass_UVoxelDataTools_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDataTools(); \
	friend struct Z_Construct_UClass_UVoxelDataTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelDataTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelDataTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelDataTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelDataTools)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelDataTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelDataTools(UVoxelDataTools&&) = delete; \
	UVoxelDataTools(const UVoxelDataTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDataTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDataTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelDataTools) \
	NO_API virtual ~UVoxelDataTools();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_71_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelDataTools;

// ********** End Class UVoxelDataTools ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
