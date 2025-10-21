// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPaintMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPaintMaterial() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelPaintMaterial_MaterialCollectionChannel *********************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel;
class UScriptStruct* FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterial_MaterialCollectionChannel"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterial_MaterialCollectionChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial_MaterialCollectionChannel, Channel), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterial_MaterialCollectionChannel",
	Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::PropPointers),
	sizeof(FVoxelPaintMaterial_MaterialCollectionChannel),
	alignof(FVoxelPaintMaterial_MaterialCollectionChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterial_MaterialCollectionChannel ***********************

// ********** Begin Enum EVoxelPaintMaterialType ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelPaintMaterialType;
static UEnum* EVoxelPaintMaterialType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelPaintMaterialType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelPaintMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelPaintMaterialType"));
	}
	return Z_Registration_Info_UEnum_EVoxelPaintMaterialType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelPaintMaterialType>()
{
	return EVoxelPaintMaterialType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Color.Name", "EVoxelPaintMaterialType::Color" },
		{ "FiveWayBlend.Name", "EVoxelPaintMaterialType::FiveWayBlend" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "MultiIndex.Name", "EVoxelPaintMaterialType::MultiIndex" },
		{ "MultiIndexRaw.Name", "EVoxelPaintMaterialType::MultiIndexRaw" },
		{ "MultiIndexWetness.Name", "EVoxelPaintMaterialType::MultiIndexWetness" },
		{ "SingleIndex.Name", "EVoxelPaintMaterialType::SingleIndex" },
		{ "UV.Name", "EVoxelPaintMaterialType::UV" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelPaintMaterialType::Color", (int64)EVoxelPaintMaterialType::Color },
		{ "EVoxelPaintMaterialType::FiveWayBlend", (int64)EVoxelPaintMaterialType::FiveWayBlend },
		{ "EVoxelPaintMaterialType::SingleIndex", (int64)EVoxelPaintMaterialType::SingleIndex },
		{ "EVoxelPaintMaterialType::MultiIndex", (int64)EVoxelPaintMaterialType::MultiIndex },
		{ "EVoxelPaintMaterialType::MultiIndexWetness", (int64)EVoxelPaintMaterialType::MultiIndexWetness },
		{ "EVoxelPaintMaterialType::MultiIndexRaw", (int64)EVoxelPaintMaterialType::MultiIndexRaw },
		{ "EVoxelPaintMaterialType::UV", (int64)EVoxelPaintMaterialType::UV },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelPaintMaterialType",
	"EVoxelPaintMaterialType",
	Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType()
{
	if (!Z_Registration_Info_UEnum_EVoxelPaintMaterialType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelPaintMaterialType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelPaintMaterialType.InnerSingleton;
}
// ********** End Enum EVoxelPaintMaterialType *****************************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialColor ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor;
class UScriptStruct* FVoxelPaintMaterialColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialColor"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinearColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Set to true if you want to use the unreal color picker\n// Set to false if you want to set the bytes manually\n//\n// The unreal color picker will write linear colors to LinearColor, and sRGB colors to Color\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "Set to true if you want to use the unreal color picker\nSet to false if you want to set the bytes manually\n\nThe unreal color picker will write linear colors to LinearColor, and sRGB colors to Color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintR_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintG_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintB_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintA_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseLinearColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinearColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bPaintR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintR;
	static void NewProp_bPaintG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintG;
	static void NewProp_bPaintB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintB;
	static void NewProp_bPaintA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_SetBit(void* Obj)
{
	((FVoxelPaintMaterialColor*)Obj)->bUseLinearColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor = { "bUseLinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLinearColor_MetaData), NewProp_bUseLinearColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor = { "LinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialColor, LinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearColor_MetaData), NewProp_LinearColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialColor, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_SetBit(void* Obj)
{
	((FVoxelPaintMaterialColor*)Obj)->bPaintR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR = { "bPaintR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintR_MetaData), NewProp_bPaintR_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_SetBit(void* Obj)
{
	((FVoxelPaintMaterialColor*)Obj)->bPaintG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG = { "bPaintG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintG_MetaData), NewProp_bPaintG_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_SetBit(void* Obj)
{
	((FVoxelPaintMaterialColor*)Obj)->bPaintB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB = { "bPaintB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintB_MetaData), NewProp_bPaintB_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_SetBit(void* Obj)
{
	((FVoxelPaintMaterialColor*)Obj)->bPaintA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA = { "bPaintA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialColor), &Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintA_MetaData), NewProp_bPaintA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bUseLinearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_LinearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewProp_bPaintA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialColor",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialColor),
	alignof(FVoxelPaintMaterialColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialColor ********************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialFiveWayBlend ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend;
class UScriptStruct* FVoxelPaintMaterialFiveWayBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialFiveWayBlend"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "// Between 0 and 4. 1,2,3,4 => R,G,B,A. 0 => material displayed by default\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "Between 0 and 4. 1,2,3,4 => R,G,B,A. 0 => material displayed by default" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// These channels will have their strength locked, and will stay the same\n// Useful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "These channels will have their strength locked, and will stay the same\nUseful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFourWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will ignore Alpha\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "If true, will ignore Alpha" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockedChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedChannels;
	static void NewProp_bFourWayBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFourWayBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialFiveWayBlend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, Channel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, TargetValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetValue_MetaData), NewProp_TargetValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_Inner = { "LockedChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels = { "LockedChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialFiveWayBlend, LockedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedChannels_MetaData), NewProp_LockedChannels_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_SetBit(void* Obj)
{
	((FVoxelPaintMaterialFiveWayBlend*)Obj)->bFourWayBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend = { "bFourWayBlend", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialFiveWayBlend), &Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFourWayBlend_MetaData), NewProp_bFourWayBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_TargetValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_LockedChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewProp_bFourWayBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialFiveWayBlend",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialFiveWayBlend),
	alignof(FVoxelPaintMaterialFiveWayBlend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialFiveWayBlend *************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialSingleIndex ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex;
class UScriptStruct* FVoxelPaintMaterialSingleIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialSingleIndex"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialSingleIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialSingleIndex, Channel), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 4220184678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialSingleIndex",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialSingleIndex),
	alignof(FVoxelPaintMaterialSingleIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialSingleIndex **************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialMultiIndex *************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex;
class UScriptStruct* FVoxelPaintMaterialMultiIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndex"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// These channels will have their strength locked, and will stay the same\n// Useful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "ToolTip", "These channels will have their strength locked, and will stay the same\nUseful eg to paint _under_ rocks: lock the rock channel, and paint the channel you want to put under them" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedChannels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, Channel), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 4220184678
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, TargetValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetValue_MetaData), NewProp_TargetValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_Inner = { "LockedChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(0, nullptr) }; // 4220184678
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels = { "LockedChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndex, LockedChannels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedChannels_MetaData), NewProp_LockedChannels_MetaData) }; // 4220184678
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_TargetValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewProp_LockedChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialMultiIndex",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialMultiIndex),
	alignof(FVoxelPaintMaterialMultiIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialMultiIndex ***************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialMultiIndexWetness ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness;
class UScriptStruct* FVoxelPaintMaterialMultiIndexWetness::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndexWetness"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexWetness>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexWetness, TargetValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetValue_MetaData), NewProp_TargetValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewProp_TargetValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialMultiIndexWetness",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialMultiIndexWetness),
	alignof(FVoxelPaintMaterialMultiIndexWetness),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialMultiIndexWetness ********************************

// ********** Begin ScriptStruct FVoxelPaintMaterialMultiIndexRaw **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw;
class UScriptStruct* FVoxelPaintMaterialMultiIndexRaw::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialMultiIndexRaw"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel0_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength0_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel1_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength1_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel2_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength2_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel3_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength3_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Channel3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialMultiIndexRaw>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0 = { "Channel0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel0), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel0_MetaData), NewProp_Channel0_MetaData) }; // 4220184678
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0 = { "Strength0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength0_MetaData), NewProp_Strength0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1 = { "Channel1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel1), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel1_MetaData), NewProp_Channel1_MetaData) }; // 4220184678
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1 = { "Strength1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength1_MetaData), NewProp_Strength1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2 = { "Channel2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel2), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel2_MetaData), NewProp_Channel2_MetaData) }; // 4220184678
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2 = { "Strength2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength2_MetaData), NewProp_Strength2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3 = { "Channel3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Channel3), Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel3_MetaData), NewProp_Channel3_MetaData) }; // 4220184678
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3 = { "Strength3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialMultiIndexRaw, Strength3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength3_MetaData), NewProp_Strength3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Channel3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewProp_Strength3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialMultiIndexRaw",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialMultiIndexRaw),
	alignof(FVoxelPaintMaterialMultiIndexRaw),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialMultiIndexRaw ************************************

