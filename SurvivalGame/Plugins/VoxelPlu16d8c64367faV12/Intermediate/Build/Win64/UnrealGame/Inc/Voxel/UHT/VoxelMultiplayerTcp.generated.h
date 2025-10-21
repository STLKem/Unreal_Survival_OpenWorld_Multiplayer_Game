// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelMultiplayer/VoxelMultiplayerTcp.h"

#ifdef VOXEL_VoxelMultiplayerTcp_generated_h
#error "VoxelMultiplayerTcp.generated.h already included, missing '#pragma once' in VoxelMultiplayerTcp.h"
#endif
#define VOXEL_VoxelMultiplayerTcp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVoxelMultiplayerTcpInterface ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartServer); \
	DECLARE_FUNCTION(execConnectToServer);


VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerTcpInterface_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelMultiplayerTcpInterface(); \
	friend struct Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerTcpInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelMultiplayerTcpInterface, UVoxelMultiplayerInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelMultiplayerTcpInterface_NoRegister) \
	DECLARE_SERIALIZER(UVoxelMultiplayerTcpInterface)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelMultiplayerTcpInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelMultiplayerTcpInterface(UVoxelMultiplayerTcpInterface&&) = delete; \
	UVoxelMultiplayerTcpInterface(const UVoxelMultiplayerTcpInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelMultiplayerTcpInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelMultiplayerTcpInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelMultiplayerTcpInterface) \
	NO_API virtual ~UVoxelMultiplayerTcpInterface();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_16_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelMultiplayerTcpInterface;

// ********** End Class UVoxelMultiplayerTcpInterface **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerTcp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
