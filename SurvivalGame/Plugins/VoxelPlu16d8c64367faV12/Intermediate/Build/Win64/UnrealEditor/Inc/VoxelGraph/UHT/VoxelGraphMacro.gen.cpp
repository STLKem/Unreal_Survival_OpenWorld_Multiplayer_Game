// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelGraphMacro.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphMacro() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphMacroPin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelGraphMacroPin ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin;
class UScriptStruct* FVoxelGraphMacroPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphMacroPin, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelGraphMacroPin"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditCondition", "bCustomDefaultValue" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomDefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static void NewProp_bCustomDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphMacroPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, Category), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 504560274
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphMacroPin, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_SetBit(void* Obj)
{
	((FVoxelGraphMacroPin*)Obj)->bCustomDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue = { "bCustomDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelGraphMacroPin), &Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomDefaultValue_MetaData), NewProp_bCustomDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewProp_bCustomDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	&NewStructOps,
	"VoxelGraphMacroPin",
	Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::PropPointers),
	sizeof(FVoxelGraphMacroPin),
	alignof(FVoxelGraphMacroPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphMacroPin()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphMacroPin *************************************************

// ********** Begin Class UVoxelGraphMacroInputOutputNode ******************************************
void UVoxelGraphMacroInputOutputNode::StaticRegisterNativesUVoxelGraphMacroInputOutputNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode;
UClass* UVoxelGraphMacroInputOutputNode::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphMacroInputOutputNode;
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphMacroInputOutputNode"),
			Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.InnerSingleton,
			StaticRegisterNativesUVoxelGraphMacroInputOutputNode,
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
	return Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister()
{
	return UVoxelGraphMacroInputOutputNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pins_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ReconstructNode", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Macro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroInputOutputNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelGraphMacroPin, METADATA_PARAMS(0, nullptr) }; // 3485391956
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacroInputOutputNode, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pins_MetaData), NewProp_Pins_MetaData) }; // 3485391956
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacroInputOutputNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Macro_MetaData), NewProp_Macro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Pins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::NewProp_Macro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::ClassParams = {
	&UVoxelGraphMacroInputOutputNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode.OuterSingleton;
}
UVoxelGraphMacroInputOutputNode::UVoxelGraphMacroInputOutputNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroInputOutputNode);
UVoxelGraphMacroInputOutputNode::~UVoxelGraphMacroInputOutputNode() {}
// ********** End Class UVoxelGraphMacroInputOutputNode ********************************************

// ********** Begin Class UVoxelGraphMacroInputNode ************************************************
void UVoxelGraphMacroInputNode::StaticRegisterNativesUVoxelGraphMacroInputNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphMacroInputNode;
UClass* UVoxelGraphMacroInputNode::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphMacroInputNode;
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphMacroInputNode"),
			Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.InnerSingleton,
			StaticRegisterNativesUVoxelGraphMacroInputNode,
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
	return Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister()
{
	return UVoxelGraphMacroInputNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Input" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroInputNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphMacroInputOutputNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::ClassParams = {
	&UVoxelGraphMacroInputNode::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphMacroInputNode.OuterSingleton;
}
UVoxelGraphMacroInputNode::UVoxelGraphMacroInputNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroInputNode);
UVoxelGraphMacroInputNode::~UVoxelGraphMacroInputNode() {}
// ********** End Class UVoxelGraphMacroInputNode **************************************************

// ********** Begin Class UVoxelGraphMacroOutputNode ***********************************************
void UVoxelGraphMacroOutputNode::StaticRegisterNativesUVoxelGraphMacroOutputNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode;
UClass* UVoxelGraphMacroOutputNode::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphMacroOutputNode;
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphMacroOutputNode"),
			Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.InnerSingleton,
			StaticRegisterNativesUVoxelGraphMacroOutputNode,
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
	return Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister()
{
	return UVoxelGraphMacroOutputNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroOutputNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphMacroInputOutputNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::ClassParams = {
	&UVoxelGraphMacroOutputNode::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode.OuterSingleton;
}
UVoxelGraphMacroOutputNode::UVoxelGraphMacroOutputNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroOutputNode);
UVoxelGraphMacroOutputNode::~UVoxelGraphMacroOutputNode() {}
// ********** End Class UVoxelGraphMacroOutputNode *************************************************

