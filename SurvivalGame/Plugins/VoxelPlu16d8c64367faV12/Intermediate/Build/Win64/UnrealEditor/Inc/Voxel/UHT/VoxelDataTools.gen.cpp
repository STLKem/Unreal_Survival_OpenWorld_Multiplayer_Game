// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelDataTools.h"
#include "Engine/LatentActionManager.h"
#include "VoxelData/VoxelSave.h"
#include "VoxelIntBox.h"
#include "VoxelMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDataTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDataTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDataTools_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelValueMaterial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelValueMaterial ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelValueMaterial;
class UScriptStruct* FVoxelValueMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelValueMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelValueMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelValueMaterial, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelValueMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelValueMaterial.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelValueMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelValueMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelValueMaterial, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelValueMaterial, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelValueMaterial",
	Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::PropPointers),
	sizeof(FVoxelValueMaterial),
	alignof(FVoxelValueMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelValueMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelValueMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelValueMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelValueMaterial.InnerSingleton;
}
// ********** End ScriptStruct FVoxelValueMaterial *************************************************

// ********** Begin ScriptStruct FVoxelDataMemoryUsageInMB *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB;
class UScriptStruct* FVoxelDataMemoryUsageInMB::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataMemoryUsageInMB"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirtyValues_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedValues_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirtyMaterials_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMaterials_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirtyValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirtyMaterials;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataMemoryUsageInMB>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues = { "DirtyValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, DirtyValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirtyValues_MetaData), NewProp_DirtyValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues = { "CachedValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, CachedValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedValues_MetaData), NewProp_CachedValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials = { "DirtyMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, DirtyMaterials), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirtyMaterials_MetaData), NewProp_DirtyMaterials_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials = { "CachedMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataMemoryUsageInMB, CachedMaterials), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMaterials_MetaData), NewProp_CachedMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_DirtyMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewProp_CachedMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelDataMemoryUsageInMB",
	Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::PropPointers),
	sizeof(FVoxelDataMemoryUsageInMB),
	alignof(FVoxelDataMemoryUsageInMB),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB.InnerSingleton, Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB.InnerSingleton;
}
// ********** End ScriptStruct FVoxelDataMemoryUsageInMB *******************************************

// ********** Begin ScriptStruct FVoxelFindClosestNonEmptyVoxelResult ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult;
class UScriptStruct* FVoxelFindClosestNonEmptyVoxelResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFindClosestNonEmptyVoxelResult"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFindClosestNonEmptyVoxelResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FVoxelFindClosestNonEmptyVoxelResult*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelFindClosestNonEmptyVoxelResult), &Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelFindClosestNonEmptyVoxelResult, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelFindClosestNonEmptyVoxelResult, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelFindClosestNonEmptyVoxelResult, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelFindClosestNonEmptyVoxelResult",
	Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::PropPointers),
	sizeof(FVoxelFindClosestNonEmptyVoxelResult),
	alignof(FVoxelFindClosestNonEmptyVoxelResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult.InnerSingleton, Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult.InnerSingleton;
}
// ********** End ScriptStruct FVoxelFindClosestNonEmptyVoxelResult ********************************

// ********** Begin Class UVoxelDataTools Function CacheMaterials **********************************
struct Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics
{
	struct VoxelDataTools_eventCacheMaterials_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bMultiThreaded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache the materials in the bounds\n" },
#endif
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache the materials in the bounds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelDataTools_eventCacheMaterials_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCacheMaterials_Parms), &Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::NewProp_bMultiThreaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheMaterials", Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::VoxelDataTools_eventCacheMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::VoxelDataTools_eventCacheMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCacheMaterials)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CacheMaterials(Z_Param_World,Z_Param_Bounds,Z_Param_bMultiThreaded);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CacheMaterials ************************************

