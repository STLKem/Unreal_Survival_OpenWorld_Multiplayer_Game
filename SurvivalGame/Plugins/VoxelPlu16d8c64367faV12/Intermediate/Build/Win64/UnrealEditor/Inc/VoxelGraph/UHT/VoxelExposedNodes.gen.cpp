// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelExposedNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExposedNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExposedNode ********************************************************
void UVoxelExposedNode::StaticRegisterNativesUVoxelExposedNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExposedNode;
UClass* UVoxelExposedNode::GetPrivateStaticClass()
{
	using TClass = UVoxelExposedNode;
	if (!Z_Registration_Info_UClass_UVoxelExposedNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExposedNode"),
			Z_Registration_Info_UClass_UVoxelExposedNode.InnerSingleton,
			StaticRegisterNativesUVoxelExposedNode,
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
	return Z_Registration_Info_UClass_UVoxelExposedNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExposedNode_NoRegister()
{
	return UVoxelExposedNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExposedNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExposedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Parameter Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lowest values on top\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lowest values on top" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMin_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIMax_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMetaData_MetaData[] = {
		{ "Category", "Parameter Settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeRenamed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only allow renaming on creation, else the name is wrong (GetTitle never called)\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExposedNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only allow renaming on creation, else the name is wrong (GetTitle never called)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UIMin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UIMax;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomMetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CustomMetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CustomMetaData;
	static void NewProp_bCanBeRenamed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeRenamed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExposedNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, UniqueName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueName_MetaData), NewProp_UniqueName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin = { "UIMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, UIMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMin_MetaData), NewProp_UIMin_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax = { "UIMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, UIMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIMax_MetaData), NewProp_UIMax_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_ValueProp = { "CustomMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_Key_KeyProp = { "CustomMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData = { "CustomMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExposedNode, CustomMetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMetaData_MetaData), NewProp_CustomMetaData_MetaData) };
void Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_SetBit(void* Obj)
{
	((UVoxelExposedNode*)Obj)->bCanBeRenamed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed = { "bCanBeRenamed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelExposedNode), &Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeRenamed_MetaData), NewProp_bCanBeRenamed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UniqueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_UIMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_CustomMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExposedNode_Statics::NewProp_bCanBeRenamed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExposedNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExposedNode_Statics::ClassParams = {
	&UVoxelExposedNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExposedNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExposedNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExposedNode()
{
	if (!Z_Registration_Info_UClass_UVoxelExposedNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExposedNode.OuterSingleton, Z_Construct_UClass_UVoxelExposedNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExposedNode.OuterSingleton;
}
UVoxelExposedNode::UVoxelExposedNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExposedNode);
UVoxelExposedNode::~UVoxelExposedNode() {}
// ********** End Class UVoxelExposedNode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExposedNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExposedNode, UVoxelExposedNode::StaticClass, TEXT("UVoxelExposedNode"), &Z_Registration_Info_UClass_UVoxelExposedNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExposedNode), 4051923408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExposedNodes_h__Script_VoxelGraph_1531865611(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExposedNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExposedNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
