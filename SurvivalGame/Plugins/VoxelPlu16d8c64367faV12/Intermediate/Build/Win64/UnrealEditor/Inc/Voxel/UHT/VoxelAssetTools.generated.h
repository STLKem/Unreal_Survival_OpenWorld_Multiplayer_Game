// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelAssetTools.h"

#ifdef VOXEL_VoxelAssetTools_generated_h
#error "VoxelAssetTools.generated.h already included, missing '#pragma once' in VoxelAssetTools.h"
#endif
#define VOXEL_VoxelAssetTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UObject;
class UVoxelDataAsset;
class UVoxelTransformableGeneratorInstanceWrapper;
enum class EVoxelAssetMergeMode : uint8;
struct FLatentActionInfo;
struct FVoxelAssetItemReference;
struct FVoxelDisableEditsBoxItemReference;
struct FVoxelIntBox;
struct FVoxelMaterial;

// ********** Begin ScriptStruct FVoxelAssetItemReference ******************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelAssetItemReference_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelAssetItemReference;
// ********** End ScriptStruct FVoxelAssetItemReference ********************************************

// ********** Begin ScriptStruct FVoxelDisableEditsBoxItemReference ********************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDisableEditsBoxItemReference_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelDisableEditsBoxItemReference;
// ********** End ScriptStruct FVoxelDisableEditsBoxItemReference **********************************

// ********** Begin Class UVoxelAssetTools *********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDisableEditsBoxAsync); \
	DECLARE_FUNCTION(execAddDisableEditsBox); \
	DECLARE_FUNCTION(execCreateDataAssetFromWorldSection); \
	DECLARE_FUNCTION(execSetDataAssetMaterial); \
	DECLARE_FUNCTION(execInvertDataAsset); \
	DECLARE_FUNCTION(execImportDataAssetFastAsync); \
	DECLARE_FUNCTION(execImportDataAssetFast); \
	DECLARE_FUNCTION(execImportAssetAsync); \
	DECLARE_FUNCTION(execImportAsset); \
	DECLARE_FUNCTION(execImportModifierAssetAsync); \
	DECLARE_FUNCTION(execImportModifierAsset); \
	DECLARE_FUNCTION(execImportAssetAsReferenceAsync); \
	DECLARE_FUNCTION(execImportAssetAsReference);


VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetTools_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelAssetTools(); \
	friend struct Z_Construct_UClass_UVoxelAssetTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelAssetTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelAssetTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelAssetTools)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelAssetTools(UVoxelAssetTools&&) = delete; \
	UVoxelAssetTools(const UVoxelAssetTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelAssetTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelAssetTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelAssetTools) \
	NO_API virtual ~UVoxelAssetTools();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_57_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelAssetTools;

// ********** End Class UVoxelAssetTools ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelAssetTools_h

// ********** Begin Enum EVoxelAssetMergeMode ******************************************************
#define FOREACH_ENUM_EVOXELASSETMERGEMODE(op) \
	op(EVoxelAssetMergeMode::AllValues) \
	op(EVoxelAssetMergeMode::AllMaterials) \
	op(EVoxelAssetMergeMode::AllValuesAndAllMaterials) \
	op(EVoxelAssetMergeMode::InnerValues) \
	op(EVoxelAssetMergeMode::InnerMaterials) \
	op(EVoxelAssetMergeMode::InnerValuesAndInnerMaterials) 

enum class EVoxelAssetMergeMode : uint8;
template<> struct TIsUEnumClass<EVoxelAssetMergeMode> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetMergeMode>();
// ********** End Enum EVoxelAssetMergeMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
