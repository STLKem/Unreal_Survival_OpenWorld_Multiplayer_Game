// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelPlaceableItems/VoxelPlaceableItemManager.h"

#ifdef VOXEL_VoxelPlaceableItemManager_generated_h
#error "VoxelPlaceableItemManager.generated.h already included, missing '#pragma once' in VoxelPlaceableItemManager.h"
#endif
#define VOXEL_VoxelPlaceableItemManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UVoxelGeneratorCache;
struct FLinearColor;
struct FVoxelDataItemConstructionInfo;

// ********** Begin ScriptStruct FVoxelDataItemConstructionInfo ************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelDataItemConstructionInfo;
// ********** End ScriptStruct FVoxelDataItemConstructionInfo **************************************

// ********** Begin Class UVoxelPlaceableItemManager ***********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnClear); \
	DECLARE_FUNCTION(execOnGenerate); \
	DECLARE_FUNCTION(execGetGeneratorCache); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execDrawDebugLine); \
	DECLARE_FUNCTION(execAddDataItem);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_CALLBACK_WRAPPERS
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPlaceableItemManager(); \
	friend struct Z_Construct_UClass_UVoxelPlaceableItemManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelPlaceableItemManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister) \
	DECLARE_SERIALIZER(UVoxelPlaceableItemManager)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPlaceableItemManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelPlaceableItemManager(UVoxelPlaceableItemManager&&) = delete; \
	UVoxelPlaceableItemManager(const UVoxelPlaceableItemManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPlaceableItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPlaceableItemManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPlaceableItemManager) \
	NO_API virtual ~UVoxelPlaceableItemManager();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_61_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelPlaceableItemManager;

// ********** End Class UVoxelPlaceableItemManager *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
