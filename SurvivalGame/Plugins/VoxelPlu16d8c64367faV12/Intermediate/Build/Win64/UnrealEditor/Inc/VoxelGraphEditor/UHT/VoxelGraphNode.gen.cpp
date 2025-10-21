// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphNodes/VoxelGraphNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphNode **********************************************************
void UVoxelGraphNode::StaticRegisterNativesUVoxelGraphNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphNode;
UClass* UVoxelGraphNode::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphNode;
	if (!Z_Registration_Info_UClass_UVoxelGraphNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphNode"),
			Z_Registration_Info_UClass_UVoxelGraphNode.InnerSingleton,
			StaticRegisterNativesUVoxelGraphNode,
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
	return Z_Registration_Info_UClass_UVoxelGraphNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphNode_NoRegister()
{
	return UVoxelGraphNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode = { "VoxelNode", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphNode, VoxelNode), Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelNode_MetaData), NewProp_VoxelNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphNode_Statics::NewProp_VoxelNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Statics::ClassParams = {
	&UVoxelGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphNode()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphNode.OuterSingleton;
}
UVoxelGraphNode::UVoxelGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode);
UVoxelGraphNode::~UVoxelGraphNode() {}
// ********** End Class UVoxelGraphNode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode, UVoxelGraphNode::StaticClass, TEXT("UVoxelGraphNode"), &Z_Registration_Info_UClass_UVoxelGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode), 3096783645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h__Script_VoxelGraphEditor_985268175(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