// ********** Begin Class UVoxelDataTools Function CacheMaterialsAsync *****************************
struct Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics
{
	struct VoxelDataTools_eventCacheMaterialsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache the materials in the bounds\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache the materials in the bounds" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventCacheMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCacheMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheMaterialsAsync", Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::VoxelDataTools_eventCacheMaterialsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::VoxelDataTools_eventCacheMaterialsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCacheMaterialsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CacheMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CacheMaterialsAsync *******************************

// ********** Begin Class UVoxelDataTools Function CacheValues *************************************
struct Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics
{
	struct VoxelDataTools_eventCacheValues_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bMultiThreaded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache the values in the bounds\n" },
#endif
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache the values in the bounds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelDataTools_eventCacheValues_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCacheValues_Parms), &Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::NewProp_bMultiThreaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheValues", Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::VoxelDataTools_eventCacheValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::VoxelDataTools_eventCacheValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCacheValues)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CacheValues(Z_Param_World,Z_Param_Bounds,Z_Param_bMultiThreaded);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CacheValues ***************************************

// ********** Begin Class UVoxelDataTools Function CacheValuesAsync ********************************
struct Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics
{
	struct VoxelDataTools_eventCacheValuesAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cache the values in the bounds\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache the values in the bounds" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCacheValuesAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventCacheValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCacheValuesAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CacheValuesAsync", Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::VoxelDataTools_eventCacheValuesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::VoxelDataTools_eventCacheValuesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCacheValuesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CacheValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CacheValuesAsync **********************************

// ********** Begin Class UVoxelDataTools Function CheckForSingleMaterials *************************
struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics
{
	struct VoxelDataTools_eventCheckForSingleMaterials_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleMaterials", Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::VoxelDataTools_eventCheckForSingleMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::VoxelDataTools_eventCheckForSingleMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleMaterials)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CheckForSingleMaterials(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CheckForSingleMaterials ***************************

// ********** Begin Class UVoxelDataTools Function CheckForSingleMaterialsAsync ********************
struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics
{
	struct VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleMaterialsAsync", Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::VoxelDataTools_eventCheckForSingleMaterialsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleMaterialsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CheckForSingleMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CheckForSingleMaterialsAsync **********************

// ********** Begin Class UVoxelDataTools Function CheckForSingleValues ****************************
struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics
{
	struct VoxelDataTools_eventCheckForSingleValues_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleValues", Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::VoxelDataTools_eventCheckForSingleValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::VoxelDataTools_eventCheckForSingleValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleValues)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CheckForSingleValues(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CheckForSingleValues ******************************

// ********** Begin Class UVoxelDataTools Function CheckForSingleValuesAsync ***********************
struct Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics
{
	struct VoxelDataTools_eventCheckForSingleValuesAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckForSingleValuesAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventCheckForSingleValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCheckForSingleValuesAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckForSingleValuesAsync", Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::VoxelDataTools_eventCheckForSingleValuesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::VoxelDataTools_eventCheckForSingleValuesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCheckForSingleValuesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CheckForSingleValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CheckForSingleValuesAsync *************************

// ********** Begin Class UVoxelDataTools Function CheckIfSameAsGenerator **************************
struct Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics
{
	struct VoxelDataTools_eventCheckIfSameAsGenerator_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will undirty the chunks identical to the generator\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will undirty the chunks identical to the generator" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGenerator_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGenerator_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckIfSameAsGenerator", Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::VoxelDataTools_eventCheckIfSameAsGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::VoxelDataTools_eventCheckIfSameAsGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCheckIfSameAsGenerator)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CheckIfSameAsGenerator(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CheckIfSameAsGenerator ****************************

// ********** Begin Class UVoxelDataTools Function CheckIfSameAsGeneratorAsync *********************
struct Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics
{
	struct VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will undirty the chunks identical to the generator\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will undirty the chunks identical to the generator" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CheckIfSameAsGeneratorAsync", Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::VoxelDataTools_eventCheckIfSameAsGeneratorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCheckIfSameAsGeneratorAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CheckIfSameAsGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CheckIfSameAsGeneratorAsync ***********************

// ********** Begin Class UVoxelDataTools Function ClearCachedMaterials ****************************
struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics
{
	struct VoxelDataTools_eventClearCachedMaterials_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedMaterials", Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::VoxelDataTools_eventClearCachedMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::VoxelDataTools_eventClearCachedMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execClearCachedMaterials)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::ClearCachedMaterials(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function ClearCachedMaterials ******************************

// ********** Begin Class UVoxelDataTools Function ClearCachedMaterialsAsync ***********************
struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics
{
	struct VoxelDataTools_eventClearCachedMaterialsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventClearCachedMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventClearCachedMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedMaterialsAsync", Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::VoxelDataTools_eventClearCachedMaterialsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::VoxelDataTools_eventClearCachedMaterialsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execClearCachedMaterialsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::ClearCachedMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function ClearCachedMaterialsAsync *************************

// ********** Begin Class UVoxelDataTools Function ClearCachedValues *******************************
struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics
{
	struct VoxelDataTools_eventClearCachedValues_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Cache" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedValues", Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::VoxelDataTools_eventClearCachedValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::VoxelDataTools_eventClearCachedValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execClearCachedValues)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::ClearCachedValues(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function ClearCachedValues *********************************

// ********** Begin Class UVoxelDataTools Function ClearCachedValuesAsync **************************
struct Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics
{
	struct VoxelDataTools_eventClearCachedValuesAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data|Cache" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearCachedValuesAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventClearCachedValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventClearCachedValuesAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearCachedValuesAsync", Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::VoxelDataTools_eventClearCachedValuesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::VoxelDataTools_eventClearCachedValuesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execClearCachedValuesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::ClearCachedValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function ClearCachedValuesAsync ****************************

// ********** Begin Class UVoxelDataTools Function ClearUnusedMaterials ****************************
struct Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics
{
	struct VoxelDataTools_eventClearUnusedMaterials_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove materials that do not affect the surface. Same visual result but will lead to better compression.\n// Digging will look different.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove materials that do not affect the surface. Same visual result but will lead to better compression.\nDigging will look different." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterials_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearUnusedMaterials", Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::VoxelDataTools_eventClearUnusedMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::VoxelDataTools_eventClearUnusedMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execClearUnusedMaterials)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::ClearUnusedMaterials(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function ClearUnusedMaterials ******************************

// ********** Begin Class UVoxelDataTools Function ClearUnusedMaterialsAsync ***********************
struct Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics
{
	struct VoxelDataTools_eventClearUnusedMaterialsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove materials that do not affect the surface. Same visual result but will lead to better compression.\n// Digging will look different.\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove materials that do not affect the surface. Same visual result but will lead to better compression.\nDigging will look different." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventClearUnusedMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventClearUnusedMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "ClearUnusedMaterialsAsync", Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::VoxelDataTools_eventClearUnusedMaterialsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::VoxelDataTools_eventClearUnusedMaterialsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execClearUnusedMaterialsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::ClearUnusedMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function ClearUnusedMaterialsAsync *************************

// ********** Begin Class UVoxelDataTools Function CompressIntoHeightmap ***************************
struct Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics
{
	struct VoxelDataTools_eventCompressIntoHeightmap_Parms
	{
		AVoxelWorld* World;
		UVoxelHeightmapAsset* HeightmapAsset;
		bool bHeightmapAssetMatchesWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the voxel generator is a heightmap or if an heightmap asset is provided,\n\x09 * will update the heightmap to the max Z surface in the voxel world\n\x09 * Will not edit the data: RoundToGenerator should be called after for best results\n\x09 */" },
#endif
		{ "CPP_Default_bHeightmapAssetMatchesWorld", "false" },
		{ "CPP_Default_HeightmapAsset", "None" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the voxel generator is a heightmap or if an heightmap asset is provided,\nwill update the heightmap to the max Z surface in the voxel world\nWill not edit the data: RoundToGenerator should be called after for best results" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapAsset;
	static void NewProp_bHeightmapAssetMatchesWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightmapAssetMatchesWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCompressIntoHeightmap_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_HeightmapAsset = { "HeightmapAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventCompressIntoHeightmap_Parms, HeightmapAsset), Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld_SetBit(void* Obj)
{
	((VoxelDataTools_eventCompressIntoHeightmap_Parms*)Obj)->bHeightmapAssetMatchesWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld = { "bHeightmapAssetMatchesWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventCompressIntoHeightmap_Parms), &Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_HeightmapAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::NewProp_bHeightmapAssetMatchesWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "CompressIntoHeightmap", Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::VoxelDataTools_eventCompressIntoHeightmap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::VoxelDataTools_eventCompressIntoHeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execCompressIntoHeightmap)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_OBJECT(UVoxelHeightmapAsset,Z_Param_HeightmapAsset);
	P_GET_UBOOL(Z_Param_bHeightmapAssetMatchesWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::CompressIntoHeightmap(Z_Param_World,Z_Param_HeightmapAsset,Z_Param_bHeightmapAssetMatchesWorld);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function CompressIntoHeightmap *****************************

// ********** Begin Class UVoxelDataTools Function FindClosestNonEmptyVoxel ************************
struct Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics
{
	struct VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms
	{
		FVoxelFindClosestNonEmptyVoxelResult Result;
		AVoxelWorld* World;
		FVector Position;
		bool bReadMaterial;
		bool bConvertToVoxelSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bReadMaterial, bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds the closest voxel to Position that is not empty\n\x09 * This is useful to do edits, or to query the material at a position\n\x09 *\n\x09 * @param\x09\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09\x09Position\x09\x09\x09\x09The position, in world space if bConvertToVoxelSpace is true\n\x09 * @param\x09\x09""bReadMaterial\x09\x09\x09If false will not read the material\n\x09 * @param\x09\x09""bConvertToVoxelSpace\x09If true, will convert Position to voxel space. If false, assumes it's already in voxels\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bReadMaterial", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the closest voxel to Position that is not empty\nThis is useful to do edits, or to query the material at a position\n\n@param               World                                   The voxel world\n@param               Position                                The position, in world space if bConvertToVoxelSpace is true\n@param               bReadMaterial                   If false will not read the material\n@param               bConvertToVoxelSpace    If true, will convert Position to voxel space. If false, assumes it's already in voxels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bReadMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadMaterial;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms, Result), Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, METADATA_PARAMS(0, nullptr) }; // 2124851548
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bReadMaterial_SetBit(void* Obj)
{
	((VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms*)Obj)->bReadMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bReadMaterial = { "bReadMaterial", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bReadMaterial_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bReadMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::NewProp_bConvertToVoxelSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "FindClosestNonEmptyVoxel", Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::VoxelDataTools_eventFindClosestNonEmptyVoxel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execFindClosestNonEmptyVoxel)
{
	P_GET_STRUCT_REF(FVoxelFindClosestNonEmptyVoxelResult,Z_Param_Out_Result);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bReadMaterial);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::FindClosestNonEmptyVoxel(Z_Param_Out_Result,Z_Param_World,Z_Param_Position,Z_Param_bReadMaterial,Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function FindClosestNonEmptyVoxel **************************

// ********** Begin Class UVoxelDataTools Function FindClosestNonEmptyVoxelAsync *******************
struct Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics
{
	struct VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelFindClosestNonEmptyVoxelResult Result;
		AVoxelWorld* World;
		FVector Position;
		bool bReadMaterial;
		bool bConvertToVoxelSpace;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bReadMaterial, bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds the closest voxel to Position that is not empty\n\x09 * This is useful to do edits, or to query the material at a position\n\x09 *\n\x09 * @param\x09\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09\x09Position\x09\x09\x09\x09The position, in world space if bConvertToVoxelSpace is true\n\x09 * @param\x09\x09""bReadMaterial\x09\x09\x09If false will not read the material\n\x09 * @param\x09\x09""bConvertToVoxelSpace\x09If true, will convert Position to voxel space. If false, assumes it's already in voxels\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bReadMaterial", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the closest voxel to Position that is not empty\nThis is useful to do edits, or to query the material at a position\n\n@param               World                                   The voxel world\n@param               Position                                The position, in world space if bConvertToVoxelSpace is true\n@param               bReadMaterial                   If false will not read the material\n@param               bConvertToVoxelSpace    If true, will convert Position to voxel space. If false, assumes it's already in voxels" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bReadMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadMaterial;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, Result), Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, METADATA_PARAMS(0, nullptr) }; // 2124851548
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bReadMaterial_SetBit(void* Obj)
{
	((VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms*)Obj)->bReadMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bReadMaterial = { "bReadMaterial", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bReadMaterial_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bReadMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "FindClosestNonEmptyVoxelAsync", Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::VoxelDataTools_eventFindClosestNonEmptyVoxelAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execFindClosestNonEmptyVoxelAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelFindClosestNonEmptyVoxelResult,Z_Param_Out_Result);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bReadMaterial);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::FindClosestNonEmptyVoxelAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Result,Z_Param_World,Z_Param_Position,Z_Param_bReadMaterial,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function FindClosestNonEmptyVoxelAsync *********************

// ********** Begin Class UVoxelDataTools Function GetCompressedSave *******************************
struct Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics
{
	struct VoxelDataTools_eventGetCompressedSave_Parms
	{
		AVoxelWorld* World;
		FVoxelCompressedWorldSave OutSave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a save of the world and compress it\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The compressed save\x09\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a save of the world and compress it\n@param       World           The voxel world\n@param       OutSave         The compressed save" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSave_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(0, nullptr) }; // 407345368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::NewProp_OutSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetCompressedSave", Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::VoxelDataTools_eventGetCompressedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::VoxelDataTools_eventGetCompressedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetCompressedSave)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetCompressedSave(Z_Param_World,Z_Param_Out_OutSave);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetCompressedSave *********************************

// ********** Begin Class UVoxelDataTools Function GetCompressedSaveAsync **************************
struct Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics
{
	struct VoxelDataTools_eventGetCompressedSaveAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelCompressedWorldSave OutSave;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a save of the world and compress it\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The compressed save\x09\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a save of the world and compress it\n@param       World           The voxel world\n@param       OutSave         The compressed save" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSave;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetCompressedSaveAsync_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(0, nullptr) }; // 407345368
void Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventGetCompressedSaveAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetCompressedSaveAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_OutSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetCompressedSaveAsync", Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::VoxelDataTools_eventGetCompressedSaveAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::VoxelDataTools_eventGetCompressedSaveAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetCompressedSaveAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutSave);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetCompressedSaveAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Out_OutSave,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetCompressedSaveAsync ****************************

// ********** Begin Class UVoxelDataTools Function GetDataMemoryUsageInMB **************************
struct Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics
{
	struct VoxelDataTools_eventGetDataMemoryUsageInMB_Parms
	{
		AVoxelWorld* World;
		FVoxelDataMemoryUsageInMB ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetDataMemoryUsageInMB_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetDataMemoryUsageInMB_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB, METADATA_PARAMS(0, nullptr) }; // 3275428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetDataMemoryUsageInMB", Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::VoxelDataTools_eventGetDataMemoryUsageInMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::VoxelDataTools_eventGetDataMemoryUsageInMB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetDataMemoryUsageInMB)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelDataMemoryUsageInMB*)Z_Param__Result=UVoxelDataTools::GetDataMemoryUsageInMB(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetDataMemoryUsageInMB ****************************

// ********** Begin Class UVoxelDataTools Function GetInterpolatedValue ****************************
struct Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics
{
	struct VoxelDataTools_eventGetInterpolatedValue_Parms
	{
		float Value;
		AVoxelWorld* World;
		FVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Get Interpolated Density" },
		{ "Keywords", "density" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetInterpolatedValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetInterpolatedValue_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetInterpolatedValue_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetInterpolatedValue", Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::VoxelDataTools_eventGetInterpolatedValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::VoxelDataTools_eventGetInterpolatedValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetInterpolatedValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetInterpolatedValue(Z_Param_Out_Value,Z_Param_World,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetInterpolatedValue ******************************

// ********** Begin Class UVoxelDataTools Function GetMaterial *************************************
struct Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics
{
	struct VoxelDataTools_eventGetMaterial_Parms
	{
		FVoxelMaterial Material;
		AVoxelWorld* World;
		FIntVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterial_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetMaterial", Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::VoxelDataTools_eventGetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::VoxelDataTools_eventGetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetMaterial)
{
	P_GET_STRUCT_REF(FVoxelMaterial,Z_Param_Out_Material);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetMaterial(Z_Param_Out_Material,Z_Param_World,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetMaterial ***************************************

// ********** Begin Class UVoxelDataTools Function GetMaterialAsync ********************************
struct Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics
{
	struct VoxelDataTools_eventGetMaterialAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelMaterial Material;
		AVoxelWorld* World;
		FIntVector Position;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetMaterialAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventGetMaterialAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetMaterialAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetMaterialAsync", Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::VoxelDataTools_eventGetMaterialAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::VoxelDataTools_eventGetMaterialAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetMaterialAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelMaterial,Z_Param_Out_Material);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetMaterialAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Material,Z_Param_World,Z_Param_Position,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetMaterialAsync **********************************

// ********** Begin Class UVoxelDataTools Function GetSave *****************************************
struct Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics
{
	struct VoxelDataTools_eventGetSave_Parms
	{
		AVoxelWorld* World;
		FVoxelUncompressedWorldSave OutSave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a save of the world\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The save\x09\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a save of the world\n@param       World           The voxel world\n@param       OutSave         The save" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSave_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(0, nullptr) }; // 1260233769
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::NewProp_OutSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetSave", Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::VoxelDataTools_eventGetSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::VoxelDataTools_eventGetSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetSave)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetSave(Z_Param_World,Z_Param_Out_OutSave);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetSave *******************************************

// ********** Begin Class UVoxelDataTools Function GetSaveAsync ************************************
struct Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics
{
	struct VoxelDataTools_eventGetSaveAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelUncompressedWorldSave OutSave;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a save of the world\n\x09 * @param\x09World\x09\x09The voxel world\n\x09 * @param\x09OutSave\x09\x09The save\x09\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a save of the world\n@param       World           The voxel world\n@param       OutSave         The save" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSave;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_OutSave = { "OutSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetSaveAsync_Parms, OutSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(0, nullptr) }; // 1260233769
void Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventGetSaveAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetSaveAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_OutSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetSaveAsync", Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::VoxelDataTools_eventGetSaveAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::VoxelDataTools_eventGetSaveAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetSaveAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutSave);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetSaveAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Out_OutSave,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetSaveAsync **************************************

// ********** Begin Class UVoxelDataTools Function GetValue ****************************************
struct Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics
{
	struct VoxelDataTools_eventGetValue_Parms
	{
		float Value;
		AVoxelWorld* World;
		FIntVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Get Density" },
		{ "Keywords", "density" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValue_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValue_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetValue", Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::VoxelDataTools_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::VoxelDataTools_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetValue(Z_Param_Out_Value,Z_Param_World,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetValue ******************************************

// ********** Begin Class UVoxelDataTools Function GetValueAsync ***********************************
struct Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics
{
	struct VoxelDataTools_eventGetValueAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		float Value;
		AVoxelWorld* World;
		FIntVector Position;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Get Density Async" },
		{ "Keywords", "density" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetValueAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventGetValueAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetValueAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetValueAsync", Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::VoxelDataTools_eventGetValueAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::VoxelDataTools_eventGetValueAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetValueAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetValueAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetValueAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetValueAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Value,Z_Param_World,Z_Param_Position,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetValueAsync *************************************

// ********** Begin Class UVoxelDataTools Function GetVoxelsValueAndMaterial ***********************
struct Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics
{
	struct VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms
	{
		TArray<FVoxelValueMaterial> Voxels;
		AVoxelWorld* World;
		TArray<FIntVector> Positions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Read a large number of voxels at a time\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read a large number of voxels at a time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels_Inner = { "Voxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelValueMaterial, METADATA_PARAMS(0, nullptr) }; // 1369516947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms, Voxels), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1369516947
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::NewProp_Positions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetVoxelsValueAndMaterial", Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::VoxelDataTools_eventGetVoxelsValueAndMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetVoxelsValueAndMaterial)
{
	P_GET_TARRAY_REF(FVoxelValueMaterial,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_TARRAY_REF(FIntVector,Z_Param_Out_Positions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetVoxelsValueAndMaterial(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Out_Positions);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetVoxelsValueAndMaterial *************************

// ********** Begin Class UVoxelDataTools Function GetVoxelsValueAndMaterialAsync ******************
struct Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics
{
	struct VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FVoxelValueMaterial> Voxels;
		AVoxelWorld* World;
		TArray<FIntVector> Positions;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Read a large number of voxels at a time, asynchronously\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read a large number of voxels at a time, asynchronously" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels_Inner = { "Voxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelValueMaterial, METADATA_PARAMS(0, nullptr) }; // 1369516947
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, Voxels), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1369516947
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
void Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "GetVoxelsValueAndMaterialAsync", Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::VoxelDataTools_eventGetVoxelsValueAndMaterialAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execGetVoxelsValueAndMaterialAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FVoxelValueMaterial,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_TARRAY_REF(FIntVector,Z_Param_Out_Positions);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::GetVoxelsValueAndMaterialAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Out_Positions,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function GetVoxelsValueAndMaterialAsync ********************

// ********** Begin Class UVoxelDataTools Function LoadFromCompressedSave **************************
struct Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics
{
	struct VoxelDataTools_eventLoadFromCompressedSave_Parms
	{
		const AVoxelWorld* World;
		FVoxelCompressedWorldSave Save;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load from a compressed save\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Save\x09\x09\x09The compressed save to load from\n\x09 * @return\x09If the load was successful\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load from a compressed save\n@param       World                   The voxel world\n@param       Save                    The compressed save to load from\n@return      If the load was successful" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Save;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromCompressedSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromCompressedSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Save_MetaData), NewProp_Save_MetaData) }; // 407345368
void Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelDataTools_eventLoadFromCompressedSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventLoadFromCompressedSave_Parms), &Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_Save,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "LoadFromCompressedSave", Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::VoxelDataTools_eventLoadFromCompressedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::VoxelDataTools_eventLoadFromCompressedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execLoadFromCompressedSave)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_Save);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelDataTools::LoadFromCompressedSave(Z_Param_World,Z_Param_Out_Save);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function LoadFromCompressedSave ****************************

// ********** Begin Class UVoxelDataTools Function LoadFromSave ************************************
struct Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics
{
	struct VoxelDataTools_eventLoadFromSave_Parms
	{
		const AVoxelWorld* World;
		FVoxelUncompressedWorldSave Save;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Load from a save\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Save\x09\x09\x09The save to load from\n\x09 * @return\x09If the load was successful\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load from a save\n@param       World                   The voxel world\n@param       Save                    The save to load from\n@return      If the load was successful" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Save;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventLoadFromSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Save_MetaData), NewProp_Save_MetaData) }; // 1260233769
void Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelDataTools_eventLoadFromSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventLoadFromSave_Parms), &Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_Save,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "LoadFromSave", Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::VoxelDataTools_eventLoadFromSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::VoxelDataTools_eventLoadFromSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_LoadFromSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_LoadFromSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execLoadFromSave)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_Save);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelDataTools::LoadFromSave(Z_Param_World,Z_Param_Out_Save);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function LoadFromSave **************************************

// ********** Begin Class UVoxelDataTools Function RoundToGenerator ********************************
struct Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics
{
	struct VoxelDataTools_eventRoundToGenerator_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bPreserveNormals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will revert the values who don't have a voxel neighbor with a different sign from the generator value\n// Will ignore items when computing generator values\n" },
#endif
		{ "CPP_Default_bPreserveNormals", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will revert the values who don't have a voxel neighbor with a different sign from the generator value\nWill ignore items when computing generator values" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bPreserveNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGenerator_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGenerator_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals_SetBit(void* Obj)
{
	((VoxelDataTools_eventRoundToGenerator_Parms*)Obj)->bPreserveNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals = { "bPreserveNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundToGenerator_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::NewProp_bPreserveNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundToGenerator", Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::VoxelDataTools_eventRoundToGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::VoxelDataTools_eventRoundToGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execRoundToGenerator)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bPreserveNormals);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::RoundToGenerator(Z_Param_World,Z_Param_Bounds,Z_Param_bPreserveNormals);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function RoundToGenerator **********************************

// ********** Begin Class UVoxelDataTools Function RoundToGeneratorAsync ***************************
struct Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics
{
	struct VoxelDataTools_eventRoundToGeneratorAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bPreserveNormals;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will revert the values who don't have a voxel neighbor with a different sign from the generator value\n// Will ignore items when computing generator values\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bPreserveNormals", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will revert the values who don't have a voxel neighbor with a different sign from the generator value\nWill ignore items when computing generator values" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bPreserveNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveNormals;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundToGeneratorAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals_SetBit(void* Obj)
{
	((VoxelDataTools_eventRoundToGeneratorAsync_Parms*)Obj)->bPreserveNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals = { "bPreserveNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventRoundToGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bPreserveNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundToGeneratorAsync", Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::VoxelDataTools_eventRoundToGeneratorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::VoxelDataTools_eventRoundToGeneratorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execRoundToGeneratorAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bPreserveNormals);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::RoundToGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bPreserveNormals,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function RoundToGeneratorAsync *****************************

// ********** Begin Class UVoxelDataTools Function RoundVoxels *************************************
struct Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics
{
	struct VoxelDataTools_eventRoundVoxels_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxels_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundVoxels", Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::VoxelDataTools_eventRoundVoxels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::VoxelDataTools_eventRoundVoxels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundVoxels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundVoxels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execRoundVoxels)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::RoundVoxels(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function RoundVoxels ***************************************

// ********** Begin Class UVoxelDataTools Function RoundVoxelsAsync ********************************
struct Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics
{
	struct VoxelDataTools_eventRoundVoxelsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression\n" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Round voxels that don't have an impact on the surface. Same visual result but will lead to better compression" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventRoundVoxelsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventRoundVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventRoundVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "RoundVoxelsAsync", Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::VoxelDataTools_eventRoundVoxelsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::VoxelDataTools_eventRoundVoxelsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execRoundVoxelsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::RoundVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function RoundVoxelsAsync **********************************

// ********** Begin Class UVoxelDataTools Function SetBoxAsDirty ***********************************
struct Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics
{
	struct VoxelDataTools_eventSetBoxAsDirty_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bDirtyValues;
		bool bDirtyMaterials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bDirtyMaterials", "true" },
		{ "CPP_Default_bDirtyValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bDirtyValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyValues;
	static void NewProp_bDirtyMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirty_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirty_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetBoxAsDirty_Parms*)Obj)->bDirtyValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues = { "bDirtyValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirty_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetBoxAsDirty_Parms*)Obj)->bDirtyMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials = { "bDirtyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirty_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::NewProp_bDirtyMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetBoxAsDirty", Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::VoxelDataTools_eventSetBoxAsDirty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::VoxelDataTools_eventSetBoxAsDirty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execSetBoxAsDirty)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bDirtyValues);
	P_GET_UBOOL(Z_Param_bDirtyMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::SetBoxAsDirty(Z_Param_World,Z_Param_Bounds,Z_Param_bDirtyValues,Z_Param_bDirtyMaterials);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function SetBoxAsDirty *************************************

// ********** Begin Class UVoxelDataTools Function SetBoxAsDirtyAsync ******************************
struct Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics
{
	struct VoxelDataTools_eventSetBoxAsDirtyAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bDirtyValues;
		bool bDirtyMaterials;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Data" },
		{ "CPP_Default_bDirtyMaterials", "true" },
		{ "CPP_Default_bDirtyValues", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bDirtyValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyValues;
	static void NewProp_bDirtyMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtyMaterials;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetBoxAsDirtyAsync_Parms*)Obj)->bDirtyValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues = { "bDirtyValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetBoxAsDirtyAsync_Parms*)Obj)->bDirtyMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials = { "bDirtyMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetBoxAsDirtyAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bDirtyMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetBoxAsDirtyAsync", Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::VoxelDataTools_eventSetBoxAsDirtyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::VoxelDataTools_eventSetBoxAsDirtyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execSetBoxAsDirtyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bDirtyValues);
	P_GET_UBOOL(Z_Param_bDirtyMaterials);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::SetBoxAsDirtyAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Bounds,Z_Param_bDirtyValues,Z_Param_bDirtyMaterials,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function SetBoxAsDirtyAsync ********************************

// ********** Begin Class UVoxelDataTools Function SetMaterial *************************************
struct Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics
{
	struct VoxelDataTools_eventSetMaterial_Parms
	{
		AVoxelWorld* World;
		FIntVector Position;
		FVoxelMaterial Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Material\x09\x09Material to set\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Material                Material to set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterial_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetMaterial", Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::VoxelDataTools_eventSetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::VoxelDataTools_eventSetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_SetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execSetMaterial)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::SetMaterial(Z_Param_World,Z_Param_Position,Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function SetMaterial ***************************************

// ********** Begin Class UVoxelDataTools Function SetMaterialAsync ********************************
struct Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics
{
	struct VoxelDataTools_eventSetMaterialAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FIntVector Position;
		FVoxelMaterial Material;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the material at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Material\x09\x09Material to set\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the material at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Material                Material to set" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetMaterialAsync_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
void Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetMaterialAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetMaterialAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetMaterialAsync", Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::VoxelDataTools_eventSetMaterialAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::VoxelDataTools_eventSetMaterialAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execSetMaterialAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::SetMaterialAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Material,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function SetMaterialAsync **********************************

// ********** Begin Class UVoxelDataTools Function SetValue ****************************************
struct Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics
{
	struct VoxelDataTools_eventSetValue_Parms
	{
		AVoxelWorld* World;
		FIntVector Position;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Value\x09\x09\x09""Density to set\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Set Density" },
		{ "Keywords", "density" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Value                   Density to set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValue_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValue_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetValue", Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::VoxelDataTools_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::VoxelDataTools_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execSetValue)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::SetValue(Z_Param_World,Z_Param_Position,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function SetValue ******************************************

// ********** Begin Class UVoxelDataTools Function SetValueAsync ***********************************
struct Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics
{
	struct VoxelDataTools_eventSetValueAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		AVoxelWorld* World;
		FIntVector Position;
		float Value;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the density at Position\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n\x09 * @param\x09Value\x09\x09\x09""Density to set\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Set Density Async" },
		{ "Keywords", "density" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the density at Position\n@param       World                   The voxel world\n@param       Position                The voxel position (use the World Position to Voxel function of the VoxelWorld to get it)\n@param       Value                   Density to set" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataTools_eventSetValueAsync_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelDataTools_eventSetValueAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDataTools_eventSetValueAsync_Parms), &Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataTools, nullptr, "SetValueAsync", Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::VoxelDataTools_eventSetValueAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::VoxelDataTools_eventSetValueAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataTools_SetValueAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataTools_SetValueAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataTools::execSetValueAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDataTools::SetValueAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Value,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelDataTools Function SetValueAsync *************************************

// ********** Begin Class UVoxelDataTools **********************************************************
void UVoxelDataTools::StaticRegisterNativesUVoxelDataTools()
{
	UClass* Class = UVoxelDataTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CacheMaterials", &UVoxelDataTools::execCacheMaterials },
		{ "CacheMaterialsAsync", &UVoxelDataTools::execCacheMaterialsAsync },
		{ "CacheValues", &UVoxelDataTools::execCacheValues },
		{ "CacheValuesAsync", &UVoxelDataTools::execCacheValuesAsync },
		{ "CheckForSingleMaterials", &UVoxelDataTools::execCheckForSingleMaterials },
		{ "CheckForSingleMaterialsAsync", &UVoxelDataTools::execCheckForSingleMaterialsAsync },
		{ "CheckForSingleValues", &UVoxelDataTools::execCheckForSingleValues },
		{ "CheckForSingleValuesAsync", &UVoxelDataTools::execCheckForSingleValuesAsync },
		{ "CheckIfSameAsGenerator", &UVoxelDataTools::execCheckIfSameAsGenerator },
		{ "CheckIfSameAsGeneratorAsync", &UVoxelDataTools::execCheckIfSameAsGeneratorAsync },
		{ "ClearCachedMaterials", &UVoxelDataTools::execClearCachedMaterials },
		{ "ClearCachedMaterialsAsync", &UVoxelDataTools::execClearCachedMaterialsAsync },
		{ "ClearCachedValues", &UVoxelDataTools::execClearCachedValues },
		{ "ClearCachedValuesAsync", &UVoxelDataTools::execClearCachedValuesAsync },
		{ "ClearUnusedMaterials", &UVoxelDataTools::execClearUnusedMaterials },
		{ "ClearUnusedMaterialsAsync", &UVoxelDataTools::execClearUnusedMaterialsAsync },
		{ "CompressIntoHeightmap", &UVoxelDataTools::execCompressIntoHeightmap },
		{ "FindClosestNonEmptyVoxel", &UVoxelDataTools::execFindClosestNonEmptyVoxel },
		{ "FindClosestNonEmptyVoxelAsync", &UVoxelDataTools::execFindClosestNonEmptyVoxelAsync },
		{ "GetCompressedSave", &UVoxelDataTools::execGetCompressedSave },
		{ "GetCompressedSaveAsync", &UVoxelDataTools::execGetCompressedSaveAsync },
		{ "GetDataMemoryUsageInMB", &UVoxelDataTools::execGetDataMemoryUsageInMB },
		{ "GetInterpolatedValue", &UVoxelDataTools::execGetInterpolatedValue },
		{ "GetMaterial", &UVoxelDataTools::execGetMaterial },
		{ "GetMaterialAsync", &UVoxelDataTools::execGetMaterialAsync },
		{ "GetSave", &UVoxelDataTools::execGetSave },
		{ "GetSaveAsync", &UVoxelDataTools::execGetSaveAsync },
		{ "GetValue", &UVoxelDataTools::execGetValue },
		{ "GetValueAsync", &UVoxelDataTools::execGetValueAsync },
		{ "GetVoxelsValueAndMaterial", &UVoxelDataTools::execGetVoxelsValueAndMaterial },
		{ "GetVoxelsValueAndMaterialAsync", &UVoxelDataTools::execGetVoxelsValueAndMaterialAsync },
		{ "LoadFromCompressedSave", &UVoxelDataTools::execLoadFromCompressedSave },
		{ "LoadFromSave", &UVoxelDataTools::execLoadFromSave },
		{ "RoundToGenerator", &UVoxelDataTools::execRoundToGenerator },
		{ "RoundToGeneratorAsync", &UVoxelDataTools::execRoundToGeneratorAsync },
		{ "RoundVoxels", &UVoxelDataTools::execRoundVoxels },
		{ "RoundVoxelsAsync", &UVoxelDataTools::execRoundVoxelsAsync },
		{ "SetBoxAsDirty", &UVoxelDataTools::execSetBoxAsDirty },
		{ "SetBoxAsDirtyAsync", &UVoxelDataTools::execSetBoxAsDirtyAsync },
		{ "SetMaterial", &UVoxelDataTools::execSetMaterial },
		{ "SetMaterialAsync", &UVoxelDataTools::execSetMaterialAsync },
		{ "SetValue", &UVoxelDataTools::execSetValue },
		{ "SetValueAsync", &UVoxelDataTools::execSetValueAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataTools;
UClass* UVoxelDataTools::GetPrivateStaticClass()
{
	using TClass = UVoxelDataTools;
	if (!Z_Registration_Info_UClass_UVoxelDataTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataTools"),
			Z_Registration_Info_UClass_UVoxelDataTools.InnerSingleton,
			StaticRegisterNativesUVoxelDataTools,
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
	return Z_Registration_Info_UClass_UVoxelDataTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataTools_NoRegister()
{
	return UVoxelDataTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelDataTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelDataTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheMaterials, "CacheMaterials" }, // 192769467
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheMaterialsAsync, "CacheMaterialsAsync" }, // 319919084
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheValues, "CacheValues" }, // 2743251360
		{ &Z_Construct_UFunction_UVoxelDataTools_CacheValuesAsync, "CacheValuesAsync" }, // 2448224236
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterials, "CheckForSingleMaterials" }, // 118453876
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleMaterialsAsync, "CheckForSingleMaterialsAsync" }, // 657631443
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValues, "CheckForSingleValues" }, // 3010369041
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckForSingleValuesAsync, "CheckForSingleValuesAsync" }, // 1777173163
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGenerator, "CheckIfSameAsGenerator" }, // 1965304292
		{ &Z_Construct_UFunction_UVoxelDataTools_CheckIfSameAsGeneratorAsync, "CheckIfSameAsGeneratorAsync" }, // 2226769381
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterials, "ClearCachedMaterials" }, // 291412475
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedMaterialsAsync, "ClearCachedMaterialsAsync" }, // 3038368698
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedValues, "ClearCachedValues" }, // 1283081346
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearCachedValuesAsync, "ClearCachedValuesAsync" }, // 2024351419
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterials, "ClearUnusedMaterials" }, // 728171527
		{ &Z_Construct_UFunction_UVoxelDataTools_ClearUnusedMaterialsAsync, "ClearUnusedMaterialsAsync" }, // 2243118424
		{ &Z_Construct_UFunction_UVoxelDataTools_CompressIntoHeightmap, "CompressIntoHeightmap" }, // 1438052712
		{ &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxel, "FindClosestNonEmptyVoxel" }, // 413974094
		{ &Z_Construct_UFunction_UVoxelDataTools_FindClosestNonEmptyVoxelAsync, "FindClosestNonEmptyVoxelAsync" }, // 1787090489
		{ &Z_Construct_UFunction_UVoxelDataTools_GetCompressedSave, "GetCompressedSave" }, // 2185517952
		{ &Z_Construct_UFunction_UVoxelDataTools_GetCompressedSaveAsync, "GetCompressedSaveAsync" }, // 2411399815
		{ &Z_Construct_UFunction_UVoxelDataTools_GetDataMemoryUsageInMB, "GetDataMemoryUsageInMB" }, // 1066878701
		{ &Z_Construct_UFunction_UVoxelDataTools_GetInterpolatedValue, "GetInterpolatedValue" }, // 1775918858
		{ &Z_Construct_UFunction_UVoxelDataTools_GetMaterial, "GetMaterial" }, // 1828552057
		{ &Z_Construct_UFunction_UVoxelDataTools_GetMaterialAsync, "GetMaterialAsync" }, // 3496441704
		{ &Z_Construct_UFunction_UVoxelDataTools_GetSave, "GetSave" }, // 445637990
		{ &Z_Construct_UFunction_UVoxelDataTools_GetSaveAsync, "GetSaveAsync" }, // 136097908
		{ &Z_Construct_UFunction_UVoxelDataTools_GetValue, "GetValue" }, // 1388748334
		{ &Z_Construct_UFunction_UVoxelDataTools_GetValueAsync, "GetValueAsync" }, // 3958729470
		{ &Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterial, "GetVoxelsValueAndMaterial" }, // 1532266911
		{ &Z_Construct_UFunction_UVoxelDataTools_GetVoxelsValueAndMaterialAsync, "GetVoxelsValueAndMaterialAsync" }, // 1308055112
		{ &Z_Construct_UFunction_UVoxelDataTools_LoadFromCompressedSave, "LoadFromCompressedSave" }, // 2084884898
		{ &Z_Construct_UFunction_UVoxelDataTools_LoadFromSave, "LoadFromSave" }, // 1943124826
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundToGenerator, "RoundToGenerator" }, // 854725117
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundToGeneratorAsync, "RoundToGeneratorAsync" }, // 201699490
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundVoxels, "RoundVoxels" }, // 1986516638
		{ &Z_Construct_UFunction_UVoxelDataTools_RoundVoxelsAsync, "RoundVoxelsAsync" }, // 2552375834
		{ &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirty, "SetBoxAsDirty" }, // 2679687745
		{ &Z_Construct_UFunction_UVoxelDataTools_SetBoxAsDirtyAsync, "SetBoxAsDirtyAsync" }, // 1996034466
		{ &Z_Construct_UFunction_UVoxelDataTools_SetMaterial, "SetMaterial" }, // 2061173900
		{ &Z_Construct_UFunction_UVoxelDataTools_SetMaterialAsync, "SetMaterialAsync" }, // 4052686376
		{ &Z_Construct_UFunction_UVoxelDataTools_SetValue, "SetValue" }, // 105270087
		{ &Z_Construct_UFunction_UVoxelDataTools_SetValueAsync, "SetValueAsync" }, // 3807565893
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelDataTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataTools_Statics::ClassParams = {
	&UVoxelDataTools::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataTools()
{
	if (!Z_Registration_Info_UClass_UVoxelDataTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataTools.OuterSingleton, Z_Construct_UClass_UVoxelDataTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataTools.OuterSingleton;
}
UVoxelDataTools::UVoxelDataTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataTools);
UVoxelDataTools::~UVoxelDataTools() {}
// ********** End Class UVoxelDataTools ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelValueMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelValueMaterial_Statics::NewStructOps, TEXT("VoxelValueMaterial"), &Z_Registration_Info_UScriptStruct_FVoxelValueMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelValueMaterial), 1369516947U) },
		{ FVoxelDataMemoryUsageInMB::StaticStruct, Z_Construct_UScriptStruct_FVoxelDataMemoryUsageInMB_Statics::NewStructOps, TEXT("VoxelDataMemoryUsageInMB"), &Z_Registration_Info_UScriptStruct_FVoxelDataMemoryUsageInMB, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelDataMemoryUsageInMB), 3275428U) },
		{ FVoxelFindClosestNonEmptyVoxelResult::StaticStruct, Z_Construct_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult_Statics::NewStructOps, TEXT("VoxelFindClosestNonEmptyVoxelResult"), &Z_Registration_Info_UScriptStruct_FVoxelFindClosestNonEmptyVoxelResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelFindClosestNonEmptyVoxelResult), 2124851548U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataTools, UVoxelDataTools::StaticClass, TEXT("UVoxelDataTools"), &Z_Registration_Info_UClass_UVoxelDataTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataTools), 3053205884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h__Script_Voxel_4273855074(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelDataTools_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
