// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelBlueprintLibrary.h"

#ifdef VOXEL_VoxelBlueprintLibrary_generated_h
#error "VoxelBlueprintLibrary.generated.h already included, missing '#pragma once' in VoxelBlueprintLibrary.h"
#endif
#define VOXEL_VoxelBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AVoxelSpawnerActor;
class AVoxelWorld;
class UMaterialInterface;
class UObject;
class UStaticMesh;
class UTexture2D;
class UVoxelHierarchicalInstancedStaticMeshComponent;
class UWorld;
enum class EVoxelMemoryUsageType : uint8;
enum class EVoxelRGBA : uint8;
enum class EVoxelSpawnerActorSpawnType : uint8;
enum class EVoxelTaskType : uint8; 
struct FLinearColor;
struct FVoxelColorTexture;
struct FVoxelFloatTexture;
struct FVoxelInstancedMeshSettings;
struct FVoxelIntBox;
struct FVoxelMaterial;
struct FVoxelPaintMaterial;
struct FVoxelPaintMaterialColor;
struct FVoxelPaintMaterialFiveWayBlend;
struct FVoxelPaintMaterialMultiIndex;
struct FVoxelPaintMaterialMultiIndexRaw;
struct FVoxelPaintMaterialMultiIndexWetness;
struct FVoxelPaintMaterialSingleIndex;
struct FVoxelPaintMaterialUV;
struct FVoxelSpawnerActorSettings;
struct FVoxelSpawnersSave;
struct FVoxelToolRenderingRef;

// ********** Begin Delegate FVoxelOnChunkGenerationDynamicDelegate ********************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_28_DELEGATE \
VOXEL_API void FVoxelOnChunkGenerationDynamicDelegate_DelegateWrapper(const FScriptDelegate& VoxelOnChunkGenerationDynamicDelegate, AVoxelWorld* World, FVoxelIntBox Bounds);


// ********** End Delegate FVoxelOnChunkGenerationDynamicDelegate **********************************

// ********** Begin Delegate FChunkDynamicDelegate *************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_29_DELEGATE \
VOXEL_API void FChunkDynamicDelegate_DelegateWrapper(const FScriptDelegate& ChunkDynamicDelegate, FVoxelIntBox Bounds);


// ********** End Delegate FChunkDynamicDelegate ***************************************************

// ********** Begin ScriptStruct FVoxelToolRenderingRef ********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelToolRenderingRef;
// ********** End ScriptStruct FVoxelToolRenderingRef **********************************************

