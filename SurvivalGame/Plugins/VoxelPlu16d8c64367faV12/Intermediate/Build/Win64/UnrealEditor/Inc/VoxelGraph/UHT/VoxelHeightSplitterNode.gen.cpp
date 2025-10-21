// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelHeightSplitterNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHeightSplitterNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_HeightSplitter ************************************************
void UVoxelNode_HeightSplitter::StaticRegisterNativesUVoxelNode_HeightSplitter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_HeightSplitter;
UClass* UVoxelNode_HeightSplitter::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_HeightSplitter;
	if (!Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_HeightSplitter"),
			Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.InnerSingleton,
			StaticRegisterNativesUVoxelNode_HeightSplitter,
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
	return Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter_NoRegister()
{
	return UVoxelNode_HeightSplitter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Splits a float input based on different layers, and outputs the strength of each layer\n// Input heights must be ordered! \n" },
#endif
		{ "DisplayName", "Height Splitter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightSplitterNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Splits a float input based on different layers, and outputs the strength of each layer\nInput heights must be ordered!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSplits_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "30" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelHeightSplitterNode.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSplits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_HeightSplitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits = { "NumSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_HeightSplitter, NumSplits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSplits_MetaData), NewProp_NumSplits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::NewProp_NumSplits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::ClassParams = {
	&UVoxelNode_HeightSplitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_HeightSplitter()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.OuterSingleton, Z_Construct_UClass_UVoxelNode_HeightSplitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_HeightSplitter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_HeightSplitter);
UVoxelNode_HeightSplitter::~UVoxelNode_HeightSplitter() {}
// ********** End Class UVoxelNode_HeightSplitter **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_HeightSplitter, UVoxelNode_HeightSplitter::StaticClass, TEXT("UVoxelNode_HeightSplitter"), &Z_Registration_Info_UClass_UVoxelNode_HeightSplitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_HeightSplitter), 1472090646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h__Script_VoxelGraph_2510994359(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelHeightSplitterNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
