// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphSchema.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphSchema() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphSchema();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphSchema_NoRegister();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewNode ***********************************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelNodeClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class of node we want to create */" },
#endif
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class of node we want to create" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_VoxelNodeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass = { "VoxelNodeClass", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewNode, VoxelNodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelNodeClass_MetaData), NewProp_VoxelNodeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewProp_VoxelNodeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewNode",
	Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::PropPointers),
	sizeof(FVoxelGraphSchemaAction_NewNode),
	alignof(FVoxelGraphSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewNode *************************************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewMacroNode ******************************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewMacroNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewMacroNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewMacroNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewMacroNode"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Macro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewMacroNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewMacroNode, Macro), Z_Construct_UClass_UVoxelGraphMacro_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Macro_MetaData), NewProp_Macro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewProp_Macro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewMacroNode",
	Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::PropPointers),
	sizeof(FVoxelGraphSchemaAction_NewMacroNode),
	alignof(FVoxelGraphSchemaAction_NewMacroNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewMacroNode ********************************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewLocalVariableDeclaration ***************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewLocalVariableDeclaration cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration;
class UScriptStruct* FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultName_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinCategory_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PinCategory_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PinCategory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableDeclaration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName = { "DefaultName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableDeclaration, DefaultName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultName_MetaData), NewProp_DefaultName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory = { "PinCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableDeclaration, PinCategory), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinCategory_MetaData), NewProp_PinCategory_MetaData) }; // 504560274
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_DefaultName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewProp_PinCategory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewLocalVariableDeclaration",
	Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::PropPointers),
	sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration),
	alignof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewLocalVariableDeclaration *****************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewLocalVariableUsage *********************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewLocalVariableUsage>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewLocalVariableUsage cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage;
class UScriptStruct* FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Declaration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewLocalVariableUsage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewLocalVariableUsage, Declaration), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Declaration_MetaData), NewProp_Declaration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewProp_Declaration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewLocalVariableUsage",
	Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::PropPointers),
	sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage),
	alignof(FVoxelGraphSchemaAction_NewLocalVariableUsage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewLocalVariableUsage ***********************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewSetterNode *****************************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewSetterNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewSetterNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewSetterNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewSetterNode"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewSetterNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphSchemaAction_NewSetterNode, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewSetterNode",
	Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::PropPointers),
	sizeof(FVoxelGraphSchemaAction_NewSetterNode),
	alignof(FVoxelGraphSchemaAction_NewSetterNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewSetterNode *******************************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewKnotNode *******************************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewKnotNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewKnotNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode;
class UScriptStruct* FVoxelGraphSchemaAction_NewKnotNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewKnotNode"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewKnotNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewKnotNode",
	nullptr,
	0,
	sizeof(FVoxelGraphSchemaAction_NewKnotNode),
	alignof(FVoxelGraphSchemaAction_NewKnotNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewKnotNode *********************************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_NewComment ********************************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment;
class UScriptStruct* FVoxelGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to create new comment */" },
#endif
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to create new comment" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_NewComment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_NewComment",
	nullptr,
	0,
	sizeof(FVoxelGraphSchemaAction_NewComment),
	alignof(FVoxelGraphSchemaAction_NewComment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_NewComment **********************************

// ********** Begin ScriptStruct FVoxelGraphSchemaAction_Paste *************************************
static_assert(std::is_polymorphic<FVoxelGraphSchemaAction_Paste>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVoxelGraphSchemaAction_Paste cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste;
class UScriptStruct* FVoxelGraphSchemaAction_Paste::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphSchemaAction_Paste"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
#endif
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphSchemaAction_Paste>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"VoxelGraphSchemaAction_Paste",
	nullptr,
	0,
	sizeof(FVoxelGraphSchemaAction_Paste),
	alignof(FVoxelGraphSchemaAction_Paste),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphSchemaAction_Paste ***************************************

// ********** Begin Class UVoxelGraphSchema ********************************************************
void UVoxelGraphSchema::StaticRegisterNativesUVoxelGraphSchema()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphSchema;
UClass* UVoxelGraphSchema::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphSchema;
	if (!Z_Registration_Info_UClass_UVoxelGraphSchema.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphSchema"),
			Z_Registration_Info_UClass_UVoxelGraphSchema.InnerSingleton,
			StaticRegisterNativesUVoxelGraphSchema,
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
	return Z_Registration_Info_UClass_UVoxelGraphSchema.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphSchema_NoRegister()
{
	return UVoxelGraphSchema::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphSchema.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphSchema_Statics::ClassParams = {
	&UVoxelGraphSchema::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphSchema()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphSchema.OuterSingleton, Z_Construct_UClass_UVoxelGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphSchema.OuterSingleton;
}
UVoxelGraphSchema::UVoxelGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphSchema);
UVoxelGraphSchema::~UVoxelGraphSchema() {}
// ********** End Class UVoxelGraphSchema **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewNode), 1076672671U) },
		{ FVoxelGraphSchemaAction_NewMacroNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewMacroNode"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewMacroNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewMacroNode), 3258416309U) },
		{ FVoxelGraphSchemaAction_NewLocalVariableDeclaration::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewLocalVariableDeclaration"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableDeclaration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewLocalVariableDeclaration), 980234540U) },
		{ FVoxelGraphSchemaAction_NewLocalVariableUsage::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewLocalVariableUsage"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewLocalVariableUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewLocalVariableUsage), 1620284878U) },
		{ FVoxelGraphSchemaAction_NewSetterNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewSetterNode"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewSetterNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewSetterNode), 131613535U) },
		{ FVoxelGraphSchemaAction_NewKnotNode::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewKnotNode"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewKnotNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewKnotNode), 375015091U) },
		{ FVoxelGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_NewComment), 1427823136U) },
		{ FVoxelGraphSchemaAction_Paste::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphSchemaAction_Paste_Statics::NewStructOps, TEXT("VoxelGraphSchemaAction_Paste"), &Z_Registration_Info_UScriptStruct_FVoxelGraphSchemaAction_Paste, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphSchemaAction_Paste), 1653677548U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphSchema, UVoxelGraphSchema::StaticClass, TEXT("UVoxelGraphSchema"), &Z_Registration_Info_UClass_UVoxelGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphSchema), 2599069411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h__Script_VoxelGraphEditor_3396983267(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h__Script_VoxelGraphEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphSchema_h__Script_VoxelGraphEditor_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