// ********** Begin ScriptStruct FVoxelPaintMaterialUV *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV;
class UScriptStruct* FVoxelPaintMaterialUV::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterialUV"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintU_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static void NewProp_bPaintU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintU;
	static void NewProp_bPaintV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterialUV>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialUV, Channel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterialUV, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_SetBit(void* Obj)
{
	((FVoxelPaintMaterialUV*)Obj)->bPaintU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU = { "bPaintU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialUV), &Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintU_MetaData), NewProp_bPaintU_MetaData) };
void Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_SetBit(void* Obj)
{
	((FVoxelPaintMaterialUV*)Obj)->bPaintV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV = { "bPaintV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterialUV), &Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintV_MetaData), NewProp_bPaintV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewProp_bPaintV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterialUV",
	Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::PropPointers),
	sizeof(FVoxelPaintMaterialUV),
	alignof(FVoxelPaintMaterialUV),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterialUV ***********************************************

// ********** Begin ScriptStruct FVoxelPaintMaterial ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial;
class UScriptStruct* FVoxelPaintMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPaintMaterial, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPaintMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigToRestrictTo_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialCollection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndex_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndexWetness_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndexRaw_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPaintMaterial.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bRestrictType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfigToRestrictTo_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfigToRestrictTo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterialCollection;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexWetness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexRaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FiveWayBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPaintMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_SetBit(void* Obj)
{
	((FVoxelPaintMaterial*)Obj)->bRestrictType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType = { "bRestrictType", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelPaintMaterial), &Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictType_MetaData), NewProp_bRestrictType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo = { "MaterialConfigToRestrictTo", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MaterialConfigToRestrictTo), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfigToRestrictTo_MetaData), NewProp_MaterialConfigToRestrictTo_MetaData) }; // 762384558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection = { "PreviewMaterialCollection", nullptr, (EPropertyFlags)0x0114000800002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, PreviewMaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterialCollection_MetaData), NewProp_PreviewMaterialCollection_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, Type), Z_Construct_UEnum_Voxel_EVoxelPaintMaterialType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4218271166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, Color), Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 3337385166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex = { "SingleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, SingleIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleIndex_MetaData), NewProp_SingleIndex_MetaData) }; // 2184783248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex = { "MultiIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiIndex_MetaData), NewProp_MultiIndex_MetaData) }; // 1803689205
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness = { "MultiIndexWetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndexWetness), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiIndexWetness_MetaData), NewProp_MultiIndexWetness_MetaData) }; // 2881764693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw = { "MultiIndexRaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, MultiIndexRaw), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiIndexRaw_MetaData), NewProp_MultiIndexRaw_MetaData) }; // 3372653697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, UV), Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) }; // 3161128940
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend = { "FiveWayBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPaintMaterial, FiveWayBlend), Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiveWayBlend_MetaData), NewProp_FiveWayBlend_MetaData) }; // 4104973239
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_bRestrictType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MaterialConfigToRestrictTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_PreviewMaterialCollection,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_SingleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexWetness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_MultiIndexRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewProp_FiveWayBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPaintMaterial",
	Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::PropPointers),
	sizeof(FVoxelPaintMaterial),
	alignof(FVoxelPaintMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPaintMaterial *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelPaintMaterialType_StaticEnum, TEXT("EVoxelPaintMaterialType"), &Z_Registration_Info_UEnum_EVoxelPaintMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4218271166U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelPaintMaterial_MaterialCollectionChannel::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel_Statics::NewStructOps, TEXT("VoxelPaintMaterial_MaterialCollectionChannel"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial_MaterialCollectionChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterial_MaterialCollectionChannel), 4220184678U) },
		{ FVoxelPaintMaterialColor::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialColor_Statics::NewStructOps, TEXT("VoxelPaintMaterialColor"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialColor), 3337385166U) },
		{ FVoxelPaintMaterialFiveWayBlend::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend_Statics::NewStructOps, TEXT("VoxelPaintMaterialFiveWayBlend"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialFiveWayBlend), 4104973239U) },
		{ FVoxelPaintMaterialSingleIndex::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex_Statics::NewStructOps, TEXT("VoxelPaintMaterialSingleIndex"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialSingleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialSingleIndex), 2184783248U) },
		{ FVoxelPaintMaterialMultiIndex::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex_Statics::NewStructOps, TEXT("VoxelPaintMaterialMultiIndex"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialMultiIndex), 1803689205U) },
		{ FVoxelPaintMaterialMultiIndexWetness::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness_Statics::NewStructOps, TEXT("VoxelPaintMaterialMultiIndexWetness"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialMultiIndexWetness), 2881764693U) },
		{ FVoxelPaintMaterialMultiIndexRaw::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw_Statics::NewStructOps, TEXT("VoxelPaintMaterialMultiIndexRaw"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialMultiIndexRaw), 3372653697U) },
		{ FVoxelPaintMaterialUV::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterialUV_Statics::NewStructOps, TEXT("VoxelPaintMaterialUV"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterialUV, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterialUV), 3161128940U) },
		{ FVoxelPaintMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelPaintMaterial_Statics::NewStructOps, TEXT("VoxelPaintMaterial"), &Z_Registration_Info_UScriptStruct_FVoxelPaintMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPaintMaterial), 2876954664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h__Script_Voxel_2648998209(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPaintMaterial_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
