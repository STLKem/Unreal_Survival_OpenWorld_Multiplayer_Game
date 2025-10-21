// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelWorld.h"

#ifdef VOXEL_VoxelWorld_generated_h
#error "VoxelWorld.generated.h already included, missing '#pragma once' in VoxelWorld.h"
#endif
#define VOXEL_VoxelWorld_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UVoxelGenerator;
class UVoxelGeneratorCache;
class UVoxelMultiplayerInterface;
enum class EVoxelWorldCoordinatesRounding : uint8;
struct FVoxelGeneratorInit;
struct FVoxelWorldCreateInfo;

// ********** Begin Delegate FOnGenerateWorld ******************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_75_DELEGATE \
static void FOnGenerateWorld_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateWorld);


// ********** End Delegate FOnGenerateWorld ********************************************************

// ********** Begin Delegate FOnWorldLoaded ********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_76_DELEGATE \
static void FOnWorldLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnWorldLoaded);


// ********** End Delegate FOnWorldLoaded **********************************************************

// ********** Begin Delegate FOnWorldDestroyed *****************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_77_DELEGATE \
static void FOnWorldDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnWorldDestroyed);


// ********** End Delegate FOnWorldDestroyed *******************************************************

// ********** Begin Delegate FOnMaxFoliageInstancesReached *****************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_78_DELEGATE \
static void FOnMaxFoliageInstancesReached_DelegateWrapper(const FMulticastScriptDelegate& OnMaxFoliageInstancesReached);


// ********** End Delegate FOnMaxFoliageInstancesReached *******************************************

// ********** Begin Class AVoxelWorld **************************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCollisionResponseToChannel); \
	DECLARE_FUNCTION(execGetMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execCreateMultiplayerInterfaceInstance); \
	DECLARE_FUNCTION(execGetGeneratorInit); \
	DECLARE_FUNCTION(execK2_GetGeneratorCache); \
	DECLARE_FUNCTION(execAddOffset); \
	DECLARE_FUNCTION(execSetOffset); \
	DECLARE_FUNCTION(execGetNeighboringPositions); \
	DECLARE_FUNCTION(execLocalToGlobalFloatBP); \
	DECLARE_FUNCTION(execLocalToGlobal); \
	DECLARE_FUNCTION(execGlobalToLocalFloatBP); \
	DECLARE_FUNCTION(execGlobalToLocal); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execIsCreated); \
	DECLARE_FUNCTION(execSetWorldSize); \
	DECLARE_FUNCTION(execSetRenderOctreeDepth); \
	DECLARE_FUNCTION(execSetGeneratorClass); \
	DECLARE_FUNCTION(execSetGeneratorObject); \
	DECLARE_FUNCTION(execDestroyWorld); \
	DECLARE_FUNCTION(execCreateWorld);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AVoxelWorld, NO_API)


VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelWorld(); \
	friend struct Z_Construct_UClass_AVoxelWorld_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelWorld, AVoxelWorldInterface, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelWorld_NoRegister) \
	DECLARE_SERIALIZER(AVoxelWorld) \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AVoxelWorld*>(this); }


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelWorld(AVoxelWorld&&) = delete; \
	AVoxelWorld(const AVoxelWorld&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelWorld) \
	NO_API virtual ~AVoxelWorld();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_52_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelWorld;

// ********** End Class AVoxelWorld ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
