// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/VoxelProjectionTools.h"

#ifdef VOXEL_VoxelProjectionTools_generated_h
#error "VoxelProjectionTools.generated.h already included, missing '#pragma once' in VoxelProjectionTools.h"
#endif
#define VOXEL_VoxelProjectionTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AVoxelWorld;
class UObject;
enum class EVoxelProjectionShape : uint8;
struct FLatentActionInfo;
struct FLinearColor;
struct FVoxelLineTraceParameters;
struct FVoxelProjectionHit;
struct FVoxelSurfaceEditsVoxels;

// ********** Begin ScriptStruct FVoxelLineTraceParameters *****************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelLineTraceParameters;
// ********** End ScriptStruct FVoxelLineTraceParameters *******************************************

// ********** Begin ScriptStruct FVoxelProjectionHit ***********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelProjectionHit;
// ********** End ScriptStruct FVoxelProjectionHit *************************************************

// ********** Begin Class UVoxelProjectionTools ****************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSurfaceVoxelsFromHitsWithExactValues); \
	DECLARE_FUNCTION(execCreateSurfaceVoxelsFromHits); \
	DECLARE_FUNCTION(execGetHitsAveragePosition); \
	DECLARE_FUNCTION(execGetHitsAverageNormal); \
	DECLARE_FUNCTION(execGetHitsPositions); \
	DECLARE_FUNCTION(execFindProjectionVoxelsAsync); \
	DECLARE_FUNCTION(execFindProjectionVoxels); \
	DECLARE_FUNCTION(execMakeVoxelLineTraceParameters);


VOXEL_API UClass* Z_Construct_UClass_UVoxelProjectionTools_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelProjectionTools(); \
	friend struct Z_Construct_UClass_UVoxelProjectionTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelProjectionTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelProjectionTools, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelProjectionTools_NoRegister) \
	DECLARE_SERIALIZER(UVoxelProjectionTools)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelProjectionTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelProjectionTools(UVoxelProjectionTools&&) = delete; \
	UVoxelProjectionTools(const UVoxelProjectionTools&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelProjectionTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelProjectionTools); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelProjectionTools) \
	NO_API virtual ~UVoxelProjectionTools();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_68_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelProjectionTools;

// ********** End Class UVoxelProjectionTools ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h

// ********** Begin Enum EVoxelProjectionShape *****************************************************
#define FOREACH_ENUM_EVOXELPROJECTIONSHAPE(op) \
	op(EVoxelProjectionShape::Circle) \
	op(EVoxelProjectionShape::Square) 

enum class EVoxelProjectionShape : uint8;
template<> struct TIsUEnumClass<EVoxelProjectionShape> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelProjectionShape>();
// ********** End Enum EVoxelProjectionShape *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
