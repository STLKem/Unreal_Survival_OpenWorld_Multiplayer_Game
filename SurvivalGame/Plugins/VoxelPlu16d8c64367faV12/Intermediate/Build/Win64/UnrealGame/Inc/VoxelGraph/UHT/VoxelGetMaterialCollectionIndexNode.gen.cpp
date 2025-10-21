// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGetMaterialCollectionIndexNode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelAssetPickerNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_GetMaterialCollectionIndex ************************************
void UVoxelNode_GetMaterialCollectionIndex::StaticRegisterNativesUVoxelNode_GetMaterialCollectionIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex;
UClass* UVoxelNode_GetMaterialCollectionIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetMaterialCollectionIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetMaterialCollectionIndex"),
			Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetMaterialCollectionIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_NoRegister()
{
	return UVoxelNode_GetMaterialCollectionIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "Comment", "// Retrieve the index of a material function or a material instance in the voxel world material collection\n" },
		{ "DisplayName", "Get Material Collection Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ToolTip", "Retrieve the index of a material function or a material instance in the voxel world material collection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGetMaterialCollectionIndexNode.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetMaterialCollectionIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_GetMaterialCollectionIndex, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelAssetPickerNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::ClassParams = {
	&UVoxelNode_GetMaterialCollectionIndex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetMaterialCollectionIndex);
UVoxelNode_GetMaterialCollectionIndex::~UVoxelNode_GetMaterialCollectionIndex() {}
// ********** End Class UVoxelNode_GetMaterialCollectionIndex **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GetMaterialCollectionIndex, UVoxelNode_GetMaterialCollectionIndex::StaticClass, TEXT("UVoxelNode_GetMaterialCollectionIndex"), &Z_Registration_Info_UClass_UVoxelNode_GetMaterialCollectionIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetMaterialCollectionIndex), 735754116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h__Script_VoxelGraph_2268809038(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGetMaterialCollectionIndexNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
