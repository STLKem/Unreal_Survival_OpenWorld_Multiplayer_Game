// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerConfig();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerConfig_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerDensity();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerOutputName();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelSpawnerOutputName *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName;
class UScriptStruct* FVoxelSpawnerOutputName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerOutputName"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerOutputName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerOutputName, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerOutputName",
	Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers),
	sizeof(FVoxelSpawnerOutputName),
	alignof(FVoxelSpawnerOutputName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerOutputName()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerOutputName *********************************************

// ********** Begin Enum EVoxelSpawnerDensityType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerDensityType;
static UEnum* EVoxelSpawnerDensityType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerDensityType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSpawnerDensityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerDensityType"));
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerDensityType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerDensityType>()
{
	return EVoxelSpawnerDensityType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.Comment", "// Use a constant as density\n" },
		{ "Constant.Name", "EVoxelSpawnerDensityType::Constant" },
		{ "Constant.ToolTip", "Use a constant as density" },
		{ "GeneratorOutput.Comment", "// Use a generator output\n" },
		{ "GeneratorOutput.Name", "EVoxelSpawnerDensityType::GeneratorOutput" },
		{ "GeneratorOutput.ToolTip", "Use a generator output" },
		{ "MaterialFiveWayBlend.Comment", "// Use a five way blend strength. Only for Ray Spawners.\n" },
		{ "MaterialFiveWayBlend.Name", "EVoxelSpawnerDensityType::MaterialFiveWayBlend" },
		{ "MaterialFiveWayBlend.ToolTip", "Use a five way blend strength. Only for Ray Spawners." },
		{ "MaterialRGBA.Comment", "// Use one of the material RGBA channels. Only for Ray Spawners.\n" },
		{ "MaterialRGBA.Name", "EVoxelSpawnerDensityType::MaterialRGBA" },
		{ "MaterialRGBA.ToolTip", "Use one of the material RGBA channels. Only for Ray Spawners." },
		{ "MaterialUVs.Comment", "// Use the material UV channels. Only for Ray Spawners.\n" },
		{ "MaterialUVs.Name", "EVoxelSpawnerDensityType::MaterialUVs" },
		{ "MaterialUVs.ToolTip", "Use the material UV channels. Only for Ray Spawners." },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "MultiIndex.Comment", "// Use a multi index channel. Only for Ray Spawners.\n" },
		{ "MultiIndex.Name", "EVoxelSpawnerDensityType::MultiIndex" },
		{ "MultiIndex.ToolTip", "Use a multi index channel. Only for Ray Spawners." },
		{ "SingleIndex.Comment", "// Use a single index channel. Only for Ray Spawners.\n" },
		{ "SingleIndex.Name", "EVoxelSpawnerDensityType::SingleIndex" },
		{ "SingleIndex.ToolTip", "Use a single index channel. Only for Ray Spawners." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSpawnerDensityType::Constant", (int64)EVoxelSpawnerDensityType::Constant },
		{ "EVoxelSpawnerDensityType::GeneratorOutput", (int64)EVoxelSpawnerDensityType::GeneratorOutput },
		{ "EVoxelSpawnerDensityType::MaterialRGBA", (int64)EVoxelSpawnerDensityType::MaterialRGBA },
		{ "EVoxelSpawnerDensityType::MaterialUVs", (int64)EVoxelSpawnerDensityType::MaterialUVs },
		{ "EVoxelSpawnerDensityType::MaterialFiveWayBlend", (int64)EVoxelSpawnerDensityType::MaterialFiveWayBlend },
		{ "EVoxelSpawnerDensityType::SingleIndex", (int64)EVoxelSpawnerDensityType::SingleIndex },
		{ "EVoxelSpawnerDensityType::MultiIndex", (int64)EVoxelSpawnerDensityType::MultiIndex },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSpawnerDensityType",
	"EVoxelSpawnerDensityType",
	Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerDensityType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerDensityType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerDensityType.InnerSingleton;
}
// ********** End Enum EVoxelSpawnerDensityType ****************************************************

// ********** Begin Enum EVoxelSpawnerUVAxis *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis;
static UEnum* EVoxelSpawnerUVAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerUVAxis"));
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerUVAxis>()
{
	return EVoxelSpawnerUVAxis_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "U.Name", "EVoxelSpawnerUVAxis::U" },
		{ "V.Name", "EVoxelSpawnerUVAxis::V" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSpawnerUVAxis::U", (int64)EVoxelSpawnerUVAxis::U },
		{ "EVoxelSpawnerUVAxis::V", (int64)EVoxelSpawnerUVAxis::V },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSpawnerUVAxis",
	"EVoxelSpawnerUVAxis",
	Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis.InnerSingleton;
}
// ********** End Enum EVoxelSpawnerUVAxis *********************************************************

// ********** Begin Enum EVoxelSpawnerDensityTransform *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform;
static UEnum* EVoxelSpawnerDensityTransform_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerDensityTransform"));
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerDensityTransform>()
{
	return EVoxelSpawnerDensityTransform_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Identity.DisplayName", "None" },
		{ "Identity.Name", "EVoxelSpawnerDensityTransform::Identity" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "OneMinus.DisplayName", "1 - X" },
		{ "OneMinus.Name", "EVoxelSpawnerDensityTransform::OneMinus" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSpawnerDensityTransform::Identity", (int64)EVoxelSpawnerDensityTransform::Identity },
		{ "EVoxelSpawnerDensityTransform::OneMinus", (int64)EVoxelSpawnerDensityTransform::OneMinus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSpawnerDensityTransform",
	"EVoxelSpawnerDensityTransform",
	Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform.InnerSingleton;
}
// ********** End Enum EVoxelSpawnerDensityTransform ***********************************************

// ********** Begin ScriptStruct FVoxelSpawnerDensity **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity;
class UScriptStruct* FVoxelSpawnerDensity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerDensity, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerDensity"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorOutputName_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Your generator needs to have a float output named like this\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Your generator needs to have a float output named like this" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RGBAChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisplayName", "RGBA Channel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "DisplayName", "UV Channel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVAxis_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisplayName", "UV Axis" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlendChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleIndexChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndexChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Transform to apply to the density\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Transform to apply to the density" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorOutputName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RGBAChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RGBAChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UVAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FiveWayBlendChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SingleIndexChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SingleIndexChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiIndexChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MultiIndexChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Transform_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerDensity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, Type), Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 735814858
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, Constant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName = { "GeneratorOutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, GeneratorOutputName), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorOutputName_MetaData), NewProp_GeneratorOutputName_MetaData) }; // 3220440304
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel = { "RGBAChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, RGBAChannel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RGBAChannel_MetaData), NewProp_RGBAChannel_MetaData) }; // 2902135298
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, UVChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannel_MetaData), NewProp_UVChannel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis = { "UVAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, UVAxis), Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVAxis_MetaData), NewProp_UVAxis_MetaData) }; // 1157182099
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel = { "FiveWayBlendChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, FiveWayBlendChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiveWayBlendChannel_MetaData), NewProp_FiveWayBlendChannel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_Inner = { "SingleIndexChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels = { "SingleIndexChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, SingleIndexChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleIndexChannels_MetaData), NewProp_SingleIndexChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_Inner = { "MultiIndexChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels = { "MultiIndexChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, MultiIndexChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiIndexChannels_MetaData), NewProp_MultiIndexChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, Transform), Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) }; // 1634984742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerDensity",
	Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers),
	sizeof(FVoxelSpawnerDensity),
	alignof(FVoxelSpawnerDensity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerDensity()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerDensity ************************************************

// ********** Begin Enum EVoxelSpawnerConfigElementRandomGenerator *********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator;
static UEnum* EVoxelSpawnerConfigElementRandomGenerator_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerConfigElementRandomGenerator"));
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerConfigElementRandomGenerator>()
{
	return EVoxelSpawnerConfigElementRandomGenerator_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "Halton.Comment", "// More uneven points than Sobol. Unreal uses Halton to spawn grass in the default Landscape system\n" },
		{ "Halton.Name", "EVoxelSpawnerConfigElementRandomGenerator::Halton" },
		{ "Halton.ToolTip", "More uneven points than Sobol. Unreal uses Halton to spawn grass in the default Landscape system" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "Sobol.Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n// Evenly distributed points\n" },
		{ "Sobol.Name", "EVoxelSpawnerConfigElementRandomGenerator::Sobol" },
		{ "Sobol.ToolTip", "/\n/\n/\n Evenly distributed points" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSpawnerConfigElementRandomGenerator::Sobol", (int64)EVoxelSpawnerConfigElementRandomGenerator::Sobol },
		{ "EVoxelSpawnerConfigElementRandomGenerator::Halton", (int64)EVoxelSpawnerConfigElementRandomGenerator::Halton },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSpawnerConfigElementRandomGenerator",
	"EVoxelSpawnerConfigElementRandomGenerator",
	Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator.InnerSingleton;
}
// ********** End Enum EVoxelSpawnerConfigElementRandomGenerator ***********************************

// ********** Begin Enum EVoxelSpawnerType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerType;
static UEnum* EVoxelSpawnerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSpawnerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerType"));
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerType>()
{
	return EVoxelSpawnerType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Height.Comment", "// These spawners uses a height output from the generator to spawn, allowing for large spawn distance.\n" },
		{ "Height.Name", "EVoxelSpawnerType::Height" },
		{ "Height.ToolTip", "These spawners uses a height output from the generator to spawn, allowing for large spawn distance." },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "Ray.Comment", "// Will line trace the voxel geometry to find spawning locations. Works with any kind of world/shapes\n" },
		{ "Ray.Name", "EVoxelSpawnerType::Ray" },
		{ "Ray.ToolTip", "Will line trace the voxel geometry to find spawning locations. Works with any kind of world/shapes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSpawnerType::Ray", (int64)EVoxelSpawnerType::Ray },
		{ "EVoxelSpawnerType::Height", (int64)EVoxelSpawnerType::Height },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSpawnerType",
	"EVoxelSpawnerType",
	Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerType()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerType.InnerSingleton;
}
// ********** End Enum EVoxelSpawnerType ***********************************************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigSpawner ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner;
class UScriptStruct* FVoxelSpawnerConfigSpawner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigSpawner"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_RayOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Final Density = Density * DensityMultiplier. Use this to eg paint an Erase Foliage channel.\n" },
		{ "DisplayName", "Density Multiplier" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Final Density = Density * DensityMultiplier. Use this to eg paint an Erase Foliage channel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightGraphOutputName_HeightOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The name of the custom graph output used to determine the height\n" },
		{ "DisplayName", "Height Graph Output Name" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "The name of the custom graph output used to determine the height" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_EditorOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Chunk size, affects the LOD if ray spawner\n" },
		{ "DisplayName", "Chunk Size" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Chunk size, affects the LOD if ray spawner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The LOD of the mesh to trace rays against\n// High LOD = faster but less precise\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "The LOD of the mesh to trace rays against\nHigh LOD = faster but less precise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Generation distance in voxels\n" },
		{ "DisplayName", "Generation Distance" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Generation distance in voxels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInChunks_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteGenerationDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Whether to save the instances that are removed\n// If false will also respawn instances if they are out of range\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Whether to save the instances that are removed\nIf false will also respawn instances if they are out of range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If false, instances that are out of range will be despawned. If true, they will stay forever.\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "If false, instances that are out of range will be despawned. If true, they will stay forever." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Seed for this spawner. Note that changing this is not required to get unique results per spawner.\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Seed for this spawner. Note that changing this is not required to get unique results per spawner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Controls the spawning pattern\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Controls the spawning pattern" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Unique ID used when saving spawners to disk\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Unique ID used when saving spawners to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeDensityFirst_HeightOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Controls whether to compute the density or the height first. Try both and see which is faster\n// If false, the following are true when querying the density:\n// - for flat worlds: Z = Height\n// - for sphere worlds: Length(X, Y, Z) = Height\n" },
		{ "DisplayName", "Compute Density First" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Controls whether to compute the density or the height first. Try both and see which is faster\nIf false, the following are true when querying the density:\n- for flat worlds: Z = Height\n- for sphere worlds: Length(X, Y, Z) = Height" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckIfFloating_HeightOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will not spawn height instances if they are now floating due to user edits or additional 3D noise in the generator\n" },
		{ "DisplayName", "Check If Floating" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "If true, will not spawn height instances if they are now floating due to user edits or additional 3D noise in the generator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckIfCovered_HeightOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will not spawn height instances if they are now covered due to user edits or additional 3D noise in the generator\n" },
		{ "DisplayName", "Check If Covered" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "If true, will not spawn height instances if they are now covered due to user edits or additional 3D noise in the generator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnerType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Density;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DensityMultiplier_RayOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightGraphOutputName_HeightOnly;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChunkSize_EditorOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInVoxels_EditorOnly;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationDistanceInChunks;
	static void NewProp_bInfiniteGenerationDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteGenerationDistance;
	static void NewProp_bSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
	static void NewProp_bDoNotDespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static void NewProp_bComputeDensityFirst_HeightOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeDensityFirst_HeightOnly;
	static void NewProp_bCheckIfFloating_HeightOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckIfFloating_HeightOnly;
	static void NewProp_bCheckIfCovered_HeightOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckIfCovered_HeightOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigSpawner>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType = { "SpawnerType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, SpawnerType), Z_Construct_UEnum_Voxel_EVoxelSpawnerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnerType_MetaData), NewProp_SpawnerType_MetaData) }; // 1284740794
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Density), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) }; // 3816934278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly = { "DensityMultiplier_RayOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, DensityMultiplier_RayOnly), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityMultiplier_RayOnly_MetaData), NewProp_DensityMultiplier_RayOnly_MetaData) }; // 3816934278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly = { "HeightGraphOutputName_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, HeightGraphOutputName_HeightOnly), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightGraphOutputName_HeightOnly_MetaData), NewProp_HeightGraphOutputName_HeightOnly_MetaData) }; // 3220440304
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly = { "ChunkSize_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, ChunkSize_EditorOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_EditorOnly_MetaData), NewProp_ChunkSize_EditorOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly = { "GenerationDistanceInVoxels_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, GenerationDistanceInVoxels_EditorOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData), NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, GenerationDistanceInChunks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDistanceInChunks_MetaData), NewProp_GenerationDistanceInChunks_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bInfiniteGenerationDistance_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigSpawner*)Obj)->bInfiniteGenerationDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bInfiniteGenerationDistance = { "bInfiniteGenerationDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bInfiniteGenerationDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInfiniteGenerationDistance_MetaData), NewProp_bInfiniteGenerationDistance_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigSpawner*)Obj)->bSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSave_MetaData), NewProp_bSave_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigSpawner*)Obj)->bDoNotDespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotDespawn_MetaData), NewProp_bDoNotDespawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomGenerator_MetaData), NewProp_RandomGenerator_MetaData) }; // 3883557544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigSpawner*)Obj)->bComputeDensityFirst_HeightOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly = { "bComputeDensityFirst_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeDensityFirst_HeightOnly_MetaData), NewProp_bComputeDensityFirst_HeightOnly_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfFloating_HeightOnly_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigSpawner*)Obj)->bCheckIfFloating_HeightOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfFloating_HeightOnly = { "bCheckIfFloating_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfFloating_HeightOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckIfFloating_HeightOnly_MetaData), NewProp_bCheckIfFloating_HeightOnly_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfCovered_HeightOnly_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigSpawner*)Obj)->bCheckIfCovered_HeightOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfCovered_HeightOnly = { "bCheckIfCovered_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfCovered_HeightOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckIfCovered_HeightOnly_MetaData), NewProp_bCheckIfCovered_HeightOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bInfiniteGenerationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfFloating_HeightOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bCheckIfCovered_HeightOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigSpawner",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigSpawner),
	alignof(FVoxelSpawnerConfigSpawner),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigSpawner ******************************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigElementAdvanced_Height *************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height;
class UScriptStruct* FVoxelSpawnerConfigElementAdvanced_Height::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElementAdvanced_Height"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeDensityFirst_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
	static void NewProp_bDoNotDespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SeedName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
	static void NewProp_bComputeDensityFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeDensityFirst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElementAdvanced_Height>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigElementAdvanced_Height*)Obj)->bSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSave_MetaData), NewProp_bSave_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigElementAdvanced_Height*)Obj)->bDoNotDespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotDespawn_MetaData), NewProp_bDoNotDespawn_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, SeedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedName_MetaData), NewProp_SeedName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed = { "DefaultSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, DefaultSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSeed_MetaData), NewProp_DefaultSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomGenerator_MetaData), NewProp_RandomGenerator_MetaData) }; // 3883557544
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigElementAdvanced_Height*)Obj)->bComputeDensityFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst = { "bComputeDensityFirst", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeDensityFirst_MetaData), NewProp_bComputeDensityFirst_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigElementAdvanced_Height",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigElementAdvanced_Height),
	alignof(FVoxelSpawnerConfigElementAdvanced_Height),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigElementAdvanced_Height ***************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigElementAdvanced_Ray ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray;
