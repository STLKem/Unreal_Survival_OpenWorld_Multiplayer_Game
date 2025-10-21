// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNoiseNodesBase.h"
#include "Voxel/Public/VoxelRange.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelNoiseNodesBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelRange();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_NoiseNode *****************************************************
void UVoxelNode_NoiseNode::StaticRegisterNativesUVoxelNode_NoiseNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_NoiseNode;
UClass* UVoxelNode_NoiseNode::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_NoiseNode;
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_NoiseNode"),
			Z_Registration_Info_UClass_UVoxelNode_NoiseNode.InnerSingleton,
			StaticRegisterNativesUVoxelNode_NoiseNode,
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
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_NoiseNode_NoRegister()
{
	return UVoxelNode_NoiseNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_NoiseNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "Comment", "// Do not use here, exposed as pin now\n" },
		{ "DisplayName", "Old Frequency" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "Do not use here, exposed as pin now" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSamples_MetaData[] = {
		{ "Category", "Range analysis settings" },
		{ "Comment", "// To find the output range, NumberOfSamples random samples are computed\n// Increase this if the output range is too irregular, and if you start to see flat areas in your noise\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "To find the output range, NumberOfSamples random samples are computed\nIncrease this if the output range is too irregular, and if you start to see flat areas in your noise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Range analysis settings" },
		{ "Comment", "// The range analysis interval will be expended by this much (relatively). Increase if you see flat areas in your noise\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "The range analysis interval will be expended by this much (relatively). Increase if you see flat areas in your noise" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputRanges_MetaData[] = {
		{ "Category", "Range analysis settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumberOfSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputRanges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputRanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, Interpolation), Z_Construct_UEnum_Voxel_EVoxelNoiseInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 1671449615
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, NumberOfSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfSamples_MetaData), NewProp_NumberOfSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_Inner = { "OutputRanges", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelRange, METADATA_PARAMS(0, nullptr) }; // 2658750168
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges = { "OutputRanges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNode, OutputRanges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputRanges_MetaData), NewProp_OutputRanges_MetaData) }; // 2658750168
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_NumberOfSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::NewProp_OutputRanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::ClassParams = {
	&UVoxelNode_NoiseNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_NoiseNode()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_NoiseNode.OuterSingleton, Z_Construct_UClass_UVoxelNode_NoiseNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNode.OuterSingleton;
}
UVoxelNode_NoiseNode::UVoxelNode_NoiseNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNode);
UVoxelNode_NoiseNode::~UVoxelNode_NoiseNode() {}
// ********** End Class UVoxelNode_NoiseNode *******************************************************

// ********** Begin Class UVoxelNode_NoiseNodeFractal **********************************************
void UVoxelNode_NoiseNodeFractal::StaticRegisterNativesUVoxelNode_NoiseNodeFractal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal;
UClass* UVoxelNode_NoiseNodeFractal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_NoiseNodeFractal;
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_NoiseNodeFractal"),
			Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_NoiseNodeFractal,
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
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_NoRegister()
{
	return UVoxelNode_NoiseNodeFractal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractalOctaves_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractalLacunarity_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "Comment", "// A multiplier that determines how quickly the frequency increases for each successive octave\n// The frequency of each successive octave is equal to the product of the previous octave's frequency and the lacunarity value.\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "A multiplier that determines how quickly the frequency increases for each successive octave\nThe frequency of each successive octave is equal to the product of the previous octave's frequency and the lacunarity value." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractalGain_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "Comment", "// A multiplier that determines how quickly the amplitudes diminish for each successive octave\n// The amplitude of each successive octave is equal to the product of the previous octave's amplitude and the gain value. Increasing the gain produces \"rougher\" Perlin noise.\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "A multiplier that determines how quickly the amplitudes diminish for each successive octave\nThe amplitude of each successive octave is equal to the product of the previous octave's amplitude and the gain value. Increasing the gain produces \"rougher\" Perlin noise." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractalType_MetaData[] = {
		{ "Category", "Fractal Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToOctavesMap_MetaData[] = {
		{ "Category", "LOD settings" },
		{ "Comment", "// To use lower quality noise for far LODs\n" },
		{ "DisplayName", "LOD to Octaves map" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "To use lower quality noise for far LODs" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FractalOctaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractalLacunarity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractalGain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FractalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FractalType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODToOctavesMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LODToOctavesMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LODToOctavesMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNodeFractal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves = { "FractalOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalOctaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractalOctaves_MetaData), NewProp_FractalOctaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity = { "FractalLacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalLacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractalLacunarity_MetaData), NewProp_FractalLacunarity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain = { "FractalGain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalGain), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractalGain_MetaData), NewProp_FractalGain_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType = { "FractalType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, FractalType), Z_Construct_UEnum_Voxel_EVoxelNoiseFractalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractalType_MetaData), NewProp_FractalType_MetaData) }; // 71121472
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_ValueProp = { "LODToOctavesMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_Key_KeyProp = { "LODToOctavesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap = { "LODToOctavesMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_NoiseNodeFractal, LODToOctavesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToOctavesMap_MetaData), NewProp_LODToOctavesMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalOctaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalLacunarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_FractalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::NewProp_LODToOctavesMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::ClassParams = {
	&UVoxelNode_NoiseNodeFractal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_NoiseNodeFractal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal.OuterSingleton;
}
UVoxelNode_NoiseNodeFractal::UVoxelNode_NoiseNodeFractal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNodeFractal);
UVoxelNode_NoiseNodeFractal::~UVoxelNode_NoiseNodeFractal() {}
// ********** End Class UVoxelNode_NoiseNodeFractal ************************************************

// ********** Begin Class UVoxelNode_NoiseNodeWithDerivative ***************************************
void UVoxelNode_NoiseNodeWithDerivative::StaticRegisterNativesUVoxelNode_NoiseNodeWithDerivative()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative;
UClass* UVoxelNode_NoiseNodeWithDerivative::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_NoiseNodeWithDerivative;
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_NoiseNodeWithDerivative"),
			Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative.InnerSingleton,
			StaticRegisterNativesUVoxelNode_NoiseNodeWithDerivative,
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
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_NoRegister()
{
	return UVoxelNode_NoiseNodeWithDerivative::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeDerivative_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bComputeDerivative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeDerivative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNodeWithDerivative>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_SetBit(void* Obj)
{
	((UVoxelNode_NoiseNodeWithDerivative*)Obj)->bComputeDerivative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative = { "bComputeDerivative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_NoiseNodeWithDerivative), &Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeDerivative_MetaData), NewProp_bComputeDerivative_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::NewProp_bComputeDerivative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::ClassParams = {
	&UVoxelNode_NoiseNodeWithDerivative::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative.OuterSingleton, Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative.OuterSingleton;
}
UVoxelNode_NoiseNodeWithDerivative::UVoxelNode_NoiseNodeWithDerivative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNodeWithDerivative);
UVoxelNode_NoiseNodeWithDerivative::~UVoxelNode_NoiseNodeWithDerivative() {}
// ********** End Class UVoxelNode_NoiseNodeWithDerivative *****************************************

// ********** Begin Class UVoxelNode_NoiseNodeWithDerivativeFractal ********************************
void UVoxelNode_NoiseNodeWithDerivativeFractal::StaticRegisterNativesUVoxelNode_NoiseNodeWithDerivativeFractal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal;
UClass* UVoxelNode_NoiseNodeWithDerivativeFractal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_NoiseNodeWithDerivativeFractal;
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_NoiseNodeWithDerivativeFractal"),
			Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_NoiseNodeWithDerivativeFractal,
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
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_NoRegister()
{
	return UVoxelNode_NoiseNodeWithDerivativeFractal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeDerivative_MetaData[] = {
		{ "Category", "Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bComputeDerivative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeDerivative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_NoiseNodeWithDerivativeFractal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_SetBit(void* Obj)
{
	((UVoxelNode_NoiseNodeWithDerivativeFractal*)Obj)->bComputeDerivative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative = { "bComputeDerivative", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_NoiseNodeWithDerivativeFractal), &Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeDerivative_MetaData), NewProp_bComputeDerivative_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::NewProp_bComputeDerivative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::ClassParams = {
	&UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal.OuterSingleton;
}
UVoxelNode_NoiseNodeWithDerivativeFractal::UVoxelNode_NoiseNodeWithDerivativeFractal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_NoiseNodeWithDerivativeFractal);
UVoxelNode_NoiseNodeWithDerivativeFractal::~UVoxelNode_NoiseNodeWithDerivativeFractal() {}
// ********** End Class UVoxelNode_NoiseNodeWithDerivativeFractal **********************************

// ********** Begin Class UVoxelNode_IQNoiseBase ***************************************************
void UVoxelNode_IQNoiseBase::StaticRegisterNativesUVoxelNode_IQNoiseBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase;
UClass* UVoxelNode_IQNoiseBase::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IQNoiseBase;
	if (!Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IQNoiseBase"),
			Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IQNoiseBase,
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
	return Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase_NoRegister()
{
	return UVoxelNode_IQNoiseBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IQNoiseBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::ClassParams = {
	&UVoxelNode_IQNoiseBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IQNoiseBase()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_IQNoiseBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IQNoiseBase);
UVoxelNode_IQNoiseBase::~UVoxelNode_IQNoiseBase() {}
// ********** End Class UVoxelNode_IQNoiseBase *****************************************************

// ********** Begin Class UVoxelNode_2DIQNoiseBase *************************************************
void UVoxelNode_2DIQNoiseBase::StaticRegisterNativesUVoxelNode_2DIQNoiseBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase;
UClass* UVoxelNode_2DIQNoiseBase::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DIQNoiseBase;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DIQNoiseBase"),
			Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DIQNoiseBase,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_NoRegister()
{
	return UVoxelNode_2DIQNoiseBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "IQ Noise settings" },
		{ "Comment", "// Rotation (in degrees) applied to the position between each octave\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "Rotation (in degrees) applied to the position between each octave" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DIQNoiseBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_2DIQNoiseBase, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_IQNoiseBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::ClassParams = {
	&UVoxelNode_2DIQNoiseBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DIQNoiseBase()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DIQNoiseBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase.OuterSingleton;
}
UVoxelNode_2DIQNoiseBase::UVoxelNode_2DIQNoiseBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DIQNoiseBase);
UVoxelNode_2DIQNoiseBase::~UVoxelNode_2DIQNoiseBase() {}
// ********** End Class UVoxelNode_2DIQNoiseBase ***************************************************

// ********** Begin Class UVoxelNode_3DIQNoiseBase *************************************************
void UVoxelNode_3DIQNoiseBase::StaticRegisterNativesUVoxelNode_3DIQNoiseBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase;
UClass* UVoxelNode_3DIQNoiseBase::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_3DIQNoiseBase;
	if (!Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_3DIQNoiseBase"),
			Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase.InnerSingleton,
			StaticRegisterNativesUVoxelNode_3DIQNoiseBase,
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
	return Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_NoRegister()
{
	return UVoxelNode_3DIQNoiseBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "IQ Noise settings" },
		{ "Comment", "// Rotation (in degrees) applied to the position between each octave\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesBase.h" },
		{ "ToolTip", "Rotation (in degrees) applied to the position between each octave" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DIQNoiseBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_3DIQNoiseBase, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_IQNoiseBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::ClassParams = {
	&UVoxelNode_3DIQNoiseBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_3DIQNoiseBase()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_3DIQNoiseBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase.OuterSingleton;
}
UVoxelNode_3DIQNoiseBase::UVoxelNode_3DIQNoiseBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DIQNoiseBase);
UVoxelNode_3DIQNoiseBase::~UVoxelNode_3DIQNoiseBase() {}
// ********** End Class UVoxelNode_3DIQNoiseBase ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNoiseNodesBase_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_NoiseNode, UVoxelNode_NoiseNode::StaticClass, TEXT("UVoxelNode_NoiseNode"), &Z_Registration_Info_UClass_UVoxelNode_NoiseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_NoiseNode), 2053557568U) },
		{ Z_Construct_UClass_UVoxelNode_NoiseNodeFractal, UVoxelNode_NoiseNodeFractal::StaticClass, TEXT("UVoxelNode_NoiseNodeFractal"), &Z_Registration_Info_UClass_UVoxelNode_NoiseNodeFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_NoiseNodeFractal), 3805399561U) },
		{ Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivative, UVoxelNode_NoiseNodeWithDerivative::StaticClass, TEXT("UVoxelNode_NoiseNodeWithDerivative"), &Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivative, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_NoiseNodeWithDerivative), 2934369472U) },
		{ Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal, UVoxelNode_NoiseNodeWithDerivativeFractal::StaticClass, TEXT("UVoxelNode_NoiseNodeWithDerivativeFractal"), &Z_Registration_Info_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_NoiseNodeWithDerivativeFractal), 665780553U) },
		{ Z_Construct_UClass_UVoxelNode_IQNoiseBase, UVoxelNode_IQNoiseBase::StaticClass, TEXT("UVoxelNode_IQNoiseBase"), &Z_Registration_Info_UClass_UVoxelNode_IQNoiseBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IQNoiseBase), 368120265U) },
		{ Z_Construct_UClass_UVoxelNode_2DIQNoiseBase, UVoxelNode_2DIQNoiseBase::StaticClass, TEXT("UVoxelNode_2DIQNoiseBase"), &Z_Registration_Info_UClass_UVoxelNode_2DIQNoiseBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DIQNoiseBase), 2082808118U) },
		{ Z_Construct_UClass_UVoxelNode_3DIQNoiseBase, UVoxelNode_3DIQNoiseBase::StaticClass, TEXT("UVoxelNode_3DIQNoiseBase"), &Z_Registration_Info_UClass_UVoxelNode_3DIQNoiseBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_3DIQNoiseBase), 3454501133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNoiseNodesBase_h__Script_VoxelGraph_3418854876(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNoiseNodesBase_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNoiseNodesBase_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
