// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMaterial() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelMaterialMask_BP *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelMaterialMask_BP;
static UEnum* EVoxelMaterialMask_BP_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMaterialMask_BP"));
	}
	return Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelMaterialMask_BP>()
{
	return EVoxelMaterialMask_BP_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "A.Name", "EVoxelMaterialMask_BP::A" },
		{ "B.Name", "EVoxelMaterialMask_BP::B" },
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "DisplayName", "Voxel Material Mask" },
		{ "G.Name", "EVoxelMaterialMask_BP::G" },
		{ "ModuleRelativePath", "Public/VoxelMaterial.h" },
		{ "R.Name", "EVoxelMaterialMask_BP::R" },
		{ "U0.Name", "EVoxelMaterialMask_BP::U0" },
		{ "U1.Name", "EVoxelMaterialMask_BP::U1" },
		{ "U2.Name", "EVoxelMaterialMask_BP::U2" },
		{ "U3.Name", "EVoxelMaterialMask_BP::U3" },
		{ "V0.Name", "EVoxelMaterialMask_BP::V0" },
		{ "V1.Name", "EVoxelMaterialMask_BP::V1" },
		{ "V2.Name", "EVoxelMaterialMask_BP::V2" },
		{ "V3.Name", "EVoxelMaterialMask_BP::V3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelMaterialMask_BP::R", (int64)EVoxelMaterialMask_BP::R },
		{ "EVoxelMaterialMask_BP::G", (int64)EVoxelMaterialMask_BP::G },
		{ "EVoxelMaterialMask_BP::B", (int64)EVoxelMaterialMask_BP::B },
		{ "EVoxelMaterialMask_BP::A", (int64)EVoxelMaterialMask_BP::A },
		{ "EVoxelMaterialMask_BP::U0", (int64)EVoxelMaterialMask_BP::U0 },
		{ "EVoxelMaterialMask_BP::V0", (int64)EVoxelMaterialMask_BP::V0 },
		{ "EVoxelMaterialMask_BP::U1", (int64)EVoxelMaterialMask_BP::U1 },
		{ "EVoxelMaterialMask_BP::V1", (int64)EVoxelMaterialMask_BP::V1 },
		{ "EVoxelMaterialMask_BP::U2", (int64)EVoxelMaterialMask_BP::U2 },
		{ "EVoxelMaterialMask_BP::V2", (int64)EVoxelMaterialMask_BP::V2 },
		{ "EVoxelMaterialMask_BP::U3", (int64)EVoxelMaterialMask_BP::U3 },
		{ "EVoxelMaterialMask_BP::V3", (int64)EVoxelMaterialMask_BP::V3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelMaterialMask_BP",
	"EVoxelMaterialMask_BP",
	Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP()
{
	if (!Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelMaterialMask_BP_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelMaterialMask_BP.InnerSingleton;
}
// ********** End Enum EVoxelMaterialMask_BP *******************************************************

// ********** Begin ScriptStruct FVoxelMaterial ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelMaterial;
class UScriptStruct* FVoxelMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterial, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMaterial.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO Make not compatible with BP and have a serialization-safe BP version of it\n" },
		{ "ModuleRelativePath", "Public/VoxelMaterial.h" },
		{ "ToolTip", "TODO Make not compatible with BP and have a serialization-safe BP version of it" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelMaterial",
	nullptr,
	0,
	sizeof(FVoxelMaterial),
	alignof(FVoxelMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMaterial.InnerSingleton;
}
// ********** End ScriptStruct FVoxelMaterial ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMaterial_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelMaterialMask_BP_StaticEnum, TEXT("EVoxelMaterialMask_BP"), &Z_Registration_Info_UEnum_EVoxelMaterialMask_BP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1003808087U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelMaterial_Statics::NewStructOps, TEXT("VoxelMaterial"), &Z_Registration_Info_UScriptStruct_FVoxelMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMaterial), 2790443078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMaterial_h__Script_Voxel_2152873753(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMaterial_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMaterial_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMaterial_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMaterial_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
