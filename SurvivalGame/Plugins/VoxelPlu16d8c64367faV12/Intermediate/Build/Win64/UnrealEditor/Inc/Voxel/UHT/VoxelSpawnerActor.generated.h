// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelSpawners/VoxelSpawnerActor.h"

#ifdef VOXEL_VoxelSpawnerActor_generated_h
#error "VoxelSpawnerActor.generated.h already included, missing '#pragma once' in VoxelSpawnerActor.h"
#endif
#define VOXEL_VoxelSpawnerActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 class UMaterialInterface;
class UStaticMesh;
struct FBodyInstance;

// ********** Begin Class AVoxelSpawnerActor *******************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInstanceRandom); \
	DECLARE_FUNCTION(execSetStaticMesh);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_CALLBACK_WRAPPERS
VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelSpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelSpawnerActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelSpawnerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelSpawnerActor_NoRegister) \
	DECLARE_SERIALIZER(AVoxelSpawnerActor)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelSpawnerActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelSpawnerActor(AVoxelSpawnerActor&&) = delete; \
	AVoxelSpawnerActor(const AVoxelSpawnerActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelSpawnerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelSpawnerActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelSpawnerActor) \
	NO_API virtual ~AVoxelSpawnerActor();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_15_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelSpawnerActor;

// ********** End Class AVoxelSpawnerActor *********************************************************

// ********** Begin Class AVoxelMeshSpawnerActor ***************************************************
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshSpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelMeshSpawnerActor, AVoxelSpawnerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister) \
	DECLARE_SERIALIZER(AVoxelMeshSpawnerActor)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelMeshSpawnerActor(AVoxelMeshSpawnerActor&&) = delete; \
	AVoxelMeshSpawnerActor(const AVoxelMeshSpawnerActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshSpawnerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshSpawnerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshSpawnerActor) \
	NO_API virtual ~AVoxelMeshSpawnerActor();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_32_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelMeshSpawnerActor;

// ********** End Class AVoxelMeshSpawnerActor *****************************************************

// ********** Begin Class AVoxelMeshWithPhysicsRelevancySpawnerActor *******************************
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor(); \
	friend struct Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelMeshWithPhysicsRelevancySpawnerActor, AVoxelMeshSpawnerActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister) \
	DECLARE_SERIALIZER(AVoxelMeshWithPhysicsRelevancySpawnerActor)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelMeshWithPhysicsRelevancySpawnerActor(AVoxelMeshWithPhysicsRelevancySpawnerActor&&) = delete; \
	AVoxelMeshWithPhysicsRelevancySpawnerActor(const AVoxelMeshWithPhysicsRelevancySpawnerActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelMeshWithPhysicsRelevancySpawnerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelMeshWithPhysicsRelevancySpawnerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelMeshWithPhysicsRelevancySpawnerActor) \
	NO_API virtual ~AVoxelMeshWithPhysicsRelevancySpawnerActor();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_48_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelMeshWithPhysicsRelevancySpawnerActor;

// ********** End Class AVoxelMeshWithPhysicsRelevancySpawnerActor *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
