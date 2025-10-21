// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphNodeInterface *************************************************
void UVoxelGraphNodeInterface::StaticRegisterNativesUVoxelGraphNodeInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphNodeInterface;
UClass* UVoxelGraphNodeInterface::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphNodeInterface;
	if (!Z_Registration_Info_UClass_UVoxelGraphNodeInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphNodeInterface"),
			Z_Registration_Info_UClass_UVoxelGraphNodeInterface.InnerSingleton,
			StaticRegisterNativesUVoxelGraphNodeInterface,
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
	return Z_Registration_Info_UClass_UVoxelGraphNodeInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister()
{
	return UVoxelGraphNodeInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphNodeInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningMsg_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InfoMsg;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WarningMsg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNodeInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg = { "InfoMsg", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, InfoMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoMsg_MetaData), NewProp_InfoMsg_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg = { "WarningMsg", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphNodeInterface, WarningMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningMsg_MetaData), NewProp_WarningMsg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_InfoMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::NewProp_WarningMsg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::ClassParams = {
	&UVoxelGraphNodeInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphNodeInterface()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphNodeInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNodeInterface.OuterSingleton, Z_Construct_UClass_UVoxelGraphNodeInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphNodeInterface.OuterSingleton;
}
UVoxelGraphNodeInterface::UVoxelGraphNodeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNodeInterface);
UVoxelGraphNodeInterface::~UVoxelGraphNodeInterface() {}
// ********** End Class UVoxelGraphNodeInterface ***************************************************

// ********** Begin ScriptStruct FVoxelPin *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPin;
class UScriptStruct* FVoxelPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPin, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelPin"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPin.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used for macros to check that the nodes are the same\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for macros to check that the nodes are the same" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPinIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PinCategory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherPinIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherPinIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPin, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinId_MetaData), NewProp_PinId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPin, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPin, PinCategory), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategory_MetaData), NewProp_PinCategory_MetaData) }; // 504560274
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_Inner = { "OtherNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes = { "OtherNodes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPin, OtherNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherNodes_MetaData), NewProp_OtherNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_Inner = { "OtherPinIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds = { "OtherPinIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPin, OtherPinIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPinIds_MetaData), NewProp_OtherPinIds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_PinCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPin_Statics::NewProp_OtherPinIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	&NewStructOps,
	"VoxelPin",
	Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::PropPointers),
	sizeof(FVoxelPin),
	alignof(FVoxelPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPin()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPin.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPin.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPin ***********************************************************

// ********** Begin Class UVoxelNode ***************************************************************
void UVoxelNode::StaticRegisterNativesUVoxelNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode;
UClass* UVoxelNode::GetPrivateStaticClass()
{
	using TClass = UVoxelNode;
	if (!Z_Registration_Info_UClass_UVoxelNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode"),
			Z_Registration_Info_UClass_UVoxelNode.InnerSingleton,
			StaticRegisterNativesUVoxelNode,
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
	return Z_Registration_Info_UClass_UVoxelNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_NoRegister()
{
	return UVoxelNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for VoxelNodes\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for VoxelNodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPinCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPins;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputPinCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_Inner = { "InputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelPin, METADATA_PARAMS(0, nullptr) }; // 2070441927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins = { "InputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode, InputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPins_MetaData), NewProp_InputPins_MetaData) }; // 2070441927
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_Inner = { "OutputPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelPin, METADATA_PARAMS(0, nullptr) }; // 2070441927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins = { "OutputPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode, OutputPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPins_MetaData), NewProp_OutputPins_MetaData) }; // 2070441927
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode, Graph), Z_Construct_UClass_UVoxelGraphGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode, GraphNode), Z_Construct_UClass_UVoxelGraphNodeInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphNode_MetaData), NewProp_GraphNode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount = { "InputPinCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode, InputPinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPinCount_MetaData), NewProp_InputPinCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_OutputPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_Graph,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Statics::NewProp_InputPinCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Statics::ClassParams = {
	&UVoxelNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode()
{
	if (!Z_Registration_Info_UClass_UVoxelNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode.OuterSingleton, Z_Construct_UClass_UVoxelNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode.OuterSingleton;
}
UVoxelNode::UVoxelNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode);
UVoxelNode::~UVoxelNode() {}
// ********** End Class UVoxelNode *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNode_h__Script_VoxelGraph_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelPin::StaticStruct, Z_Construct_UScriptStruct_FVoxelPin_Statics::NewStructOps, TEXT("VoxelPin"), &Z_Registration_Info_UScriptStruct_FVoxelPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPin), 2070441927U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNodeInterface, UVoxelGraphNodeInterface::StaticClass, TEXT("UVoxelGraphNodeInterface"), &Z_Registration_Info_UClass_UVoxelGraphNodeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNodeInterface), 3827084403U) },
		{ Z_Construct_UClass_UVoxelNode, UVoxelNode::StaticClass, TEXT("UVoxelNode"), &Z_Registration_Info_UClass_UVoxelNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode), 253549279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNode_h__Script_VoxelGraph_3306649912(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNode_h__Script_VoxelGraph_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNode_h__Script_VoxelGraph_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNode_h__Script_VoxelGraph_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
