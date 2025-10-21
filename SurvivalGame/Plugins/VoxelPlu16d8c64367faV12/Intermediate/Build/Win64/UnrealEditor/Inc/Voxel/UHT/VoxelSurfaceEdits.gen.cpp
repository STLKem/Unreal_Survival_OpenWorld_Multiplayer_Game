// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelSurfaceEdits.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceEdits() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelSurfaceEditsVoxelBase ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase;
class UScriptStruct* FVoxelSurfaceEditsVoxelBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxelBase"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfacePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxelBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition = { "SurfacePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, SurfacePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfacePosition_MetaData), NewProp_SurfacePosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_SurfacePosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSurfaceEditsVoxelBase",
	Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers),
	sizeof(FVoxelSurfaceEditsVoxelBase),
	alignof(FVoxelSurfaceEditsVoxelBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceEditsVoxelBase *****************************************

// ********** Begin ScriptStruct FVoxelSurfaceEditsVoxel *******************************************
static_assert(std::is_polymorphic<FVoxelSurfaceEditsVoxel>() == std::is_polymorphic<FVoxelSurfaceEditsVoxelBase>(), "USTRUCT FVoxelSurfaceEditsVoxel cannot be polymorphic unless super FVoxelSurfaceEditsVoxelBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel;
class UScriptStruct* FVoxelSurfaceEditsVoxel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxel"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxel, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase,
	&NewStructOps,
	"VoxelSurfaceEditsVoxel",
	Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers),
	sizeof(FVoxelSurfaceEditsVoxel),
	alignof(FVoxelSurfaceEditsVoxel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceEditsVoxel *********************************************

// ********** Begin ScriptStruct FVoxelSurfaceEditsVoxels ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels;
class UScriptStruct* FVoxelSurfaceEditsVoxels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxels"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSurfaceEditsVoxels",
	nullptr,
	0,
	sizeof(FVoxelSurfaceEditsVoxels),
	alignof(FVoxelSurfaceEditsVoxels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceEditsVoxels ********************************************

// ********** Begin ScriptStruct FVoxelSurfaceEditsProcessedVoxels *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels;
class UScriptStruct* FVoxelSurfaceEditsProcessedVoxels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsProcessedVoxels"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsProcessedVoxels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSurfaceEditsProcessedVoxels",
	nullptr,
	0,
	sizeof(FVoxelSurfaceEditsProcessedVoxels),
	alignof(FVoxelSurfaceEditsProcessedVoxels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceEditsProcessedVoxels ***********************************

// ********** Begin ScriptStruct FVoxelSurfaceEditsStackElement ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement;
class UScriptStruct* FVoxelSurfaceEditsStackElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsStackElement"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStackElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSurfaceEditsStackElement",
	nullptr,
	0,
	sizeof(FVoxelSurfaceEditsStackElement),
	alignof(FVoxelSurfaceEditsStackElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceEditsStackElement **************************************

// ********** Begin ScriptStruct FVoxelSurfaceEditsStack *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack;
class UScriptStruct* FVoxelSurfaceEditsStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsStack"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSurfaceEditsStack",
	nullptr,
	0,
	sizeof(FVoxelSurfaceEditsStack),
	alignof(FVoxelSurfaceEditsStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceEditsStack *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelSurfaceEditsVoxelBase::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewStructOps, TEXT("VoxelSurfaceEditsVoxelBase"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxelBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsVoxelBase), 3425645433U) },
		{ FVoxelSurfaceEditsVoxel::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewStructOps, TEXT("VoxelSurfaceEditsVoxel"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsVoxel), 1852076247U) },
		{ FVoxelSurfaceEditsVoxels::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::NewStructOps, TEXT("VoxelSurfaceEditsVoxels"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsVoxels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsVoxels), 847595784U) },
		{ FVoxelSurfaceEditsProcessedVoxels::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::NewStructOps, TEXT("VoxelSurfaceEditsProcessedVoxels"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsProcessedVoxels), 568197648U) },
		{ FVoxelSurfaceEditsStackElement::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::NewStructOps, TEXT("VoxelSurfaceEditsStackElement"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStackElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsStackElement), 3599844223U) },
		{ FVoxelSurfaceEditsStack::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::NewStructOps, TEXT("VoxelSurfaceEditsStack"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceEditsStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceEditsStack), 2561348619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h__Script_Voxel_466622476(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceEdits_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
