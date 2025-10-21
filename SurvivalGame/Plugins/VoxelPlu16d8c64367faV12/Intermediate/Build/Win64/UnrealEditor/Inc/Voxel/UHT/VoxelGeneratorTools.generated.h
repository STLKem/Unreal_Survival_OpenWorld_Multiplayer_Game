// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelGenerators/VoxelGeneratorTools.h"

#ifdef VOXEL_VoxelGeneratorTools_generated_h
#error "VoxelGeneratorTools.generated.h already included, missing '#pragma once' in VoxelGeneratorTools.h"
#endif
#define VOXEL_VoxelGeneratorTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UVoxelGenerator;
class UVoxelGeneratorInstanceWrapper;
class UVoxelTransformableGenerator;
class UVoxelTransformableGeneratorInstanceWrapper;
struct FLatentActionInfo;
struct FVoxelColorTexture;
struct FVoxelFloatTexture;
struct FVoxelGeneratorInit;
struct FVoxelGeneratorPicker;
struct FVoxelTransformableGeneratorPicker;

// ********** Begin Class UVoxelGeneratorTools *****************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateColorTextureFromGeneratorAsync); \
	DECLARE_FUNCTION(execCreateColorTextureFromGenerator); \
	DECLARE_FUNCTION(execCreateFloatTextureFromGeneratorAsync); \
	DECLARE_FUNCTION(execCreateFloatTextureFromGenerator); \
	DECLARE_FUNCTION(execIsValid_TransformableGeneratorPicker); \
	DECLARE_FUNCTION(execIsValid_GeneratorPicker); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorPickerFromClass); \
	DECLARE_FUNCTION(execMakeGeneratorPickerFromClass); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorPickerFromObject); \
	DECLARE_FUNCTION(execMakeGeneratorPickerFromObject); \
	DECLARE_FUNCTION(execMakeTransformableGeneratorInstance); \
	DECLARE_FUNCTION(execMakeGeneratorInstance);


VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorTools_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGeneratorTools(); \
	friend struct Z_Construct_UClass_UVoxelGeneratorTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGeneratorTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelGeneratorTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGeneratorTools)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGeneratorTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGeneratorTools(UVoxelGeneratorTools&&) = delete; \
	UVoxelGeneratorTools(const UVoxelGeneratorTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGeneratorTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGeneratorTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGeneratorTools) \
	NO_API virtual ~UVoxelGeneratorTools();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_22_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGeneratorTools;

// ********** End Class UVoxelGeneratorTools *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
