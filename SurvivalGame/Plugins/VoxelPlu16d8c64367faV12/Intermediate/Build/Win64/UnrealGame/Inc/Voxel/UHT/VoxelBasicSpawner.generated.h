// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelSpawners/VoxelBasicSpawner.h"

#ifdef VOXEL_VoxelBasicSpawner_generated_h
#error "VoxelBasicSpawner.generated.h already included, missing '#pragma once' in VoxelBasicSpawner.h"
#endif
#define VOXEL_VoxelBasicSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelBasicSpawnerScaleSettings ***********************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics; \
	VOXEL_API static class UScriptStruct* StaticStruct();


struct FVoxelBasicSpawnerScaleSettings;
// ********** End ScriptStruct FVoxelBasicSpawnerScaleSettings *************************************

// ********** Begin Class UVoxelBasicSpawner *******************************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelBasicSpawner(); \
	friend struct Z_Construct_UClass_UVoxelBasicSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelBasicSpawner, UVoxelSpawner, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelBasicSpawner_NoRegister) \
	DECLARE_SERIALIZER(UVoxelBasicSpawner)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelBasicSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelBasicSpawner(UVoxelBasicSpawner&&) = delete; \
	UVoxelBasicSpawner(const UVoxelBasicSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelBasicSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelBasicSpawner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelBasicSpawner) \
	NO_API virtual ~UVoxelBasicSpawner();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_75_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_78_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelBasicSpawner;

// ********** End Class UVoxelBasicSpawner *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h

// ********** Begin Enum EVoxelBasicSpawnerScaling *************************************************
#define FOREACH_ENUM_EVOXELBASICSPAWNERSCALING(op) \
	op(EVoxelBasicSpawnerScaling::Uniform) \
	op(EVoxelBasicSpawnerScaling::Free) \
	op(EVoxelBasicSpawnerScaling::LockXY) 

enum class EVoxelBasicSpawnerScaling : uint8;
template<> struct TIsUEnumClass<EVoxelBasicSpawnerScaling> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelBasicSpawnerScaling>();
// ********** End Enum EVoxelBasicSpawnerScaling ***************************************************

// ********** Begin Enum EVoxelBasicSpawnerRotation ************************************************
#define FOREACH_ENUM_EVOXELBASICSPAWNERROTATION(op) \
	op(EVoxelBasicSpawnerRotation::AlignToSurface) \
	op(EVoxelBasicSpawnerRotation::AlignToWorldUp) \
	op(EVoxelBasicSpawnerRotation::RandomAlign) 

enum class EVoxelBasicSpawnerRotation : uint8;
template<> struct TIsUEnumClass<EVoxelBasicSpawnerRotation> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelBasicSpawnerRotation>();
// ********** End Enum EVoxelBasicSpawnerRotation **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