class UScriptStruct* FVoxelSpawnerConfigElementAdvanced_Ray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElementAdvanced_Ray"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSave;
	static void NewProp_bDoNotDespawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SeedName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElementAdvanced_Ray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigElementAdvanced_Ray*)Obj)->bSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSave_MetaData), NewProp_bSave_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigElementAdvanced_Ray*)Obj)->bDoNotDespawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotDespawn_MetaData), NewProp_bDoNotDespawn_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, SeedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedName_MetaData), NewProp_SeedName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed = { "DefaultSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, DefaultSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSeed_MetaData), NewProp_DefaultSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomGenerator_MetaData), NewProp_RandomGenerator_MetaData) }; // 3883557544
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigElementAdvanced_Ray",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigElementAdvanced_Ray),
	alignof(FVoxelSpawnerConfigElementAdvanced_Ray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigElementAdvanced_Ray ******************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigElement_Height *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height;
class UScriptStruct* FVoxelSpawnerConfigElement_Height::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElement_Height"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityGraphOutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Density;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DensityGraphOutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElement_Height>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, Density), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) }; // 3816934278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName = { "DensityGraphOutputName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, DensityGraphOutputName_DEPRECATED), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityGraphOutputName_MetaData), NewProp_DensityGraphOutputName_MetaData) }; // 3220440304
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, Advanced), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Advanced_MetaData), NewProp_Advanced_MetaData) }; // 70207431
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigElement_Height",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigElement_Height),
	alignof(FVoxelSpawnerConfigElement_Height),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigElement_Height ***********************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigElement_Ray ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray;
