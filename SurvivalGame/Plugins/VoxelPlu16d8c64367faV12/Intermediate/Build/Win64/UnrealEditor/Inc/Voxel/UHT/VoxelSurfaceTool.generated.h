// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Tools/VoxelSurfaceTool.h"

#ifdef VOXEL_VoxelSurfaceTool_generated_h
#error "VoxelSurfaceTool.generated.h already included, missing '#pragma once' in VoxelSurfaceTool.h"
#endif
#define VOXEL_VoxelSurfaceTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelSurfaceToolMask *********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelSurfaceToolMask;
// ********** End ScriptStruct FVoxelSurfaceToolMask ***********************************************

// ********** Begin Class UVoxelSurfaceTool ********************************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSurfaceTool(); \
	friend struct Z_Construct_UClass_UVoxelSurfaceTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSurfaceTool, UVoxelToolBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelSurfaceTool_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSurfaceTool)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSurfaceTool(UVoxelSurfaceTool&&) = delete; \
	UVoxelSurfaceTool(const UVoxelSurfaceTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSurfaceTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSurfaceTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelSurfaceTool) \
	NO_API virtual ~UVoxelSurfaceTool();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_68_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_71_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSurfaceTool;

// ********** End Class UVoxelSurfaceTool **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h

// ********** Begin Enum EVoxelSurfaceToolMaskType *************************************************
#define FOREACH_ENUM_EVOXELSURFACETOOLMASKTYPE(op) \
	op(EVoxelSurfaceToolMaskType::Texture) \
	op(EVoxelSurfaceToolMaskType::Generator) 

enum class EVoxelSurfaceToolMaskType : uint8;
template<> struct TIsUEnumClass<EVoxelSurfaceToolMaskType> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelSurfaceToolMaskType>();
// ********** End Enum EVoxelSurfaceToolMaskType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
