// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelDebugGraphUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDebugGraphUtils() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugNode();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugNode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelDebugNode **********************************************************
void UVoxelDebugNode::StaticRegisterNativesUVoxelDebugNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDebugNode;
UClass* UVoxelDebugNode::GetPrivateStaticClass()
{
	using TClass = UVoxelDebugNode;
	if (!Z_Registration_Info_UClass_UVoxelDebugNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDebugNode"),
			Z_Registration_Info_UClass_UVoxelDebugNode.InnerSingleton,
			StaticRegisterNativesUVoxelDebugNode,
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
	return Z_Registration_Info_UClass_UVoxelDebugNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDebugNode_NoRegister()
{
	return UVoxelDebugNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDebugNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelDebugGraphUtils.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugGraphUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelDebugNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugNode_Statics::ClassParams = {
	&UVoxelDebugNode::StaticClass,
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
	0x000012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDebugNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDebugNode()
{
	if (!Z_Registration_Info_UClass_UVoxelDebugNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugNode.OuterSingleton, Z_Construct_UClass_UVoxelDebugNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDebugNode.OuterSingleton;
}
UVoxelDebugNode::UVoxelDebugNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugNode);
UVoxelDebugNode::~UVoxelDebugNode() {}
// ********** End Class UVoxelDebugNode ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelDebugGraphUtils_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDebugNode, UVoxelDebugNode::StaticClass, TEXT("UVoxelDebugNode"), &Z_Registration_Info_UClass_UVoxelDebugNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugNode), 1112540814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelDebugGraphUtils_h__Script_VoxelGraphEditor_1283042752(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelDebugGraphUtils_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelDebugGraphUtils_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
