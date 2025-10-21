// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelGraphGeneratorDebugLevel ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel;
static UEnum* EVoxelGraphGeneratorDebugLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphGeneratorDebugLevel"));
	}
	return Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphGeneratorDebugLevel>()
{
	return EVoxelGraphGeneratorDebugLevel_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AfterBiomeMergeReplace.Name", "EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace" },
		{ "AfterMacroInlining.Name", "EVoxelGraphGeneratorDebugLevel::AfterMacroInlining" },
		{ "AfterSmartMinMaxReplace.Name", "EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace" },
		{ "Axis.Name", "EVoxelGraphGeneratorDebugLevel::Axis" },
		{ "BeforeFillFunctionSeparators.Name", "EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators" },
		{ "BeforeMacroInlining.Name", "EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining" },
		{ "Function.Name", "EVoxelGraphGeneratorDebugLevel::Function" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Output.Name", "EVoxelGraphGeneratorDebugLevel::Output" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining", (int64)EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining },
		{ "EVoxelGraphGeneratorDebugLevel::AfterMacroInlining", (int64)EVoxelGraphGeneratorDebugLevel::AfterMacroInlining },
		{ "EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace", (int64)EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace },
		{ "EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace", (int64)EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace },
		{ "EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators", (int64)EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators },
		{ "EVoxelGraphGeneratorDebugLevel::Output", (int64)EVoxelGraphGeneratorDebugLevel::Output },
		{ "EVoxelGraphGeneratorDebugLevel::Function", (int64)EVoxelGraphGeneratorDebugLevel::Function },
		{ "EVoxelGraphGeneratorDebugLevel::Axis", (int64)EVoxelGraphGeneratorDebugLevel::Axis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelGraphGeneratorDebugLevel",
	"EVoxelGraphGeneratorDebugLevel",
	Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel.InnerSingleton;
}
// ********** End Enum EVoxelGraphGeneratorDebugLevel **********************************************

// ********** Begin Class UVoxelGraphGenerator *****************************************************
void UVoxelGraphGenerator::StaticRegisterNativesUVoxelGraphGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphGenerator;
UClass* UVoxelGraphGenerator::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphGenerator;
	if (!Z_Registration_Info_UClass_UVoxelGraphGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphGenerator"),
			Z_Registration_Info_UClass_UVoxelGraphGenerator.InnerSingleton,
			StaticRegisterNativesUVoxelGraphGenerator,
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
	return Z_Registration_Info_UClass_UVoxelGraphGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister()
{
	return UVoxelGraphGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A graph generator\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelGraphGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "A graph generator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompileToCppOnSave_MetaData[] = {
		{ "Category", "Automatic compilation" },
		{ "DisplayName", "Compile to C++ on Save" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveLocation_MetaData[] = {
		{ "Category", "Automatic compilation" },
		{ "Comment", "// Relative to project directory\n" },
		{ "EditCondition", "bCompileToCppOnSave" },
		{ "FilePathFilter", "h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "Relative to project directory" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSavePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRangeAnalysis_MetaData[] = {
		{ "Category", "Range Analysis" },
		{ "Comment", "// Range analysis gives a pretty significant speed-up. You should not disable it\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "Range analysis gives a pretty significant speed-up. You should not disable it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFunctions_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Will show the nodes functions. If DetailedErrors is false, will only show TargetToDebug\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Will show the nodes functions. If DetailedErrors is false, will only show TargetToDebug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetailedErrors_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Show errors callstacks\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Show errors callstacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugGraph_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Can be enabled in Window->Debug Graph\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Can be enabled in Window->Debug Graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPinsIds_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowAxisDependencies_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLevel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The level of compilation to debug\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The level of compilation to debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The target to debug, if DebugLevel is below or equal to Target\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The target to debug, if DebugLevel is below or equal to Target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The function to debug, if DebugLevel is below or equal to Function\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The function to debug, if DebugLevel is below or equal to Function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisDependenciesToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The axis to debug, if DebugLevel is Axis\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The axis to debug, if DebugLevel is Axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesDepthScaleFactor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Increase this if your macro nodes are overlapping in the debug graph\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Increase this if your macro nodes are overlapping in the debug graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideDataNodes_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstNodePinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelDebugGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTextureSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs;
	static void NewProp_bAutomaticPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticPreview;
	static void NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFlowMergeAndFunctionsWarnings;
	static void NewProp_bCompileToCppOnSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileToCppOnSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveLocation;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastSavePath;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bEnableRangeAnalysis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRangeAnalysis;
	static void NewProp_bShowFunctions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFunctions;
	static void NewProp_bDetailedErrors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetailedErrors;
	static void NewProp_bEnableDebugGraph_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugGraph;
	static void NewProp_bShowPinsIds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPinsIds;
	static void NewProp_bShowAxisDependencies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAxisDependencies;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DebugLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetToDebug;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionToDebug;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AxisDependenciesToDebug_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisDependenciesToDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodesDepthScaleFactor;
	static void NewProp_bHideDataNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDataNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FirstNodePinId;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelDebugGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSettings;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewTextureSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewTextureSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewTexture;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, Outputs), Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bAutomaticPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview = { "bAutomaticPreview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticPreview_MetaData), NewProp_bAutomaticPreview_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bShowFlowMergeAndFunctionsWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings = { "bShowFlowMergeAndFunctionsWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData), NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bCompileToCppOnSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave = { "bCompileToCppOnSave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompileToCppOnSave_MetaData), NewProp_bCompileToCppOnSave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation = { "SaveLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, SaveLocation), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveLocation_MetaData), NewProp_SaveLocation_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath = { "LastSavePath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, LastSavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSavePath_MetaData), NewProp_LastSavePath_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bEnableRangeAnalysis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis = { "bEnableRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRangeAnalysis_MetaData), NewProp_bEnableRangeAnalysis_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bShowFunctions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions = { "bShowFunctions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFunctions_MetaData), NewProp_bShowFunctions_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bDetailedErrors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors = { "bDetailedErrors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetailedErrors_MetaData), NewProp_bDetailedErrors_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bEnableDebugGraph = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph = { "bEnableDebugGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugGraph_MetaData), NewProp_bEnableDebugGraph_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bShowPinsIds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds = { "bShowPinsIds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPinsIds_MetaData), NewProp_bShowPinsIds_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bShowAxisDependencies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies = { "bShowAxisDependencies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowAxisDependencies_MetaData), NewProp_bShowAxisDependencies_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel = { "DebugLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, DebugLevel), Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLevel_MetaData), NewProp_DebugLevel_MetaData) }; // 2159908559
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug = { "TargetToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, TargetToDebug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetToDebug_MetaData), NewProp_TargetToDebug_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug = { "FunctionToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FunctionToDebug), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionToDebug_MetaData), NewProp_FunctionToDebug_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug = { "AxisDependenciesToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, AxisDependenciesToDebug), Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisDependenciesToDebug_MetaData), NewProp_AxisDependenciesToDebug_MetaData) }; // 487752515
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor = { "NodesDepthScaleFactor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, NodesDepthScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesDepthScaleFactor_MetaData), NewProp_NodesDepthScaleFactor_MetaData) };
void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_SetBit(void* Obj)
{
	((UVoxelGraphGenerator*)Obj)->bHideDataNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes = { "bHideDataNodes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideDataNodes_MetaData), NewProp_bHideDataNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodes_MetaData), NewProp_AllNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_Inner = { "DebugNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes = { "DebugNodes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, DebugNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugNodes_MetaData), NewProp_DebugNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode = { "FirstNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FirstNode), Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstNode_MetaData), NewProp_FirstNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId = { "FirstNodePinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FirstNodePinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstNodePinId_MetaData), NewProp_FirstNodePinId_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph = { "VoxelGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelGraph_MetaData), NewProp_VoxelGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph = { "VoxelDebugGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelDebugGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelDebugGraph_MetaData), NewProp_VoxelDebugGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings = { "PreviewSettings", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewSettings), Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSettings_MetaData), NewProp_PreviewSettings_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_Inner = { "PreviewTextureSave", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave = { "PreviewTextureSave", nullptr, (EPropertyFlags)0x0040000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewTextureSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewTextureSave_MetaData), NewProp_PreviewTextureSave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewTexture_MetaData), NewProp_PreviewTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowAxisDependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::ClassParams = {
	&UVoxelGraphGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers),
	0,
	0x041000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphGenerator()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphGenerator.OuterSingleton, Z_Construct_UClass_UVoxelGraphGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphGenerator.OuterSingleton;
}
UVoxelGraphGenerator::UVoxelGraphGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGenerator);
UVoxelGraphGenerator::~UVoxelGraphGenerator() {}
// ********** End Class UVoxelGraphGenerator *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h__Script_VoxelGraph_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelGraphGeneratorDebugLevel_StaticEnum, TEXT("EVoxelGraphGeneratorDebugLevel"), &Z_Registration_Info_UEnum_EVoxelGraphGeneratorDebugLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2159908559U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphGenerator, UVoxelGraphGenerator::StaticClass, TEXT("UVoxelGraphGenerator"), &Z_Registration_Info_UClass_UVoxelGraphGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphGenerator), 1899205051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h__Script_VoxelGraph_3644421381(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h__Script_VoxelGraph_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h__Script_VoxelGraph_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
