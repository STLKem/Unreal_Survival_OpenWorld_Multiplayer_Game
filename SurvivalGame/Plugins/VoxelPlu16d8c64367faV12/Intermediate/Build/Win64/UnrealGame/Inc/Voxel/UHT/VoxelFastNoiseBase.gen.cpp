// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/FastNoise/VoxelFastNoiseBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelFastNoiseBase() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularReturnType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelNoiseInterpolation **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNoiseInterpolation;
static UEnum* EVoxelNoiseInterpolation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNoiseInterpolation"));
	}
	return Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseInterpolation>()
{
	return EVoxelNoiseInterpolation_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hermite.Name", "EVoxelNoiseInterpolation::Hermite" },
		{ "Linear.Name", "EVoxelNoiseInterpolation::Linear" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
		{ "Quintic.Name", "EVoxelNoiseInterpolation::Quintic" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelNoiseInterpolation::Linear", (int64)EVoxelNoiseInterpolation::Linear },
		{ "EVoxelNoiseInterpolation::Hermite", (int64)EVoxelNoiseInterpolation::Hermite },
		{ "EVoxelNoiseInterpolation::Quintic", (int64)EVoxelNoiseInterpolation::Quintic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelNoiseInterpolation",
	"EVoxelNoiseInterpolation",
	Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation()
{
	if (!Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelNoiseInterpolation.InnerSingleton;
}
// ********** End Enum EVoxelNoiseInterpolation ****************************************************

// ********** Begin Enum EVoxelNoiseFractalType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNoiseFractalType;
static UEnum* EVoxelNoiseFractalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelNoiseFractalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelNoiseFractalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelNoiseFractalType"));
	}
	return Z_Registration_Info_UEnum_EVoxelNoiseFractalType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelNoiseFractalType>()
{
	return EVoxelNoiseFractalType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Billow.Name", "EVoxelNoiseFractalType::Billow" },
		{ "BlueprintType", "true" },
		{ "FBM.Name", "EVoxelNoiseFractalType::FBM" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
		{ "RigidMulti.Name", "EVoxelNoiseFractalType::RigidMulti" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelNoiseFractalType::FBM", (int64)EVoxelNoiseFractalType::FBM },
		{ "EVoxelNoiseFractalType::Billow", (int64)EVoxelNoiseFractalType::Billow },
		{ "EVoxelNoiseFractalType::RigidMulti", (int64)EVoxelNoiseFractalType::RigidMulti },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelNoiseFractalType",
	"EVoxelNoiseFractalType",
	Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType()
{
	if (!Z_Registration_Info_UEnum_EVoxelNoiseFractalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNoiseFractalType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelNoiseFractalType.InnerSingleton;
}
// ********** End Enum EVoxelNoiseFractalType ******************************************************

// ********** Begin Enum EVoxelCellularDistanceFunction ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction;
static UEnum* EVoxelCellularDistanceFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCellularDistanceFunction"));
	}
	return Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularDistanceFunction>()
{
	return EVoxelCellularDistanceFunction_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Euclidean.Name", "EVoxelCellularDistanceFunction::Euclidean" },
		{ "Manhattan.Name", "EVoxelCellularDistanceFunction::Manhattan" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
		{ "Natural.Name", "EVoxelCellularDistanceFunction::Natural" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelCellularDistanceFunction::Euclidean", (int64)EVoxelCellularDistanceFunction::Euclidean },
		{ "EVoxelCellularDistanceFunction::Manhattan", (int64)EVoxelCellularDistanceFunction::Manhattan },
		{ "EVoxelCellularDistanceFunction::Natural", (int64)EVoxelCellularDistanceFunction::Natural },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelCellularDistanceFunction",
	"EVoxelCellularDistanceFunction",
	Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction()
{
	if (!Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelCellularDistanceFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction.InnerSingleton;
}
// ********** End Enum EVoxelCellularDistanceFunction **********************************************

// ********** Begin Enum EVoxelCellularReturnType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelCellularReturnType;
static UEnum* EVoxelCellularReturnType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelCellularReturnType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelCellularReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelCellularReturnType"));
	}
	return Z_Registration_Info_UEnum_EVoxelCellularReturnType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelCellularReturnType>()
{
	return EVoxelCellularReturnType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CellValue.Name", "EVoxelCellularReturnType::CellValue" },
		{ "Distance.Name", "EVoxelCellularReturnType::Distance" },
		{ "Distance2.Name", "EVoxelCellularReturnType::Distance2" },
		{ "Distance2Add.Name", "EVoxelCellularReturnType::Distance2Add" },
		{ "Distance2Div.Name", "EVoxelCellularReturnType::Distance2Div" },
		{ "Distance2Mul.Name", "EVoxelCellularReturnType::Distance2Mul" },
		{ "Distance2Sub.Name", "EVoxelCellularReturnType::Distance2Sub" },
		{ "ModuleRelativePath", "Public/FastNoise/VoxelFastNoiseBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelCellularReturnType::CellValue", (int64)EVoxelCellularReturnType::CellValue },
		{ "EVoxelCellularReturnType::Distance", (int64)EVoxelCellularReturnType::Distance },
		{ "EVoxelCellularReturnType::Distance2", (int64)EVoxelCellularReturnType::Distance2 },
		{ "EVoxelCellularReturnType::Distance2Add", (int64)EVoxelCellularReturnType::Distance2Add },
		{ "EVoxelCellularReturnType::Distance2Sub", (int64)EVoxelCellularReturnType::Distance2Sub },
		{ "EVoxelCellularReturnType::Distance2Mul", (int64)EVoxelCellularReturnType::Distance2Mul },
		{ "EVoxelCellularReturnType::Distance2Div", (int64)EVoxelCellularReturnType::Distance2Div },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelCellularReturnType",
	"EVoxelCellularReturnType",
	Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelCellularReturnType()
{
	if (!Z_Registration_Info_UEnum_EVoxelCellularReturnType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelCellularReturnType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelCellularReturnType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelCellularReturnType.InnerSingleton;
}
// ********** End Enum EVoxelCellularReturnType ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelNoiseInterpolation_StaticEnum, TEXT("EVoxelNoiseInterpolation"), &Z_Registration_Info_UEnum_EVoxelNoiseInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1671449615U) },
		{ EVoxelNoiseFractalType_StaticEnum, TEXT("EVoxelNoiseFractalType"), &Z_Registration_Info_UEnum_EVoxelNoiseFractalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 71121472U) },
		{ EVoxelCellularDistanceFunction_StaticEnum, TEXT("EVoxelCellularDistanceFunction"), &Z_Registration_Info_UEnum_EVoxelCellularDistanceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3491136234U) },
		{ EVoxelCellularReturnType_StaticEnum, TEXT("EVoxelCellularReturnType"), &Z_Registration_Info_UEnum_EVoxelCellularReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 633471598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h__Script_Voxel_4014500430(TEXT("/Script/Voxel"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_FastNoise_VoxelFastNoiseBase_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
