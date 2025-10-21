// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNodeHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelNodeHelper() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNodeHelper *********************************************************
void UVoxelNodeHelper::StaticRegisterNativesUVoxelNodeHelper()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNodeHelper;
UClass* UVoxelNodeHelper::GetPrivateStaticClass()
{
	using TClass = UVoxelNodeHelper;
	if (!Z_Registration_Info_UClass_UVoxelNodeHelper.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNodeHelper"),
			Z_Registration_Info_UClass_UVoxelNodeHelper.InnerSingleton,
			StaticRegisterNativesUVoxelNodeHelper,
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
	return Z_Registration_Info_UClass_UVoxelNodeHelper.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNodeHelper_NoRegister()
{
	return UVoxelNodeHelper::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNodeHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNodeHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeHelper_Statics::ClassParams = {
	&UVoxelNodeHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNodeHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNodeHelper()
{
	if (!Z_Registration_Info_UClass_UVoxelNodeHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNodeHelper.OuterSingleton, Z_Construct_UClass_UVoxelNodeHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNodeHelper.OuterSingleton;
}
UVoxelNodeHelper::UVoxelNodeHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeHelper);
UVoxelNodeHelper::~UVoxelNodeHelper() {}
// ********** End Class UVoxelNodeHelper ***********************************************************

// ********** Begin Class UVoxelSetterNode *********************************************************
void UVoxelSetterNode::StaticRegisterNativesUVoxelSetterNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSetterNode;
UClass* UVoxelSetterNode::GetPrivateStaticClass()
{
	using TClass = UVoxelSetterNode;
	if (!Z_Registration_Info_UClass_UVoxelSetterNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSetterNode"),
			Z_Registration_Info_UClass_UVoxelSetterNode.InnerSingleton,
			StaticRegisterNativesUVoxelSetterNode,
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
	return Z_Registration_Info_UClass_UVoxelSetterNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSetterNode_NoRegister()
{
	return UVoxelSetterNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSetterNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Setter nodes" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSetterNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSetterNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSetterNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSetterNode_Statics::ClassParams = {
	&UVoxelSetterNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSetterNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSetterNode()
{
	if (!Z_Registration_Info_UClass_UVoxelSetterNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSetterNode.OuterSingleton, Z_Construct_UClass_UVoxelSetterNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSetterNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSetterNode);
UVoxelSetterNode::~UVoxelSetterNode() {}
// ********** End Class UVoxelSetterNode ***********************************************************

// ********** Begin Class UVoxelPureNode ***********************************************************
void UVoxelPureNode::StaticRegisterNativesUVoxelPureNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPureNode;
UClass* UVoxelPureNode::GetPrivateStaticClass()
{
	using TClass = UVoxelPureNode;
	if (!Z_Registration_Info_UClass_UVoxelPureNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPureNode"),
			Z_Registration_Info_UClass_UVoxelPureNode.InnerSingleton,
			StaticRegisterNativesUVoxelPureNode,
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
	return Z_Registration_Info_UClass_UVoxelPureNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPureNode_NoRegister()
{
	return UVoxelPureNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPureNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPureNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPureNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPureNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPureNode_Statics::ClassParams = {
	&UVoxelPureNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPureNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPureNode()
{
	if (!Z_Registration_Info_UClass_UVoxelPureNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPureNode.OuterSingleton, Z_Construct_UClass_UVoxelPureNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPureNode.OuterSingleton;
}
UVoxelPureNode::UVoxelPureNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPureNode);
UVoxelPureNode::~UVoxelPureNode() {}
// ********** End Class UVoxelPureNode *************************************************************

// ********** Begin Class UVoxelNodeWithDependencies ***********************************************
void UVoxelNodeWithDependencies::StaticRegisterNativesUVoxelNodeWithDependencies()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNodeWithDependencies;
UClass* UVoxelNodeWithDependencies::GetPrivateStaticClass()
{
	using TClass = UVoxelNodeWithDependencies;
	if (!Z_Registration_Info_UClass_UVoxelNodeWithDependencies.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNodeWithDependencies"),
			Z_Registration_Info_UClass_UVoxelNodeWithDependencies.InnerSingleton,
			StaticRegisterNativesUVoxelNodeWithDependencies,
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
	return Z_Registration_Info_UClass_UVoxelNodeWithDependencies.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNodeWithDependencies_NoRegister()
{
	return UVoxelNodeWithDependencies::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNodeWithDependencies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeWithDependencies>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::ClassParams = {
	&UVoxelNodeWithDependencies::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNodeWithDependencies()
{
	if (!Z_Registration_Info_UClass_UVoxelNodeWithDependencies.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNodeWithDependencies.OuterSingleton, Z_Construct_UClass_UVoxelNodeWithDependencies_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNodeWithDependencies.OuterSingleton;
}
UVoxelNodeWithDependencies::UVoxelNodeWithDependencies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeWithDependencies);
UVoxelNodeWithDependencies::~UVoxelNodeWithDependencies() {}
// ********** End Class UVoxelNodeWithDependencies *************************************************

// ********** Begin Class UVoxelNodeWithContext ****************************************************
void UVoxelNodeWithContext::StaticRegisterNativesUVoxelNodeWithContext()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNodeWithContext;
UClass* UVoxelNodeWithContext::GetPrivateStaticClass()
{
	using TClass = UVoxelNodeWithContext;
	if (!Z_Registration_Info_UClass_UVoxelNodeWithContext.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNodeWithContext"),
			Z_Registration_Info_UClass_UVoxelNodeWithContext.InnerSingleton,
			StaticRegisterNativesUVoxelNodeWithContext,
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
	return Z_Registration_Info_UClass_UVoxelNodeWithContext.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNodeWithContext_NoRegister()
{
	return UVoxelNodeWithContext::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNodeWithContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelNodeHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNodeWithContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNodeWithContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithDependencies,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNodeWithContext_Statics::ClassParams = {
	&UVoxelNodeWithContext::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNodeWithContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNodeWithContext()
{
	if (!Z_Registration_Info_UClass_UVoxelNodeWithContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNodeWithContext.OuterSingleton, Z_Construct_UClass_UVoxelNodeWithContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNodeWithContext.OuterSingleton;
}
UVoxelNodeWithContext::UVoxelNodeWithContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNodeWithContext);
UVoxelNodeWithContext::~UVoxelNodeWithContext() {}
// ********** End Class UVoxelNodeWithContext ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNodeHelper, UVoxelNodeHelper::StaticClass, TEXT("UVoxelNodeHelper"), &Z_Registration_Info_UClass_UVoxelNodeHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNodeHelper), 245951076U) },
		{ Z_Construct_UClass_UVoxelSetterNode, UVoxelSetterNode::StaticClass, TEXT("UVoxelSetterNode"), &Z_Registration_Info_UClass_UVoxelSetterNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSetterNode), 443497542U) },
		{ Z_Construct_UClass_UVoxelPureNode, UVoxelPureNode::StaticClass, TEXT("UVoxelPureNode"), &Z_Registration_Info_UClass_UVoxelPureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPureNode), 2949947735U) },
		{ Z_Construct_UClass_UVoxelNodeWithDependencies, UVoxelNodeWithDependencies::StaticClass, TEXT("UVoxelNodeWithDependencies"), &Z_Registration_Info_UClass_UVoxelNodeWithDependencies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNodeWithDependencies), 1915116912U) },
		{ Z_Construct_UClass_UVoxelNodeWithContext, UVoxelNodeWithContext::StaticClass, TEXT("UVoxelNodeWithContext"), &Z_Registration_Info_UClass_UVoxelNodeWithContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNodeWithContext), 2531501010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h__Script_VoxelGraph_1732369944(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeHelper_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