class UScriptStruct* FVoxelSpawnerConfigElement_Ray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElement_Ray"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityGraphOutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Density;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DensityMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DensityGraphOutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElement_Ray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, Density), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) }; // 3816934278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, DensityMultiplier), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityMultiplier_MetaData), NewProp_DensityMultiplier_MetaData) }; // 3816934278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName = { "DensityGraphOutputName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, DensityGraphOutputName_DEPRECATED), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityGraphOutputName_MetaData), NewProp_DensityGraphOutputName_MetaData) }; // 3220440304
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, Advanced), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Advanced_MetaData), NewProp_Advanced_MetaData) }; // 2687185125
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigElement_Ray",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigElement_Ray),
	alignof(FVoxelSpawnerConfigElement_Ray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigElement_Ray **************************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigHeightGroup ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup;
class UScriptStruct* FVoxelSpawnerConfigHeightGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigHeightGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightGraphOutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightGraphOutputName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInChunks;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInVoxels_EditorOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigHeightGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName = { "HeightGraphOutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, HeightGraphOutputName), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightGraphOutputName_MetaData), NewProp_HeightGraphOutputName_MetaData) }; // 3220440304
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, ChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_MetaData), NewProp_ChunkSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, GenerationDistanceInChunks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDistanceInChunks_MetaData), NewProp_GenerationDistanceInChunks_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly = { "GenerationDistanceInVoxels_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, GenerationDistanceInVoxels_EditorOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData), NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height, METADATA_PARAMS(0, nullptr) }; // 1673467368
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawners_MetaData), NewProp_Spawners_MetaData) }; // 1673467368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigHeightGroup",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigHeightGroup),
	alignof(FVoxelSpawnerConfigHeightGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigHeightGroup **************************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigRayGroup ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup;
class UScriptStruct* FVoxelSpawnerConfigRayGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigRayGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_EditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LOD;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChunkSize_EditorOnly;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInChunks;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInVoxels_EditorOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigRayGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, LOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly = { "ChunkSize_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, ChunkSize_EditorOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_EditorOnly_MetaData), NewProp_ChunkSize_EditorOnly_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, GenerationDistanceInChunks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDistanceInChunks_MetaData), NewProp_GenerationDistanceInChunks_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly = { "GenerationDistanceInVoxels_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, GenerationDistanceInVoxels_EditorOnly), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData), NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray, METADATA_PARAMS(0, nullptr) }; // 168803890
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawners_MetaData), NewProp_Spawners_MetaData) }; // 168803890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigRayGroup",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigRayGroup),
	alignof(FVoxelSpawnerConfigRayGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigRayGroup *****************************************

// ********** Begin Enum EVoxelSpawnerConfigRayWorldType *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType;
static UEnum* EVoxelSpawnerConfigRayWorldType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerConfigRayWorldType"));
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerConfigRayWorldType>()
{
	return EVoxelSpawnerConfigRayWorldType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "Flat.Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "Flat.Name", "EVoxelSpawnerConfigRayWorldType::Flat" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "Sphere.Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "Sphere.Name", "EVoxelSpawnerConfigRayWorldType::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSpawnerConfigRayWorldType::Flat", (int64)EVoxelSpawnerConfigRayWorldType::Flat },
		{ "EVoxelSpawnerConfigRayWorldType::Sphere", (int64)EVoxelSpawnerConfigRayWorldType::Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSpawnerConfigRayWorldType",
	"EVoxelSpawnerConfigRayWorldType",
	Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType()
{
	if (!Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType.InnerSingleton;
}
// ********** End Enum EVoxelSpawnerConfigRayWorldType *********************************************

// ********** Begin ScriptStruct FVoxelSpawnerConfigFiveWayBlendSetup ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup;
class UScriptStruct* FVoxelSpawnerConfigFiveWayBlendSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigFiveWayBlendSetup"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFourWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will ignore Alpha\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "If true, will ignore Alpha" },
	};
#endif // WITH_METADATA
	static void NewProp_bFourWayBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFourWayBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigFiveWayBlendSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_SetBit(void* Obj)
{
	((FVoxelSpawnerConfigFiveWayBlendSetup*)Obj)->bFourWayBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend = { "bFourWayBlend", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigFiveWayBlendSetup), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFourWayBlend_MetaData), NewProp_bFourWayBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerConfigFiveWayBlendSetup",
	Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers),
	sizeof(FVoxelSpawnerConfigFiveWayBlendSetup),
	alignof(FVoxelSpawnerConfigFiveWayBlendSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerConfigFiveWayBlendSetup ********************************

// ********** Begin Class UVoxelSpawnerConfig ******************************************************
void UVoxelSpawnerConfig::StaticRegisterNativesUVoxelSpawnerConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawnerConfig;
UClass* UVoxelSpawnerConfig::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawnerConfig;
	if (!Z_Registration_Info_UClass_UVoxelSpawnerConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerConfig"),
			Z_Registration_Info_UClass_UVoxelSpawnerConfig.InnerSingleton,
			StaticRegisterNativesUVoxelSpawnerConfig,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawnerConfig_NoRegister()
{
	return UVoxelSpawnerConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawnerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorOutputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlendSetup_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[] = {
		{ "Category", "Spawners" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaySpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightSpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorOutputs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FiveWayBlendSetup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawners;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RaySpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RaySpawners;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightSpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightSpawners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, WorldType), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldType_MetaData), NewProp_WorldType_MetaData) }; // 3191300955
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_GeneratorOutputs = { "GeneratorOutputs", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, GeneratorOutputs), Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorOutputs_MetaData), NewProp_GeneratorOutputs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup = { "FiveWayBlendSetup", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, FiveWayBlendSetup), Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiveWayBlendSetup_MetaData), NewProp_FiveWayBlendSetup_MetaData) }; // 111293292
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner, METADATA_PARAMS(0, nullptr) }; // 843798438
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawners_MetaData), NewProp_Spawners_MetaData) }; // 843798438
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_Inner = { "RaySpawners", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup, METADATA_PARAMS(0, nullptr) }; // 3185958110
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners = { "RaySpawners", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, RaySpawners_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaySpawners_MetaData), NewProp_RaySpawners_MetaData) }; // 3185958110
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_Inner = { "HeightSpawners", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup, METADATA_PARAMS(0, nullptr) }; // 1761291199
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners = { "HeightSpawners", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, HeightSpawners_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightSpawners_MetaData), NewProp_HeightSpawners_MetaData) }; // 1761291199
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_GeneratorOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSpawnerConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::ClassParams = {
	&UVoxelSpawnerConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawnerConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawnerConfig()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawnerConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerConfig.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerConfig.OuterSingleton;
}
UVoxelSpawnerConfig::UVoxelSpawnerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerConfig);
UVoxelSpawnerConfig::~UVoxelSpawnerConfig() {}
// ********** End Class UVoxelSpawnerConfig ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelSpawnerDensityType_StaticEnum, TEXT("EVoxelSpawnerDensityType"), &Z_Registration_Info_UEnum_EVoxelSpawnerDensityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 735814858U) },
		{ EVoxelSpawnerUVAxis_StaticEnum, TEXT("EVoxelSpawnerUVAxis"), &Z_Registration_Info_UEnum_EVoxelSpawnerUVAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1157182099U) },
		{ EVoxelSpawnerDensityTransform_StaticEnum, TEXT("EVoxelSpawnerDensityTransform"), &Z_Registration_Info_UEnum_EVoxelSpawnerDensityTransform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1634984742U) },
		{ EVoxelSpawnerConfigElementRandomGenerator_StaticEnum, TEXT("EVoxelSpawnerConfigElementRandomGenerator"), &Z_Registration_Info_UEnum_EVoxelSpawnerConfigElementRandomGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3883557544U) },
		{ EVoxelSpawnerType_StaticEnum, TEXT("EVoxelSpawnerType"), &Z_Registration_Info_UEnum_EVoxelSpawnerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1284740794U) },
		{ EVoxelSpawnerConfigRayWorldType_StaticEnum, TEXT("EVoxelSpawnerConfigRayWorldType"), &Z_Registration_Info_UEnum_EVoxelSpawnerConfigRayWorldType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3191300955U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelSpawnerOutputName::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewStructOps, TEXT("VoxelSpawnerOutputName"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerOutputName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerOutputName), 3220440304U) },
		{ FVoxelSpawnerDensity::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewStructOps, TEXT("VoxelSpawnerDensity"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerDensity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerDensity), 3816934278U) },
		{ FVoxelSpawnerConfigSpawner::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewStructOps, TEXT("VoxelSpawnerConfigSpawner"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigSpawner), 843798438U) },
		{ FVoxelSpawnerConfigElementAdvanced_Height::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewStructOps, TEXT("VoxelSpawnerConfigElementAdvanced_Height"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigElementAdvanced_Height), 70207431U) },
		{ FVoxelSpawnerConfigElementAdvanced_Ray::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewStructOps, TEXT("VoxelSpawnerConfigElementAdvanced_Ray"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), 2687185125U) },
		{ FVoxelSpawnerConfigElement_Height::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewStructOps, TEXT("VoxelSpawnerConfigElement_Height"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Height, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigElement_Height), 1673467368U) },
		{ FVoxelSpawnerConfigElement_Ray::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewStructOps, TEXT("VoxelSpawnerConfigElement_Ray"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigElement_Ray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigElement_Ray), 168803890U) },
		{ FVoxelSpawnerConfigHeightGroup::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewStructOps, TEXT("VoxelSpawnerConfigHeightGroup"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigHeightGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigHeightGroup), 1761291199U) },
		{ FVoxelSpawnerConfigRayGroup::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewStructOps, TEXT("VoxelSpawnerConfigRayGroup"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigRayGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigRayGroup), 3185958110U) },
		{ FVoxelSpawnerConfigFiveWayBlendSetup::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewStructOps, TEXT("VoxelSpawnerConfigFiveWayBlendSetup"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerConfigFiveWayBlendSetup), 111293292U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawnerConfig, UVoxelSpawnerConfig::StaticClass, TEXT("UVoxelSpawnerConfig"), &Z_Registration_Info_UClass_UVoxelSpawnerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerConfig), 1189739423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_141152957(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerConfig_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
