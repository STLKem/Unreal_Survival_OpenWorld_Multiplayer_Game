// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsUtilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelPerlinWormsSettings *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings;
class UScriptStruct* FVoxelPerlinWormsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPerlinWormsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The random seed to use\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The random seed to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The radius of the worms in voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The radius of the worms in voxel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Start of the worms, in voxel space\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Start of the worms, in voxel space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Direction of the first worm\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Direction of the first worm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmplitude_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// The amplitude of the random rotation on each worm\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "The amplitude of the random rotation on each worm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSegments_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Max depth of the worms tree\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Max depth of the worms tree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Length of the worms in voxel\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Length of the worms in voxel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitProbability_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Probability of a worm to create 2 worms\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Probability of a worm to create 2 worms" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitProbabilityGain_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// How much SplitProbability is reduced when worms go deeper in the tree\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "How much SplitProbability is reduced when worms go deeper in the tree" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchMeanSize_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Controls the size of the branches after a split\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Controls the size of the branches after a split" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchSizeVariation_MetaData[] = {
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Controls the size of the branches after a split, relative to BranchMeanSize\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Controls the size of the branches after a split, relative to BranchMeanSize" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseDirection_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Perlin noise traversal direction\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Perlin noise traversal direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSegmentLength_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// Segment lengths to use for perlin noise\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Segment lengths to use for perlin noise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWorms_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Perlin Worm" },
		{ "Comment", "// To avoid infinite loops\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "To avoid infinite loops" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAmplitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSegments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplitProbabilityGain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BranchMeanSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BranchSizeVariation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseSegmentLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWorms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPerlinWormsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude = { "RotationAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, RotationAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmplitude_MetaData), NewProp_RotationAmplitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NumSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSegments_MetaData), NewProp_NumSegments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentLength_MetaData), NewProp_SegmentLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability = { "SplitProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SplitProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitProbability_MetaData), NewProp_SplitProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain = { "SplitProbabilityGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, SplitProbabilityGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitProbabilityGain_MetaData), NewProp_SplitProbabilityGain_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize = { "BranchMeanSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, BranchMeanSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchMeanSize_MetaData), NewProp_BranchMeanSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation = { "BranchSizeVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, BranchSizeVariation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchSizeVariation_MetaData), NewProp_BranchSizeVariation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection = { "NoiseDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NoiseDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseDirection_MetaData), NewProp_NoiseDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength = { "NoiseSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, NoiseSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSegmentLength_MetaData), NewProp_NoiseSegmentLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms = { "MaxWorms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPerlinWormsSettings, MaxWorms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWorms_MetaData), NewProp_MaxWorms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_RotationAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NumSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_SplitProbabilityGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchMeanSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_BranchSizeVariation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_NoiseSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewProp_MaxWorms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPerlinWormsSettings",
	Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::PropPointers),
	sizeof(FVoxelPerlinWormsSettings),
	alignof(FVoxelPerlinWormsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPerlinWormsSettings *******************************************

// ********** Begin Delegate FAddWorm **************************************************************
struct Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics
{
	struct VoxelPlaceableItemsUtilities_eventAddWorm_Parms
	{
		FVector Start;
		FVector End;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorm_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorm__DelegateSignature", Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::VoxelPlaceableItemsUtilities_eventAddWorm_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00920000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::VoxelPlaceableItemsUtilities_eventAddWorm_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVoxelPlaceableItemsUtilities::FAddWorm_DelegateWrapper(const FScriptDelegate& AddWorm, FVector Start, FVector End, float Radius)
{
	struct VoxelPlaceableItemsUtilities_eventAddWorm_Parms
	{
		FVector Start;
		FVector End;
		float Radius;
	};
	VoxelPlaceableItemsUtilities_eventAddWorm_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.Radius=Radius;
	AddWorm.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAddWorm ****************************************************************

// ********** Begin Class UVoxelPlaceableItemsUtilities Function AddWorms **************************
struct Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics
{
	struct VoxelPlaceableItemsUtilities_eventAddWorms_Parms
	{
		FScriptDelegate AddWorm;
		FVoxelPerlinWormsSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "NoiseDir, NoiseSegmentLength" },
		{ "Category", "Voxel|Placeable Items" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AddWorm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_AddWorm = { "AddWorm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, AddWorm), Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2759576052
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, Settings), Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings, METADATA_PARAMS(0, nullptr) }; // 1338825849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_AddWorm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorms", Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::VoxelPlaceableItemsUtilities_eventAddWorms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::VoxelPlaceableItemsUtilities_eventAddWorms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemsUtilities::execAddWorms)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_AddWorm);
	P_GET_STRUCT(FVoxelPerlinWormsSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelPlaceableItemsUtilities::AddWorms(FAddWorm(Z_Param_AddWorm),Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemsUtilities Function AddWorms ****************************

// ********** Begin Class UVoxelPlaceableItemsUtilities ********************************************
void UVoxelPlaceableItemsUtilities::StaticRegisterNativesUVoxelPlaceableItemsUtilities()
{
	UClass* Class = UVoxelPlaceableItemsUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWorms", &UVoxelPlaceableItemsUtilities::execAddWorms },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities;
UClass* UVoxelPlaceableItemsUtilities::GetPrivateStaticClass()
{
	using TClass = UVoxelPlaceableItemsUtilities;
	if (!Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPlaceableItemsUtilities"),
			Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.InnerSingleton,
			StaticRegisterNativesUVoxelPlaceableItemsUtilities,
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
	return Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister()
{
	return UVoxelPlaceableItemsUtilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVoxelPlaceableItemsUtilities_AddWorm__DelegateSignature, "AddWorm__DelegateSignature" }, // 2759576052
		{ &Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms, "AddWorms" }, // 3939528239
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemsUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams = {
	&UVoxelPlaceableItemsUtilities::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities()
{
	if (!Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.OuterSingleton, Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities.OuterSingleton;
}
UVoxelPlaceableItemsUtilities::UVoxelPlaceableItemsUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemsUtilities);
UVoxelPlaceableItemsUtilities::~UVoxelPlaceableItemsUtilities() {}
// ********** End Class UVoxelPlaceableItemsUtilities **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelPerlinWormsSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelPerlinWormsSettings_Statics::NewStructOps, TEXT("VoxelPerlinWormsSettings"), &Z_Registration_Info_UScriptStruct_FVoxelPerlinWormsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPerlinWormsSettings), 1338825849U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPlaceableItemsUtilities, UVoxelPlaceableItemsUtilities::StaticClass, TEXT("UVoxelPlaceableItemsUtilities"), &Z_Registration_Info_UClass_UVoxelPlaceableItemsUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPlaceableItemsUtilities), 2222772597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h__Script_Voxel_2499223061(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemsUtilities_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
