// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelSeedNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSeedNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddSeeds();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddSeeds_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Seed();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Seed_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSeedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSeedNode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSeedNode ***********************************************************
void UVoxelSeedNode::StaticRegisterNativesUVoxelSeedNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSeedNode;
UClass* UVoxelSeedNode::GetPrivateStaticClass()
{
	using TClass = UVoxelSeedNode;
	if (!Z_Registration_Info_UClass_UVoxelSeedNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSeedNode"),
			Z_Registration_Info_UClass_UVoxelSeedNode.InnerSingleton,
			StaticRegisterNativesUVoxelSeedNode,
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
	return Z_Registration_Info_UClass_UVoxelSeedNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSeedNode_NoRegister()
{
	return UVoxelSeedNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSeedNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSeedNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSeedNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSeedNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSeedNode_Statics::ClassParams = {
	&UVoxelSeedNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSeedNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSeedNode()
{
	if (!Z_Registration_Info_UClass_UVoxelSeedNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSeedNode.OuterSingleton, Z_Construct_UClass_UVoxelSeedNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSeedNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSeedNode);
UVoxelSeedNode::~UVoxelSeedNode() {}
// ********** End Class UVoxelSeedNode *************************************************************

// ********** Begin Class UVoxelNode_Seed **********************************************************
void UVoxelNode_Seed::StaticRegisterNativesUVoxelNode_Seed()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_Seed;
UClass* UVoxelNode_Seed::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_Seed;
	if (!Z_Registration_Info_UClass_UVoxelNode_Seed.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_Seed"),
			Z_Registration_Info_UClass_UVoxelNode_Seed.InnerSingleton,
			StaticRegisterNativesUVoxelNode_Seed,
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
	return Z_Registration_Info_UClass_UVoxelNode_Seed.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_Seed_NoRegister()
{
	return UVoxelNode_Seed::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_Seed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Seed parameter\n" },
		{ "DisplayName", "Seed" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Seed parameter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Seed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_Seed, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_Seed, Name_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Seed_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_Seed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Seed_Statics::ClassParams = {
	&UVoxelNode_Seed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_Seed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_Seed()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_Seed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_Seed.OuterSingleton, Z_Construct_UClass_UVoxelNode_Seed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_Seed.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Seed);
UVoxelNode_Seed::~UVoxelNode_Seed() {}
// ********** End Class UVoxelNode_Seed ************************************************************

// ********** Begin Class UVoxelNode_AddSeeds ******************************************************
void UVoxelNode_AddSeeds::StaticRegisterNativesUVoxelNode_AddSeeds()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_AddSeeds;
UClass* UVoxelNode_AddSeeds::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_AddSeeds;
	if (!Z_Registration_Info_UClass_UVoxelNode_AddSeeds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_AddSeeds"),
			Z_Registration_Info_UClass_UVoxelNode_AddSeeds.InnerSingleton,
			StaticRegisterNativesUVoxelNode_AddSeeds,
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
	return Z_Registration_Info_UClass_UVoxelNode_AddSeeds.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_AddSeeds_NoRegister()
{
	return UVoxelNode_AddSeeds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_AddSeeds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Combine seeds by hashing them\n" },
		{ "DisplayName", "Hash Seeds" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "Keywords", "combine add seed" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Combine seeds by hashing them" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_AddSeeds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSeedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::ClassParams = {
	&UVoxelNode_AddSeeds::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_AddSeeds()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_AddSeeds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_AddSeeds.OuterSingleton, Z_Construct_UClass_UVoxelNode_AddSeeds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_AddSeeds.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_AddSeeds);
UVoxelNode_AddSeeds::~UVoxelNode_AddSeeds() {}
// ********** End Class UVoxelNode_AddSeeds ********************************************************

// ********** Begin Class UVoxelNode_MakeSeeds *****************************************************
void UVoxelNode_MakeSeeds::StaticRegisterNativesUVoxelNode_MakeSeeds()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_MakeSeeds;
UClass* UVoxelNode_MakeSeeds::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_MakeSeeds;
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_MakeSeeds"),
			Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.InnerSingleton,
			StaticRegisterNativesUVoxelNode_MakeSeeds,
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
	return Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds_NoRegister()
{
	return UVoxelNode_MakeSeeds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Seed" },
		{ "Comment", "// Make several new seeds from a single one\n" },
		{ "DisplayName", "Make Seeds" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelSeedNodes.h" },
		{ "Keywords", "make combine add seed" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ToolTip", "Make several new seeds from a single one" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumOutputs_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "32" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelSeedNodes.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOutputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeSeeds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_MakeSeeds, NumOutputs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumOutputs_MetaData), NewProp_NumOutputs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::NewProp_NumOutputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSeedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::ClassParams = {
	&UVoxelNode_MakeSeeds::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_MakeSeeds()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeSeeds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_MakeSeeds.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeSeeds);
UVoxelNode_MakeSeeds::~UVoxelNode_MakeSeeds() {}
// ********** End Class UVoxelNode_MakeSeeds *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSeedNode, UVoxelSeedNode::StaticClass, TEXT("UVoxelSeedNode"), &Z_Registration_Info_UClass_UVoxelSeedNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSeedNode), 3343526979U) },
		{ Z_Construct_UClass_UVoxelNode_Seed, UVoxelNode_Seed::StaticClass, TEXT("UVoxelNode_Seed"), &Z_Registration_Info_UClass_UVoxelNode_Seed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_Seed), 4179303646U) },
		{ Z_Construct_UClass_UVoxelNode_AddSeeds, UVoxelNode_AddSeeds::StaticClass, TEXT("UVoxelNode_AddSeeds"), &Z_Registration_Info_UClass_UVoxelNode_AddSeeds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_AddSeeds), 3904992799U) },
		{ Z_Construct_UClass_UVoxelNode_MakeSeeds, UVoxelNode_MakeSeeds::StaticClass, TEXT("UVoxelNode_MakeSeeds"), &Z_Registration_Info_UClass_UVoxelNode_MakeSeeds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeSeeds), 2717236092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h__Script_VoxelGraph_2895922759(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelSeedNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
