// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelOptimizationNodes.h"
#include "Curves/CurveFloat.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelOptimizationNodes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeUnion();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RangeUnion_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Sleep();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Sleep_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMax();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMax_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMin();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SmartMin_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_StaticClampFloat **********************************************
void UVoxelNode_StaticClampFloat::StaticRegisterNativesUVoxelNode_StaticClampFloat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat;
UClass* UVoxelNode_StaticClampFloat::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_StaticClampFloat;
	if (!Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_StaticClampFloat"),
			Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.InnerSingleton,
			StaticRegisterNativesUVoxelNode_StaticClampFloat,
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
	return Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat_NoRegister()
{
	return UVoxelNode_StaticClampFloat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Nodes before this won't be computed for range analysis\n" },
		{ "DisplayName", "Static Clamp" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "range analysis" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Nodes before this won't be computed for range analysis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Static Clamp" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Static Clamp" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_StaticClampFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_StaticClampFloat, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_StaticClampFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::ClassParams = {
	&UVoxelNode_StaticClampFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_StaticClampFloat()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.OuterSingleton, Z_Construct_UClass_UVoxelNode_StaticClampFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_StaticClampFloat);
UVoxelNode_StaticClampFloat::~UVoxelNode_StaticClampFloat() {}
// ********** End Class UVoxelNode_StaticClampFloat ************************************************

// ********** Begin Class UVoxelNode_RangeAnalysisDebuggerFloat ************************************
void UVoxelNode_RangeAnalysisDebuggerFloat::StaticRegisterNativesUVoxelNode_RangeAnalysisDebuggerFloat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat;
UClass* UVoxelNode_RangeAnalysisDebuggerFloat::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_RangeAnalysisDebuggerFloat;
	if (!Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_RangeAnalysisDebuggerFloat"),
			Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.InnerSingleton,
			StaticRegisterNativesUVoxelNode_RangeAnalysisDebuggerFloat,
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
	return Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_NoRegister()
{
	return UVoxelNode_RangeAnalysisDebuggerFloat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Use this to debug the range of a value. Will plot the runtime values in a graph\n" },
		{ "DisplayName", "Range Analysis Debugger" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Use this to debug the range of a value. Will plot the runtime values in a graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Bounds" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphMin_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphMax_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphStep_MetaData[] = {
		{ "Category", "Graph" },
		{ "ClampMin", "0.001000" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Graph" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GraphStep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RangeAnalysisDebuggerFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin = { "GraphMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphMin_MetaData), NewProp_GraphMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax = { "GraphMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphMax_MetaData), NewProp_GraphMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep = { "GraphStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, GraphStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphStep_MetaData), NewProp_GraphStep_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RangeAnalysisDebuggerFloat, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) }; // 3139605666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_GraphStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::NewProp_Curve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::ClassParams = {
	&UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.OuterSingleton, Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RangeAnalysisDebuggerFloat);
UVoxelNode_RangeAnalysisDebuggerFloat::~UVoxelNode_RangeAnalysisDebuggerFloat() {}
// ********** End Class UVoxelNode_RangeAnalysisDebuggerFloat **************************************

// ********** Begin Class UVoxelNode_Sleep *********************************************************
void UVoxelNode_Sleep::StaticRegisterNativesUVoxelNode_Sleep()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_Sleep;
UClass* UVoxelNode_Sleep::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_Sleep;
	if (!Z_Registration_Info_UClass_UVoxelNode_Sleep.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_Sleep"),
			Z_Registration_Info_UClass_UVoxelNode_Sleep.InnerSingleton,
			StaticRegisterNativesUVoxelNode_Sleep,
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
	return Z_Registration_Info_UClass_UVoxelNode_Sleep.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_Sleep_NoRegister()
{
	return UVoxelNode_Sleep::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_Sleep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Runs a for loop\n" },
		{ "DisplayName", "Stress" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Runs a for loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfLoops_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfLoops;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Sleep>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops = { "NumberOfLoops", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_Sleep, NumberOfLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfLoops_MetaData), NewProp_NumberOfLoops_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Sleep_Statics::NewProp_NumberOfLoops,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_Sleep_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Sleep_Statics::ClassParams = {
	&UVoxelNode_Sleep::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_Sleep_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_Sleep()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_Sleep.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_Sleep.OuterSingleton, Z_Construct_UClass_UVoxelNode_Sleep_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_Sleep.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Sleep);
UVoxelNode_Sleep::~UVoxelNode_Sleep() {}
// ********** End Class UVoxelNode_Sleep ***********************************************************

// ********** Begin Class UVoxelNode_RangeUnion ****************************************************
void UVoxelNode_RangeUnion::StaticRegisterNativesUVoxelNode_RangeUnion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_RangeUnion;
UClass* UVoxelNode_RangeUnion::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_RangeUnion;
	if (!Z_Registration_Info_UClass_UVoxelNode_RangeUnion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_RangeUnion"),
			Z_Registration_Info_UClass_UVoxelNode_RangeUnion.InnerSingleton,
			StaticRegisterNativesUVoxelNode_RangeUnion,
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
	return Z_Registration_Info_UClass_UVoxelNode_RangeUnion.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_RangeUnion_NoRegister()
{
	return UVoxelNode_RangeUnion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_RangeUnion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// In range analysis, does the union of the inputs ranges. In other modes, returns 0\n" },
		{ "DisplayName", "Range Union" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "In range analysis, does the union of the inputs ranges. In other modes, returns 0" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RangeUnion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::ClassParams = {
	&UVoxelNode_RangeUnion::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_RangeUnion()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_RangeUnion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RangeUnion.OuterSingleton, Z_Construct_UClass_UVoxelNode_RangeUnion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_RangeUnion.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RangeUnion);
UVoxelNode_RangeUnion::~UVoxelNode_RangeUnion() {}
// ********** End Class UVoxelNode_RangeUnion ******************************************************

// ********** Begin Class UVoxelNode_IsSingleBool **************************************************
void UVoxelNode_IsSingleBool::StaticRegisterNativesUVoxelNode_IsSingleBool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IsSingleBool;
UClass* UVoxelNode_IsSingleBool::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IsSingleBool;
	if (!Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IsSingleBool"),
			Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IsSingleBool,
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
	return Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool_NoRegister()
{
	return UVoxelNode_IsSingleBool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// In range analysis, returns false if the condition can be true or false. In other modes, always returns true\n" },
		{ "DisplayName", "Is Single bool" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "In range analysis, returns false if the condition can be true or false. In other modes, always returns true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IsSingleBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::ClassParams = {
	&UVoxelNode_IsSingleBool::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IsSingleBool()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.OuterSingleton, Z_Construct_UClass_UVoxelNode_IsSingleBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IsSingleBool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IsSingleBool);
UVoxelNode_IsSingleBool::~UVoxelNode_IsSingleBool() {}
// ********** End Class UVoxelNode_IsSingleBool ****************************************************

// ********** Begin Class UVoxelNode_GetRangeAnalysis **********************************************
void UVoxelNode_GetRangeAnalysis::StaticRegisterNativesUVoxelNode_GetRangeAnalysis()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis;
UClass* UVoxelNode_GetRangeAnalysis::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetRangeAnalysis;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetRangeAnalysis"),
			Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetRangeAnalysis,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_NoRegister()
{
	return UVoxelNode_GetRangeAnalysis::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Get the range analysis value\n" },
		{ "DisplayName", "Get Range" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "range analysis" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
		{ "ToolTip", "Get the range analysis value" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetRangeAnalysis>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::ClassParams = {
	&UVoxelNode_GetRangeAnalysis::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetRangeAnalysis()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetRangeAnalysis_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetRangeAnalysis);
UVoxelNode_GetRangeAnalysis::~UVoxelNode_GetRangeAnalysis() {}
// ********** End Class UVoxelNode_GetRangeAnalysis ************************************************

// ********** Begin Class UVoxelNode_SmartMin ******************************************************
void UVoxelNode_SmartMin::StaticRegisterNativesUVoxelNode_SmartMin()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SmartMin;
UClass* UVoxelNode_SmartMin::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SmartMin;
	if (!Z_Registration_Info_UClass_UVoxelNode_SmartMin.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SmartMin"),
			Z_Registration_Info_UClass_UVoxelNode_SmartMin.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SmartMin,
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
	return Z_Registration_Info_UClass_UVoxelNode_SmartMin.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SmartMin_NoRegister()
{
	return UVoxelNode_SmartMin::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SmartMin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Smart Min" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "smart range min fast" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SmartMin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SmartMin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SmartMin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SmartMin_Statics::ClassParams = {
	&UVoxelNode_SmartMin::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SmartMin_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SmartMin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SmartMin()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SmartMin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SmartMin.OuterSingleton, Z_Construct_UClass_UVoxelNode_SmartMin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SmartMin.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SmartMin);
UVoxelNode_SmartMin::~UVoxelNode_SmartMin() {}
// ********** End Class UVoxelNode_SmartMin ********************************************************

// ********** Begin Class UVoxelNode_SmartMax ******************************************************
void UVoxelNode_SmartMax::StaticRegisterNativesUVoxelNode_SmartMax()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SmartMax;
UClass* UVoxelNode_SmartMax::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SmartMax;
	if (!Z_Registration_Info_UClass_UVoxelNode_SmartMax.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SmartMax"),
			Z_Registration_Info_UClass_UVoxelNode_SmartMax.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SmartMax,
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
	return Z_Registration_Info_UClass_UVoxelNode_SmartMax.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SmartMax_NoRegister()
{
	return UVoxelNode_SmartMax::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SmartMax_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Optimization" },
		{ "DisplayName", "Smart Max" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelOptimizationNodes.h" },
		{ "Keywords", "smart range max fast" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelOptimizationNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SmartMax>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SmartMax_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SmartMax_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SmartMax_Statics::ClassParams = {
	&UVoxelNode_SmartMax::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SmartMax_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SmartMax_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SmartMax()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SmartMax.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SmartMax.OuterSingleton, Z_Construct_UClass_UVoxelNode_SmartMax_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SmartMax.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SmartMax);
UVoxelNode_SmartMax::~UVoxelNode_SmartMax() {}
// ********** End Class UVoxelNode_SmartMax ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_StaticClampFloat, UVoxelNode_StaticClampFloat::StaticClass, TEXT("UVoxelNode_StaticClampFloat"), &Z_Registration_Info_UClass_UVoxelNode_StaticClampFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_StaticClampFloat), 701952956U) },
		{ Z_Construct_UClass_UVoxelNode_RangeAnalysisDebuggerFloat, UVoxelNode_RangeAnalysisDebuggerFloat::StaticClass, TEXT("UVoxelNode_RangeAnalysisDebuggerFloat"), &Z_Registration_Info_UClass_UVoxelNode_RangeAnalysisDebuggerFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RangeAnalysisDebuggerFloat), 3289834634U) },
		{ Z_Construct_UClass_UVoxelNode_Sleep, UVoxelNode_Sleep::StaticClass, TEXT("UVoxelNode_Sleep"), &Z_Registration_Info_UClass_UVoxelNode_Sleep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_Sleep), 2775380994U) },
		{ Z_Construct_UClass_UVoxelNode_RangeUnion, UVoxelNode_RangeUnion::StaticClass, TEXT("UVoxelNode_RangeUnion"), &Z_Registration_Info_UClass_UVoxelNode_RangeUnion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RangeUnion), 1389558700U) },
		{ Z_Construct_UClass_UVoxelNode_IsSingleBool, UVoxelNode_IsSingleBool::StaticClass, TEXT("UVoxelNode_IsSingleBool"), &Z_Registration_Info_UClass_UVoxelNode_IsSingleBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IsSingleBool), 3677096420U) },
		{ Z_Construct_UClass_UVoxelNode_GetRangeAnalysis, UVoxelNode_GetRangeAnalysis::StaticClass, TEXT("UVoxelNode_GetRangeAnalysis"), &Z_Registration_Info_UClass_UVoxelNode_GetRangeAnalysis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetRangeAnalysis), 1668311527U) },
		{ Z_Construct_UClass_UVoxelNode_SmartMin, UVoxelNode_SmartMin::StaticClass, TEXT("UVoxelNode_SmartMin"), &Z_Registration_Info_UClass_UVoxelNode_SmartMin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SmartMin), 3031759976U) },
		{ Z_Construct_UClass_UVoxelNode_SmartMax, UVoxelNode_SmartMax::StaticClass, TEXT("UVoxelNode_SmartMax"), &Z_Registration_Info_UClass_UVoxelNode_SmartMax, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SmartMax), 1969833802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h__Script_VoxelGraph_3557208142(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelOptimizationNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
