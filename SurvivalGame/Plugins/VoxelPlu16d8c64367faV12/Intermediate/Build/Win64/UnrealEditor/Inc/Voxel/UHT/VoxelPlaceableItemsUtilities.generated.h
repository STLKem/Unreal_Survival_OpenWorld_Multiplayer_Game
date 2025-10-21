// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h"

#ifdef VOXEL_VoxelPlaceableItemsUtilities_generated_h
#error "VoxelPlaceableItemsUtilities.generated.h already included, missing '#pragma once' in VoxelPlaceableItemsUtilities.h"
#endif
#define VOXEL_VoxelPlaceableItemsUtilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FVoxelPerlinWormsSettings;

// ********** Begin ScriptStruct FVoxelPerlinWormsSettings *****************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelPerlinWormsSettings;
// ********** End ScriptStruct FVoxelPerlinWormsSettings *******************************************

// ********** Begin Delegate FAddWorm **************************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_83_DELEGATE \
static void FAddWorm_DelegateWrapper(const FScriptDelegate& AddWorm, FVector Start, FVector End, float Radius);


// ********** End Delegate FAddWorm ****************************************************************

// ********** Begin Class UVoxelPlaceableItemsUtilities ********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddWorms);


VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelPlaceableItemsUtilities(); \
	friend struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelPlaceableItemsUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister) \
	DECLARE_SERIALIZER(UVoxelPlaceableItemsUtilities)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelPlaceableItemsUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelPlaceableItemsUtilities(UVoxelPlaceableItemsUtilities&&) = delete; \
	UVoxelPlaceableItemsUtilities(const UVoxelPlaceableItemsUtilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelPlaceableItemsUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelPlaceableItemsUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelPlaceableItemsUtilities) \
	NO_API virtual ~UVoxelPlaceableItemsUtilities();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_77_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelPlaceableItemsUtilities;

// ********** End Class UVoxelPlaceableItemsUtilities **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
