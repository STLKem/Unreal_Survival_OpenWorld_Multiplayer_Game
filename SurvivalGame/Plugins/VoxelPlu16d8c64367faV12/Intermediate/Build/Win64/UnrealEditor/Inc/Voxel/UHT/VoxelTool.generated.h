// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Tools/VoxelTool.h"

#ifdef VOXEL_VoxelTool_generated_h
#error "VoxelTool.generated.h already included, missing '#pragma once' in VoxelTool.h"
#endif
#define VOXEL_VoxelTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
class APlayerController;
class AVoxelWorld;
class UVoxelTool;
class UWorld;
struct FVoxelIntBox;
struct FVoxelToolTickData;

// ********** Begin ScriptStruct FVoxelToolTickData ************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolTickData_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelToolTickData;
// ********** End ScriptStruct FVoxelToolTickData **************************************************

// ********** Begin Delegate FVoxelTool_OnBoundsUpdated ********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_90_DELEGATE \
VOXEL_API void FVoxelTool_OnBoundsUpdated_DelegateWrapper(const FMulticastScriptDelegate& VoxelTool_OnBoundsUpdated, AVoxelWorld* World, FVoxelIntBox Bounds);


// ********** End Delegate FVoxelTool_OnBoundsUpdated **********************************************

// ********** Begin Class UVoxelToolSharedConfig ***************************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolSharedConfig(); \
	friend struct Z_Construct_UClass_UVoxelToolSharedConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelToolSharedConfig, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister) \
	DECLARE_SERIALIZER(UVoxelToolSharedConfig)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelToolSharedConfig(UVoxelToolSharedConfig&&) = delete; \
	UVoxelToolSharedConfig(const UVoxelToolSharedConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolSharedConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolSharedConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelToolSharedConfig) \
	NO_API virtual ~UVoxelToolSharedConfig();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_92_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelToolSharedConfig;

// ********** End Class UVoxelToolSharedConfig *****************************************************

// ********** Begin Delegate FDoEditDynamicOverride ************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_203_DELEGATE \
static void FDoEditDynamicOverride_DelegateWrapper(const FScriptDelegate& DoEditDynamicOverride, FVector Position, FVector Normal);


// ********** End Delegate FDoEditDynamicOverride **************************************************

// ********** Begin Class UVoxelTool ***************************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRayDirection); \
	DECLARE_FUNCTION(execGetRayOrigin); \
	DECLARE_FUNCTION(execDeproject); \
	DECLARE_FUNCTION(execIsAlternativeMode); \
	DECLARE_FUNCTION(execGetAxis); \
	DECLARE_FUNCTION(execIsKeyDown); \
	DECLARE_FUNCTION(execMakeVoxelTool); \
	DECLARE_FUNCTION(execMakeToolAxes); \
	DECLARE_FUNCTION(execMakeToolKeys); \
	DECLARE_FUNCTION(execGetToolName); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execK2_SimpleTick); \
	DECLARE_FUNCTION(execK2_AdvancedTick); \
	DECLARE_FUNCTION(execGetVoxelWorld); \
	DECLARE_FUNCTION(execDisableTool); \
	DECLARE_FUNCTION(execEnableTool);


VOXEL_API UClass* Z_Construct_UClass_UVoxelTool_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelTool(); \
	friend struct Z_Construct_UClass_UVoxelTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelTool, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelTool_NoRegister) \
	DECLARE_SERIALIZER(UVoxelTool)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelTool(UVoxelTool&&) = delete; \
	UVoxelTool(const UVoxelTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelTool); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelTool) \
	NO_API virtual ~UVoxelTool();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_164_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelTool;

// ********** End Class UVoxelTool *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
