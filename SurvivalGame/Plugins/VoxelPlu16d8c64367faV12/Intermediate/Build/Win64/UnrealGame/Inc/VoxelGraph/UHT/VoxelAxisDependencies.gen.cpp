// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelAxisDependencies.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelAxisDependencies() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelFunctionAxisDependencies ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies;
static UEnum* EVoxelFunctionAxisDependencies_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelFunctionAxisDependencies"));
	}
	return Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelFunctionAxisDependencies>()
{
	return EVoxelFunctionAxisDependencies_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAxisDependencies.h" },
		{ "X.Name", "EVoxelFunctionAxisDependencies::X" },
		{ "XYWithCache.Comment", "// X was run\n" },
		{ "XYWithCache.Name", "EVoxelFunctionAxisDependencies::XYWithCache" },
		{ "XYWithCache.ToolTip", "X was run" },
		{ "XYWithoutCache.Comment", "// X wasn't run\n" },
		{ "XYWithoutCache.Name", "EVoxelFunctionAxisDependencies::XYWithoutCache" },
		{ "XYWithoutCache.ToolTip", "X wasn't run" },
		{ "XYZWithCache.Comment", "// XY was run\n" },
		{ "XYZWithCache.Name", "EVoxelFunctionAxisDependencies::XYZWithCache" },
		{ "XYZWithCache.ToolTip", "XY was run" },
		{ "XYZWithoutCache.Comment", "// XY wasn't run\n" },
		{ "XYZWithoutCache.Name", "EVoxelFunctionAxisDependencies::XYZWithoutCache" },
		{ "XYZWithoutCache.ToolTip", "XY wasn't run" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelFunctionAxisDependencies::X", (int64)EVoxelFunctionAxisDependencies::X },
		{ "EVoxelFunctionAxisDependencies::XYWithCache", (int64)EVoxelFunctionAxisDependencies::XYWithCache },
		{ "EVoxelFunctionAxisDependencies::XYWithoutCache", (int64)EVoxelFunctionAxisDependencies::XYWithoutCache },
		{ "EVoxelFunctionAxisDependencies::XYZWithCache", (int64)EVoxelFunctionAxisDependencies::XYZWithCache },
		{ "EVoxelFunctionAxisDependencies::XYZWithoutCache", (int64)EVoxelFunctionAxisDependencies::XYZWithoutCache },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelFunctionAxisDependencies",
	"EVoxelFunctionAxisDependencies",
	Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies()
{
	if (!Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies.InnerSingleton;
}
// ********** End Enum EVoxelFunctionAxisDependencies **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelAxisDependencies_h__Script_VoxelGraph_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelFunctionAxisDependencies_StaticEnum, TEXT("EVoxelFunctionAxisDependencies"), &Z_Registration_Info_UEnum_EVoxelFunctionAxisDependencies, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 487752515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelAxisDependencies_h__Script_VoxelGraph_99267425(TEXT("/Script/VoxelGraph"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelAxisDependencies_h__Script_VoxelGraph_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelAxisDependencies_h__Script_VoxelGraph_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
