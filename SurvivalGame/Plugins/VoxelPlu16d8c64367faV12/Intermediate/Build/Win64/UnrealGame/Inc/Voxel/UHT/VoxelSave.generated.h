// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelData/VoxelSave.h"

#ifdef VOXEL_VoxelSave_generated_h
#error "VoxelSave.generated.h already included, missing '#pragma once' in VoxelSave.h"
#endif
#define VOXEL_VoxelSave_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelUncompressedWorldSave ***************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelUncompressedWorldSave;
// ********** End ScriptStruct FVoxelUncompressedWorldSave *****************************************

// ********** Begin ScriptStruct FVoxelCompressedWorldSave *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_225_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics; \
	static class UScriptStruct* StaticStruct();


struct FVoxelCompressedWorldSave;
// ********** End ScriptStruct FVoxelCompressedWorldSave *******************************************

// ********** Begin Class UVoxelWorldSaveObject ****************************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_241_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelWorldSaveObject(); \
	friend struct Z_Construct_UClass_UVoxelWorldSaveObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelWorldSaveObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister) \
	DECLARE_SERIALIZER(UVoxelWorldSaveObject)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_241_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelWorldSaveObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelWorldSaveObject(UVoxelWorldSaveObject&&) = delete; \
	UVoxelWorldSaveObject(const UVoxelWorldSaveObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelWorldSaveObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelWorldSaveObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelWorldSaveObject) \
	NO_API virtual ~UVoxelWorldSaveObject();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_238_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_241_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_241_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h_241_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelWorldSaveObject;

// ********** End Class UVoxelWorldSaveObject ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelData_VoxelSave_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
