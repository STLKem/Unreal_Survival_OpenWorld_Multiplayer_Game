// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelMaterialNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMaterialNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetColor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetColor_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMaterialNode *******************************************************
void UVoxelMaterialNode::StaticRegisterNativesUVoxelMaterialNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMaterialNode;
UClass* UVoxelMaterialNode::GetPrivateStaticClass()
{
	using TClass = UVoxelMaterialNode;
	if (!Z_Registration_Info_UClass_UVoxelMaterialNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMaterialNode"),
			Z_Registration_Info_UClass_UVoxelMaterialNode.InnerSingleton,
			StaticRegisterNativesUVoxelMaterialNode,
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
	return Z_Registration_Info_UClass_UVoxelMaterialNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMaterialNode_NoRegister()
{
	return UVoxelMaterialNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMaterialNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMaterialNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMaterialNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMaterialNode_Statics::ClassParams = {
	&UVoxelMaterialNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMaterialNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMaterialNode()
{
	if (!Z_Registration_Info_UClass_UVoxelMaterialNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMaterialNode.OuterSingleton, Z_Construct_UClass_UVoxelMaterialNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMaterialNode.OuterSingleton;
}
UVoxelMaterialNode::UVoxelMaterialNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMaterialNode);
UVoxelMaterialNode::~UVoxelMaterialNode() {}
// ********** End Class UVoxelMaterialNode *********************************************************

// ********** Begin Class UVoxelNode_GetColor ******************************************************
void UVoxelNode_GetColor::StaticRegisterNativesUVoxelNode_GetColor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetColor;
UClass* UVoxelNode_GetColor::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetColor;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetColor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetColor"),
			Z_Registration_Info_UClass_UVoxelNode_GetColor.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetColor,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetColor.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetColor_NoRegister()
{
	return UVoxelNode_GetColor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the material color. Outputs are between 0 and 1\n" },
#endif
		{ "DisplayName", "Get Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the material color. Outputs are between 0 and 1" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetColor_Statics::ClassParams = {
	&UVoxelNode_GetColor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetColor()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetColor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetColor);
UVoxelNode_GetColor::~UVoxelNode_GetColor() {}
// ********** End Class UVoxelNode_GetColor ********************************************************

// ********** Begin Class UVoxelNode_GetIndex ******************************************************
void UVoxelNode_GetIndex::StaticRegisterNativesUVoxelNode_GetIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetIndex;
UClass* UVoxelNode_GetIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetIndex"),
			Z_Registration_Info_UClass_UVoxelNode_GetIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetIndex_NoRegister()
{
	return UVoxelNode_GetIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the index of the material. Output is between 0 and 255\n" },
#endif
		{ "DisplayName", "Get Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the index of the material. Output is between 0 and 255" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetIndex_Statics::ClassParams = {
	&UVoxelNode_GetIndex::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetIndex);
UVoxelNode_GetIndex::~UVoxelNode_GetIndex() {}
// ********** End Class UVoxelNode_GetIndex ********************************************************

// ********** Begin Class UVoxelNode_GetUVChannel **************************************************
void UVoxelNode_GetUVChannel::StaticRegisterNativesUVoxelNode_GetUVChannel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetUVChannel;
UClass* UVoxelNode_GetUVChannel::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetUVChannel;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetUVChannel"),
			Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetUVChannel,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel_NoRegister()
{
	return UVoxelNode_GetUVChannel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Read a UV channel from a material.\n" },
#endif
		{ "DisplayName", "Get UV Channel" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelMaterialNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelMaterialNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Read a UV channel from a material." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetUVChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::ClassParams = {
	&UVoxelNode_GetUVChannel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetUVChannel()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetUVChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetUVChannel.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetUVChannel);
UVoxelNode_GetUVChannel::~UVoxelNode_GetUVChannel() {}
// ********** End Class UVoxelNode_GetUVChannel ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMaterialNode, UVoxelMaterialNode::StaticClass, TEXT("UVoxelMaterialNode"), &Z_Registration_Info_UClass_UVoxelMaterialNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMaterialNode), 3655628318U) },
		{ Z_Construct_UClass_UVoxelNode_GetColor, UVoxelNode_GetColor::StaticClass, TEXT("UVoxelNode_GetColor"), &Z_Registration_Info_UClass_UVoxelNode_GetColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetColor), 3105123099U) },
		{ Z_Construct_UClass_UVoxelNode_GetIndex, UVoxelNode_GetIndex::StaticClass, TEXT("UVoxelNode_GetIndex"), &Z_Registration_Info_UClass_UVoxelNode_GetIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetIndex), 4202381277U) },
		{ Z_Construct_UClass_UVoxelNode_GetUVChannel, UVoxelNode_GetUVChannel::StaticClass, TEXT("UVoxelNode_GetUVChannel"), &Z_Registration_Info_UClass_UVoxelNode_GetUVChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetUVChannel), 3826191184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h__Script_VoxelGraph_765583064(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelMaterialNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
