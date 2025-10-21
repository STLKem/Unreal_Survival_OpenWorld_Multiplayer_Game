// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelAssetPickerNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelAssetPickerNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelAssetPickerNode ****************************************************
void UVoxelAssetPickerNode::StaticRegisterNativesUVoxelAssetPickerNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelAssetPickerNode;
UClass* UVoxelAssetPickerNode::GetPrivateStaticClass()
{
	using TClass = UVoxelAssetPickerNode;
	if (!Z_Registration_Info_UClass_UVoxelAssetPickerNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelAssetPickerNode"),
			Z_Registration_Info_UClass_UVoxelAssetPickerNode.InnerSingleton,
			StaticRegisterNativesUVoxelAssetPickerNode,
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
	return Z_Registration_Info_UClass_UVoxelAssetPickerNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelAssetPickerNode_NoRegister()
{
	return UVoxelAssetPickerNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelAssetPickerNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelAssetPickerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelAssetPickerNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetPickerNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelAssetPickerNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetPickerNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetPickerNode_Statics::ClassParams = {
	&UVoxelAssetPickerNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetPickerNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelAssetPickerNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelAssetPickerNode()
{
	if (!Z_Registration_Info_UClass_UVoxelAssetPickerNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetPickerNode.OuterSingleton, Z_Construct_UClass_UVoxelAssetPickerNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelAssetPickerNode.OuterSingleton;
}
UVoxelAssetPickerNode::UVoxelAssetPickerNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetPickerNode);
UVoxelAssetPickerNode::~UVoxelAssetPickerNode() {}
// ********** End Class UVoxelAssetPickerNode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelAssetPickerNode, UVoxelAssetPickerNode::StaticClass, TEXT("UVoxelAssetPickerNode"), &Z_Registration_Info_UClass_UVoxelAssetPickerNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetPickerNode), 2929049393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h__Script_VoxelGraph_2717528045(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelAssetPickerNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
