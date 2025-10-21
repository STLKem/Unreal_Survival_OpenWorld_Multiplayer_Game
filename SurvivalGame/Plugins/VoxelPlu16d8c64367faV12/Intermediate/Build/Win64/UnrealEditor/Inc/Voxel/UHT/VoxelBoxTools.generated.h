// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Gen/VoxelBoxTools.h"

#ifdef VOXEL_VoxelBoxTools_generated_h
#error "VoxelBoxTools.generated.h already included, missing '#pragma once' in VoxelBoxTools.h"
#endif
#define VOXEL_VoxelBoxTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;
class UObject;
struct FLatentActionInfo;
struct FModifiedVoxelMaterial;
struct FModifiedVoxelValue;
struct FVoxelIntBox;
struct FVoxelPaintMaterial;

// ********** Begin Class UVoxelBoxTools ***********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaterialBoxAsync); \
	DECLARE_FUNCTION(execSetMaterialBox); \
	DECLARE_FUNCTION(execRemoveBoxAsync); \
	DECLARE_FUNCTION(execRemoveBox); \
	DECLARE_FUNCTION(execAddBoxAsync); \
	DECLARE_FUNCTION(execAddBox); \
	DECLARE_FUNCTION(execSetValueBoxAsync); \
	DECLARE_FUNCTION(execSetValueBox);


VOXEL_API UClass* Z_Construct_UClass_UVoxelBoxTools_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBoxTools(); \
	friend struct Z_Construct_UClass_UVoxelBoxTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelBoxTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelBoxTools, UVoxelToolsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelBoxTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelBoxTools)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBoxTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelBoxTools(UVoxelBoxTools&&) = delete; \
	UVoxelBoxTools(const UVoxelBoxTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBoxTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBoxTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBoxTools) \
	NO_API virtual ~UVoxelBoxTools();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_9_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelBoxTools;

// ********** End Class UVoxelBoxTools *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelBoxTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