// ********** Begin Class UVoxelGraphMacro *********************************************************
void UVoxelGraphMacro::StaticRegisterNativesUVoxelGraphMacro()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphMacro;
UClass* UVoxelGraphMacro::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphMacro;
	if (!Z_Registration_Info_UClass_UVoxelGraphMacro.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphMacro"),
			Z_Registration_Info_UClass_UVoxelGraphMacro.InnerSingleton,
			StaticRegisterNativesUVoxelGraphMacro,
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
	return Z_Registration_Info_UClass_UVoxelGraphMacro.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister()
{
	return UVoxelGraphMacro::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphMacro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A graph macro\n */" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A graph macro" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "Macro Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shift+Enter for new line\n" },
#endif
		{ "DisplayName", "Tooltip (Shift+Enter for new line)" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shift+Enter for new line" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCategory_MetaData[] = {
		{ "Category", "Macro Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If empty the Macro Nodes category is used\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If empty the Macro Nodes category is used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[] = {
		{ "Category", "Macro Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If empty the asset name is used\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If empty the asset name is used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInContextMenu_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVectorOnlyNode_MetaData[] = {
		{ "Category", "Macro Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomCategory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomName;
	static void NewProp_bShowInContextMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInContextMenu;
	static void NewProp_bVectorOnlyNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVectorOnlyNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacro, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacro, Keywords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keywords_MetaData), NewProp_Keywords_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory = { "CustomCategory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacro, CustomCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCategory_MetaData), NewProp_CustomCategory_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacro, CustomName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomName_MetaData), NewProp_CustomName_MetaData) };
void Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_SetBit(void* Obj)
{
	((UVoxelGraphMacro*)Obj)->bShowInContextMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu = { "bShowInContextMenu", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphMacro), &Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInContextMenu_MetaData), NewProp_bShowInContextMenu_MetaData) };
void Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_SetBit(void* Obj)
{
	((UVoxelGraphMacro*)Obj)->bVectorOnlyNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode = { "bVectorOnlyNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphMacro), &Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVectorOnlyNode_MetaData), NewProp_bVectorOnlyNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacro, InputNode), Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputNode_MetaData), NewProp_InputNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode = { "OutputNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacro, OutputNode), Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputNode_MetaData), NewProp_OutputNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_Keywords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_CustomName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bShowInContextMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_bVectorOnlyNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_InputNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacro_Statics::NewProp_OutputNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphMacro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacro_Statics::ClassParams = {
	&UVoxelGraphMacro::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::PropPointers),
	0,
	0x041000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphMacro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphMacro()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphMacro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacro.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphMacro.OuterSingleton;
}
UVoxelGraphMacro::UVoxelGraphMacro(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacro);
UVoxelGraphMacro::~UVoxelGraphMacro() {}
// ********** End Class UVoxelGraphMacro ***********************************************************

// ********** Begin Class UVoxelGraphMacroNode *****************************************************
void UVoxelGraphMacroNode::StaticRegisterNativesUVoxelGraphMacroNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphMacroNode;
UClass* UVoxelGraphMacroNode::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphMacroNode;
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphMacroNode"),
			Z_Registration_Info_UClass_UVoxelGraphMacroNode.InnerSingleton,
			StaticRegisterNativesUVoxelGraphMacroNode,
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
	return Z_Registration_Info_UClass_UVoxelGraphMacroNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister()
{
	return UVoxelGraphMacroNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphMacroNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphMacro.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphMacro.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Macro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphMacroNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphMacroNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Macro_MetaData), NewProp_Macro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphMacroNode_Statics::NewProp_Macro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphMacroNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphMacroNode_Statics::ClassParams = {
	&UVoxelGraphMacroNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::PropPointers),
	0,
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphMacroNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphMacroNode()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphMacroNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphMacroNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphMacroNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphMacroNode.OuterSingleton;
}
UVoxelGraphMacroNode::UVoxelGraphMacroNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphMacroNode);
UVoxelGraphMacroNode::~UVoxelGraphMacroNode() {}
// ********** End Class UVoxelGraphMacroNode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h__Script_VoxelGraph_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGraphMacroPin::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics::NewStructOps, TEXT("VoxelGraphMacroPin"), &Z_Registration_Info_UScriptStruct_FVoxelGraphMacroPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphMacroPin), 3485391956U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphMacroInputOutputNode, UVoxelGraphMacroInputOutputNode::StaticClass, TEXT("UVoxelGraphMacroInputOutputNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroInputOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroInputOutputNode), 1803312413U) },
		{ Z_Construct_UClass_UVoxelGraphMacroInputNode, UVoxelGraphMacroInputNode::StaticClass, TEXT("UVoxelGraphMacroInputNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroInputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroInputNode), 1886473805U) },
		{ Z_Construct_UClass_UVoxelGraphMacroOutputNode, UVoxelGraphMacroOutputNode::StaticClass, TEXT("UVoxelGraphMacroOutputNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroOutputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroOutputNode), 3448547641U) },
		{ Z_Construct_UClass_UVoxelGraphMacro, UVoxelGraphMacro::StaticClass, TEXT("UVoxelGraphMacro"), &Z_Registration_Info_UClass_UVoxelGraphMacro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacro), 513623349U) },
		{ Z_Construct_UClass_UVoxelGraphMacroNode, UVoxelGraphMacroNode::StaticClass, TEXT("UVoxelGraphMacroNode"), &Z_Registration_Info_UClass_UVoxelGraphMacroNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphMacroNode), 3768942834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h__Script_VoxelGraph_2672314001(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h__Script_VoxelGraph_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h__Script_VoxelGraph_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h__Script_VoxelGraph_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