// ********** Begin Class UVoxelBlueprintLibrary ***************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddNeighborsToSet); \
	DECLARE_FUNCTION(execIsVoxelColorTextureValid); \
	DECLARE_FUNCTION(execIsVoxelFloatTextureValid); \
	DECLARE_FUNCTION(execGetVoxelColorTextureSize); \
	DECLARE_FUNCTION(execGetVoxelFloatTextureSize); \
	DECLARE_FUNCTION(execCreateVoxelColorTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execCreateTextureFromVoxelColorTexture); \
	DECLARE_FUNCTION(execCreateOrUpdateTextureFromVoxelColorTexture); \
	DECLARE_FUNCTION(execCreateVoxelFloatTextureFromTextureChannel); \
	DECLARE_FUNCTION(execCreateTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execCreateOrUpdateTextureFromVoxelFloatTexture); \
	DECLARE_FUNCTION(execMakeMaterialMask); \
	DECLARE_FUNCTION(execMakeRawMaterial); \
	DECLARE_FUNCTION(execGetRawMaterial); \
	DECLARE_FUNCTION(execGetUV); \
	DECLARE_FUNCTION(execGetMultiIndex); \
	DECLARE_FUNCTION(execGetSingleIndex); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execApplyPaintMaterial); \
	DECLARE_FUNCTION(execCreateUVPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexRawPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexWetnessPaintMaterial); \
	DECLARE_FUNCTION(execCreateMultiIndexPaintMaterial); \
	DECLARE_FUNCTION(execCreateSingleIndexPaintMaterial); \
	DECLARE_FUNCTION(execCreateFiveWayBlendPaintMaterial); \
	DECLARE_FUNCTION(execCreateColorPaintMaterial); \
	DECLARE_FUNCTION(execGetMin_Intvector); \
	DECLARE_FUNCTION(execGetMax_Intvector); \
	DECLARE_FUNCTION(execMultiply_IntIntVector); \
	DECLARE_FUNCTION(execMultiply_IntVectorInt); \
	DECLARE_FUNCTION(execDivide_IntVectorInt); \
	DECLARE_FUNCTION(execMultiply_IntVectorIntVector); \
	DECLARE_FUNCTION(execSubstract_IntVectorIntVector); \
	DECLARE_FUNCTION(execAdd_IntVectorIntVector); \
	DECLARE_FUNCTION(execGetRenderBoundsOverlappingDataBounds); \
	DECLARE_FUNCTION(execMakeIntBoxFromGlobalPositionAndRadius); \
	DECLARE_FUNCTION(execIsWorldVoxelPoolCreated); \
	DECLARE_FUNCTION(execDestroyWorldVoxelThreadPool); \
	DECLARE_FUNCTION(execCreateWorldVoxelThreadPool); \
	DECLARE_FUNCTION(execIsGlobalVoxelPoolCreated); \
	DECLARE_FUNCTION(execDestroyGlobalVoxelThreadPool); \
	DECLARE_FUNCTION(execCreateGlobalVoxelThreadPool); \
	DECLARE_FUNCTION(execSetToolRenderingEnabled); \
	DECLARE_FUNCTION(execSetToolRenderingBounds); \
	DECLARE_FUNCTION(execSetToolRenderingMaterial); \
	DECLARE_FUNCTION(execDestroyToolRendering); \
	DECLARE_FUNCTION(execCreateToolRendering); \
	DECLARE_FUNCTION(execIsValidRef); \
	DECLARE_FUNCTION(execBindVoxelGenerationEvent); \
	DECLARE_FUNCTION(execBindVoxelChunkEvents); \
	DECLARE_FUNCTION(execRecreate); \
	DECLARE_FUNCTION(execRecreateSpawners); \
	DECLARE_FUNCTION(execRecreateRender); \
	DECLARE_FUNCTION(execApplyNewMaterials); \
	DECLARE_FUNCTION(execIsVoxelWorldFoliageLoading); \
	DECLARE_FUNCTION(execIsVoxelWorldMeshLoading); \
	DECLARE_FUNCTION(execGetTaskCount); \
	DECLARE_FUNCTION(execAreCollisionsEnabled); \
	DECLARE_FUNCTION(execApplyLODSettings); \
	DECLARE_FUNCTION(execUpdateAll); \
	DECLARE_FUNCTION(execUpdateBounds); \
	DECLARE_FUNCTION(execUpdatePosition); \
	DECLARE_FUNCTION(execScaleData); \
	DECLARE_FUNCTION(execClearDirtyData); \
	DECLARE_FUNCTION(execHasMaterialData); \
	DECLARE_FUNCTION(execHasValueData); \
	DECLARE_FUNCTION(execClearMaterialData); \
	DECLARE_FUNCTION(execClearValueData); \
	DECLARE_FUNCTION(execClearAllData); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetIntOutput); \
	DECLARE_FUNCTION(execGetFloatOutput); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execGetHistoryPosition); \
	DECLARE_FUNCTION(execClearFrames); \
	DECLARE_FUNCTION(execSaveFrame); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execLoadFromSpawnersSave); \
	DECLARE_FUNCTION(execGetSpawnersSave); \
	DECLARE_FUNCTION(execMarkSpawnersDirty); \
	DECLARE_FUNCTION(execRegenerateSpawners); \
	DECLARE_FUNCTION(execAddInstances); \
	DECLARE_FUNCTION(execSpawnVoxelSpawnerActorByInstanceIndex); \
	DECLARE_FUNCTION(execSpawnVoxelSpawnerActorsInArea); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsOverlappingActor); \
	DECLARE_FUNCTION(execGetVoxelWorldOverlappingActor); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsOverlappingBox); \
	DECLARE_FUNCTION(execGetVoxelWorldOverlappingBox); \
	DECLARE_FUNCTION(execGetAllVoxelWorldsContainingPosition); \
	DECLARE_FUNCTION(execGetVoxelWorldContainingPosition); \
	DECLARE_FUNCTION(execTransformVoxelBoxToGlobalBox); \
	DECLARE_FUNCTION(execTransformGlobalBoxToVoxelBox); \
	DECLARE_FUNCTION(execGetEstimatedCollisionsMemoryUsageInMB); \
	DECLARE_FUNCTION(execLogMemoryStats); \
	DECLARE_FUNCTION(execGetPeakMemoryUsageInMB); \
	DECLARE_FUNCTION(execGetMemoryUsageInMB); \
	DECLARE_FUNCTION(execNumberOfCores); \
	DECLARE_FUNCTION(execRaiseError); \
	DECLARE_FUNCTION(execRaiseWarning); \
	DECLARE_FUNCTION(execRaiseInfo); \
	DECLARE_FUNCTION(execIsVoxelPluginPro);


VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVoxelBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UVoxelBlueprintLibrary)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelBlueprintLibrary(UVoxelBlueprintLibrary&&) = delete; \
	UVoxelBlueprintLibrary(const UVoxelBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBlueprintLibrary) \
	NO_API virtual ~UVoxelBlueprintLibrary();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_61_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelBlueprintLibrary;

// ********** End Class UVoxelBlueprintLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h

// ********** Begin Enum EVoxelMemoryUsageType *****************************************************
#define FOREACH_ENUM_EVOXELMEMORYUSAGETYPE(op) \
	op(EVoxelMemoryUsageType::Total) \
	op(EVoxelMemoryUsageType::VoxelsDirtyValuesData) \
	op(EVoxelMemoryUsageType::VoxelsDirtyMaterialsData) \
	op(EVoxelMemoryUsageType::VoxelsCachedValuesData) \
	op(EVoxelMemoryUsageType::VoxelsCachedMaterialsData) \
	op(EVoxelMemoryUsageType::UndoRedo) \
	op(EVoxelMemoryUsageType::Multiplayer) \
	op(EVoxelMemoryUsageType::IntermediateBuffers) \
	op(EVoxelMemoryUsageType::MeshesIndices) \
	op(EVoxelMemoryUsageType::MeshesTessellationIndices) \
	op(EVoxelMemoryUsageType::MeshesVertices) \
	op(EVoxelMemoryUsageType::MeshesColors) \
	op(EVoxelMemoryUsageType::MeshesUVsAndTangents) \
	op(EVoxelMemoryUsageType::DataAssets) \
	op(EVoxelMemoryUsageType::HeightmapAssets) \
	op(EVoxelMemoryUsageType::UncompressedSaves) \
	op(EVoxelMemoryUsageType::CompressedSaves) 

enum class EVoxelMemoryUsageType : uint8;
template<> struct TIsUEnumClass<EVoxelMemoryUsageType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelMemoryUsageType>();
// ********** End Enum EVoxelMemoryUsageType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
