// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelTools/Tools/VoxelToolBase.h"

#ifdef VOXEL_VoxelToolBase_generated_h
#error "VoxelToolBase.generated.h already included, missing '#pragma once' in VoxelToolBase.h"
#endif
#define VOXEL_VoxelToolBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMesh;
struct FVoxelIntBox;
struct FVoxelIntBoxWithValidity;
struct FVoxelToolBaseConfig;
struct FVoxelToolTickData;

// ********** Begin ScriptStruct FVoxelToolBaseConfig **********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelToolBaseConfig;
// ********** End ScriptStruct FVoxelToolBaseConfig ************************************************

// ********** Begin Class UVoxelToolBase ***********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateToolMesh); \
	DECLARE_FUNCTION(execSetToolOverlayBounds); \
	DECLARE_FUNCTION(execGetValueAfterAxisInput); \
	DECLARE_FUNCTION(execGetBoundsToCache); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execGetMouseMovementSize); \
	DECLARE_FUNCTION(execGetLastFrameTickData); \
	DECLARE_FUNCTION(execGetTickData); \
	DECLARE_FUNCTION(execLastFrameCanEdit); \
	DECLARE_FUNCTION(execCanEdit); \
	DECLARE_FUNCTION(execGetToolDirection); \
	DECLARE_FUNCTION(execGetToolNormal); \
	DECLARE_FUNCTION(execGetToolPreviewPosition); \
	DECLARE_FUNCTION(execGetToolPosition); \
	DECLARE_FUNCTION(execK2_DoEdit); \
	DECLARE_FUNCTION(execK2_UpdateRender); \
	DECLARE_FUNCTION(execK2_GetToolConfig);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_CALLBACK_WRAPPERS
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelToolBase(); \
	friend struct Z_Construct_UClass_UVoxelToolBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelToolBase, UVoxelTool, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelToolBase_NoRegister) \
	DECLARE_SERIALIZER(UVoxelToolBase)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelToolBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelToolBase(UVoxelToolBase&&) = delete; \
	UVoxelToolBase(const UVoxelToolBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelToolBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelToolBase) \
	NO_API virtual ~UVoxelToolBase();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_90_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelToolBase;

// ********** End Class UVoxelToolBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h

// ********** Begin Enum EVoxelToolAlignment *******************************************************
#define FOREACH_ENUM_EVOXELTOOLALIGNMENT(op) \
	op(EVoxelToolAlignment::Surface) \
	op(EVoxelToolAlignment::View) \
	op(EVoxelToolAlignment::Ground) \
	op(EVoxelToolAlignment::Up) 

enum class EVoxelToolAlignment : uint8;
template<> struct TIsUEnumClass<EVoxelToolAlignment> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolAlignment>();
// ********** End Enum EVoxelToolAlignment *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
