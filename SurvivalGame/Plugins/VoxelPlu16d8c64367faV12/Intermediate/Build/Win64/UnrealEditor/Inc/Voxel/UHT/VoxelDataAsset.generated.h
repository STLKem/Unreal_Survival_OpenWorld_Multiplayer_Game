// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelAssets/VoxelDataAsset.h"

#ifdef VOXEL_VoxelDataAsset_generated_h
#error "VoxelDataAsset.generated.h already included, missing '#pragma once' in VoxelDataAsset.h"
#endif
#define VOXEL_VoxelDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelIntBox;

// ********** Begin ScriptStruct FVoxelDataAssetImportSettings_MagicaVox ***************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelDataAssetImportSettings_MagicaVox;
// ********** End ScriptStruct FVoxelDataAssetImportSettings_MagicaVox *****************************

// ********** Begin Class UVoxelDataAsset **********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetSize);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelDataAsset, NO_API)


VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelDataAsset(); \
	friend struct Z_Construct_UClass_UVoxelDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelDataAsset, UVoxelTransformableGeneratorWithBounds, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UVoxelDataAsset) \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_ARCHIVESERIALIZER


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelDataAsset(UVoxelDataAsset&&) = delete; \
	UVoxelDataAsset(const UVoxelDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelDataAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelDataAsset) \
	NO_API virtual ~UVoxelDataAsset();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_38_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelDataAsset;

// ********** End Class UVoxelDataAsset ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h

// ********** Begin Enum EVoxelDataAssetImportSource ***********************************************
#define FOREACH_ENUM_EVOXELDATAASSETIMPORTSOURCE(op) \
	op(EVoxelDataAssetImportSource::None) \
	op(EVoxelDataAssetImportSource::MagicaVox) \
	op(EVoxelDataAssetImportSource::RawVox) \
	op(EVoxelDataAssetImportSource::Mesh) 

enum class EVoxelDataAssetImportSource;
template<> struct TIsUEnumClass<EVoxelDataAssetImportSource> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelDataAssetImportSource>();
// ********** End Enum EVoxelDataAssetImportSource *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
