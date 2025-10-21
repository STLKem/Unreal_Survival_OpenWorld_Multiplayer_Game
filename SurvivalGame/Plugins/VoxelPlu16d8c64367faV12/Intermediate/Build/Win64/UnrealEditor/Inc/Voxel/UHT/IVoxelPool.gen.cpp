// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVoxelPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIVoxelPool() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelTaskType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelTaskType;
static UEnum* EVoxelTaskType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelTaskType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelTaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelTaskType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelTaskType"));
	}
	return Z_Registration_Info_UEnum_EVoxelTaskType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>()
{
	return EVoxelTaskType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AsyncEditFunctions.Comment", "// Async edit functions such as AddSphereAsync\n" },
		{ "AsyncEditFunctions.Name", "EVoxelTaskType::AsyncEditFunctions" },
		{ "AsyncEditFunctions.ToolTip", "Async edit functions such as AddSphereAsync" },
		{ "BlueprintType", "true" },
		{ "ChunksMeshing.Comment", "// Meshing of chunks that don't have collisions and are not visible\n" },
		{ "ChunksMeshing.Name", "EVoxelTaskType::ChunksMeshing" },
		{ "ChunksMeshing.ToolTip", "Meshing of chunks that don't have collisions and are not visible" },
		{ "CollisionCooking.Comment", "// PhysX collision cooking, once the meshing task is done\n" },
		{ "CollisionCooking.Name", "EVoxelTaskType::CollisionCooking" },
		{ "CollisionCooking.ToolTip", "PhysX collision cooking, once the meshing task is done" },
		{ "CollisionsChunksMeshing.Comment", "// Meshing of not visible chunks that have collisions\n" },
		{ "CollisionsChunksMeshing.Name", "EVoxelTaskType::CollisionsChunksMeshing" },
		{ "CollisionsChunksMeshing.ToolTip", "Meshing of not visible chunks that have collisions" },
		{ "FoliageBuild.Comment", "// Height spawners\n" },
		{ "FoliageBuild.Name", "EVoxelTaskType::FoliageBuild" },
		{ "FoliageBuild.ToolTip", "Height spawners" },
		{ "HISMBuild.Comment", "// Building of the instanced mesh components culling tree, used for spawners\n// The meshes are not updated until the build is done\n" },
		{ "HISMBuild.Name", "EVoxelTaskType::HISMBuild" },
		{ "HISMBuild.ToolTip", "Building of the instanced mesh components culling tree, used for spawners\nThe meshes are not updated until the build is done" },
		{ "MeshMerge.Comment", "// Mesh merge tasks are used after meshing to create the render buffers\n// Note: they are also used if bMergeChunks = false!\n" },
		{ "MeshMerge.Name", "EVoxelTaskType::MeshMerge" },
		{ "MeshMerge.ToolTip", "Mesh merge tasks are used after meshing to create the render buffers\nNote: they are also used if bMergeChunks = false!" },
		{ "ModuleRelativePath", "Public/IVoxelPool.h" },
		{ "RenderOctree.Comment", "// The render octree is used to determine the LODs to display\n// Should be done as fast as possible to start meshing tasks \n" },
		{ "RenderOctree.Name", "EVoxelTaskType::RenderOctree" },
		{ "RenderOctree.ToolTip", "The render octree is used to determine the LODs to display\nShould be done as fast as possible to start meshing tasks" },
		{ "VisibleChunksMeshing.Comment", "// Meshing of visible chunks that don't have collisions\n" },
		{ "VisibleChunksMeshing.Name", "EVoxelTaskType::VisibleChunksMeshing" },
		{ "VisibleChunksMeshing.ToolTip", "Meshing of visible chunks that don't have collisions" },
		{ "VisibleCollisionsChunksMeshing.Comment", "// Meshing of visible chunks that have collisions\n" },
		{ "VisibleCollisionsChunksMeshing.Name", "EVoxelTaskType::VisibleCollisionsChunksMeshing" },
		{ "VisibleCollisionsChunksMeshing.ToolTip", "Meshing of visible chunks that have collisions" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelTaskType::ChunksMeshing", (int64)EVoxelTaskType::ChunksMeshing },
		{ "EVoxelTaskType::CollisionsChunksMeshing", (int64)EVoxelTaskType::CollisionsChunksMeshing },
		{ "EVoxelTaskType::VisibleChunksMeshing", (int64)EVoxelTaskType::VisibleChunksMeshing },
		{ "EVoxelTaskType::VisibleCollisionsChunksMeshing", (int64)EVoxelTaskType::VisibleCollisionsChunksMeshing },
		{ "EVoxelTaskType::CollisionCooking", (int64)EVoxelTaskType::CollisionCooking },
		{ "EVoxelTaskType::FoliageBuild", (int64)EVoxelTaskType::FoliageBuild },
		{ "EVoxelTaskType::HISMBuild", (int64)EVoxelTaskType::HISMBuild },
		{ "EVoxelTaskType::AsyncEditFunctions", (int64)EVoxelTaskType::AsyncEditFunctions },
		{ "EVoxelTaskType::MeshMerge", (int64)EVoxelTaskType::MeshMerge },
		{ "EVoxelTaskType::RenderOctree", (int64)EVoxelTaskType::RenderOctree },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelTaskType",
	"EVoxelTaskType",
	Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType()
{
	if (!Z_Registration_Info_UEnum_EVoxelTaskType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelTaskType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelTaskType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelTaskType.InnerSingleton;
}
// ********** End Enum EVoxelTaskType **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_IVoxelPool_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelTaskType_StaticEnum, TEXT("EVoxelTaskType"), &Z_Registration_Info_UEnum_EVoxelTaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4243771042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_IVoxelPool_h__Script_Voxel_1509794069(TEXT("/Script/Voxel"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_IVoxelPool_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_IVoxelPool_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
