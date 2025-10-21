// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Gen/VoxelToolsBase.h"
#include "VoxelIntBox.h"
#include "VoxelMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelToolsBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FModifiedVoxelValue ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModifiedVoxelValue;
class UScriptStruct* FModifiedVoxelValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModifiedVoxelValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModifiedVoxelValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelValue, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelValue"));
	}
	return Z_Registration_Info_UScriptStruct_FModifiedVoxelValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifiedVoxelValue, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifiedVoxelValue, OldValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifiedVoxelValue, NewValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewValue_MetaData), NewProp_NewValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"ModifiedVoxelValue",
	Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::PropPointers),
	sizeof(FModifiedVoxelValue),
	alignof(FModifiedVoxelValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue()
{
	if (!Z_Registration_Info_UScriptStruct_FModifiedVoxelValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModifiedVoxelValue.InnerSingleton, Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModifiedVoxelValue.InnerSingleton;
}
// ********** End ScriptStruct FModifiedVoxelValue *************************************************

// ********** Begin ScriptStruct FModifiedVoxelMaterial ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial;
class UScriptStruct* FModifiedVoxelMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifiedVoxelMaterial, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("ModifiedVoxelMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaterial_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMaterial_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifiedVoxelMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial = { "OldMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, OldMaterial), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaterial_MetaData), NewProp_OldMaterial_MetaData) }; // 3766892224
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifiedVoxelMaterial, NewMaterial), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMaterial_MetaData), NewProp_NewMaterial_MetaData) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_OldMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"ModifiedVoxelMaterial",
	Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::PropPointers),
	sizeof(FModifiedVoxelMaterial),
	alignof(FModifiedVoxelMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial.InnerSingleton, Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial.InnerSingleton;
}
// ********** End ScriptStruct FModifiedVoxelMaterial **********************************************

// ********** Begin Class UVoxelToolsBase Function GetModifiedVoxelMaterialsBounds *****************
struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics
{
	struct VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms
	{
		TArray<FModifiedVoxelMaterial> ModifiedVoxels;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedVoxels_MetaData), NewProp_ModifiedVoxels_MetaData) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ModifiedVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelMaterialsBounds", Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::VoxelToolsBase_eventGetModifiedVoxelMaterialsBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelMaterialsBounds)
{
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedVoxels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelMaterialsBounds(Z_Param_Out_ModifiedVoxels);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolsBase Function GetModifiedVoxelMaterialsBounds *******************

// ********** Begin Class UVoxelToolsBase Function GetModifiedVoxelValuesBounds ********************
struct Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics
{
	struct VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedVoxels;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Base" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedVoxels_MetaData), NewProp_ModifiedVoxels_MetaData) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ModifiedVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolsBase, nullptr, "GetModifiedVoxelValuesBounds", Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::VoxelToolsBase_eventGetModifiedVoxelValuesBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolsBase::execGetModifiedVoxelValuesBounds)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedVoxels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelToolsBase::GetModifiedVoxelValuesBounds(Z_Param_Out_ModifiedVoxels);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolsBase Function GetModifiedVoxelValuesBounds **********************

// ********** Begin Class UVoxelToolsBase **********************************************************
void UVoxelToolsBase::StaticRegisterNativesUVoxelToolsBase()
{
	UClass* Class = UVoxelToolsBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetModifiedVoxelMaterialsBounds", &UVoxelToolsBase::execGetModifiedVoxelMaterialsBounds },
		{ "GetModifiedVoxelValuesBounds", &UVoxelToolsBase::execGetModifiedVoxelValuesBounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelToolsBase;
UClass* UVoxelToolsBase::GetPrivateStaticClass()
{
	using TClass = UVoxelToolsBase;
	if (!Z_Registration_Info_UClass_UVoxelToolsBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelToolsBase"),
			Z_Registration_Info_UClass_UVoxelToolsBase.InnerSingleton,
			StaticRegisterNativesUVoxelToolsBase,
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
	return Z_Registration_Info_UClass_UVoxelToolsBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelToolsBase_NoRegister()
{
	return UVoxelToolsBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelToolsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelToolsBase.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelToolsBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelMaterialsBounds, "GetModifiedVoxelMaterialsBounds" }, // 3294595643
		{ &Z_Construct_UFunction_UVoxelToolsBase_GetModifiedVoxelValuesBounds, "GetModifiedVoxelValuesBounds" }, // 2722727987
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelToolsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolsBase_Statics::ClassParams = {
	&UVoxelToolsBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelToolsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelToolsBase()
{
	if (!Z_Registration_Info_UClass_UVoxelToolsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolsBase.OuterSingleton, Z_Construct_UClass_UVoxelToolsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelToolsBase.OuterSingleton;
}
UVoxelToolsBase::UVoxelToolsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolsBase);
UVoxelToolsBase::~UVoxelToolsBase() {}
// ********** End Class UVoxelToolsBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModifiedVoxelValue::StaticStruct, Z_Construct_UScriptStruct_FModifiedVoxelValue_Statics::NewStructOps, TEXT("ModifiedVoxelValue"), &Z_Registration_Info_UScriptStruct_FModifiedVoxelValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifiedVoxelValue), 1075743150U) },
		{ FModifiedVoxelMaterial::StaticStruct, Z_Construct_UScriptStruct_FModifiedVoxelMaterial_Statics::NewStructOps, TEXT("ModifiedVoxelMaterial"), &Z_Registration_Info_UScriptStruct_FModifiedVoxelMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifiedVoxelMaterial), 2111187622U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolsBase, UVoxelToolsBase::StaticClass, TEXT("UVoxelToolsBase"), &Z_Registration_Info_UClass_UVoxelToolsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolsBase), 1525146477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h__Script_Voxel_3288614669(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelToolsBase_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
