// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelGraphAssetNodes.h"
#include "VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphAssetNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphAssetNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphAssetNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetValue();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_EditGetValue_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphAssetNode *****************************************************
void UVoxelGraphAssetNode::StaticRegisterNativesUVoxelGraphAssetNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphAssetNode;
UClass* UVoxelGraphAssetNode::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphAssetNode;
	if (!Z_Registration_Info_UClass_UVoxelGraphAssetNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphAssetNode"),
			Z_Registration_Info_UClass_UVoxelGraphAssetNode.InnerSingleton,
			StaticRegisterNativesUVoxelGraphAssetNode,
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
	return Z_Registration_Info_UClass_UVoxelGraphAssetNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphAssetNode_NoRegister()
{
	return UVoxelGraphAssetNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphAssetNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Graph Asset" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGenerator_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generator to sample from when not used as an asset. Useful to preview. Not used when compiled to C++\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ReconstructNode", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generator to sample from when not used as an asset. Useful to preview. Not used when compiled to C++" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphAssetNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator = { "DefaultGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphAssetNode, DefaultGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGenerator_MetaData), NewProp_DefaultGenerator_MetaData) }; // 3276742823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphAssetNode_Statics::NewProp_DefaultGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphAssetNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphAssetNode_Statics::ClassParams = {
	&UVoxelGraphAssetNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphAssetNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphAssetNode()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphAssetNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphAssetNode.OuterSingleton, Z_Construct_UClass_UVoxelGraphAssetNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphAssetNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphAssetNode);
UVoxelGraphAssetNode::~UVoxelGraphAssetNode() {}
// ********** End Class UVoxelGraphAssetNode *******************************************************

// ********** Begin Class UVoxelNode_EditGetValue **************************************************
void UVoxelNode_EditGetValue::StaticRegisterNativesUVoxelNode_EditGetValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_EditGetValue;
UClass* UVoxelNode_EditGetValue::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_EditGetValue;
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_EditGetValue"),
			Z_Registration_Info_UClass_UVoxelNode_EditGetValue.InnerSingleton,
			StaticRegisterNativesUVoxelNode_EditGetValue,
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
	return Z_Registration_Info_UClass_UVoxelNode_EditGetValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_EditGetValue_NoRegister()
{
	return UVoxelNode_EditGetValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_EditGetValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the previous generator value. Only for graph assets\n" },
#endif
		{ "DisplayName", "Get Previous Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the previous generator value. Only for graph assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::ClassParams = {
	&UVoxelNode_EditGetValue::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_EditGetValue()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetValue.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_EditGetValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetValue);
UVoxelNode_EditGetValue::~UVoxelNode_EditGetValue() {}
// ********** End Class UVoxelNode_EditGetValue ****************************************************

// ********** Begin Class UVoxelNode_EditGetMaterial ***********************************************
void UVoxelNode_EditGetMaterial::StaticRegisterNativesUVoxelNode_EditGetMaterial()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial;
UClass* UVoxelNode_EditGetMaterial::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_EditGetMaterial;
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_EditGetMaterial"),
			Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.InnerSingleton,
			StaticRegisterNativesUVoxelNode_EditGetMaterial,
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
	return Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial_NoRegister()
{
	return UVoxelNode_EditGetMaterial::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the previous generator material. Only for graph assets\n" },
#endif
		{ "DisplayName", "Get Previous Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the previous generator material. Only for graph assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::ClassParams = {
	&UVoxelNode_EditGetMaterial::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_EditGetMaterial()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetMaterial);
UVoxelNode_EditGetMaterial::~UVoxelNode_EditGetMaterial() {}
// ********** End Class UVoxelNode_EditGetMaterial *************************************************

// ********** Begin Class UVoxelNode_EditGetCustomOutput *******************************************
void UVoxelNode_EditGetCustomOutput::StaticRegisterNativesUVoxelNode_EditGetCustomOutput()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput;
UClass* UVoxelNode_EditGetCustomOutput::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_EditGetCustomOutput;
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_EditGetCustomOutput"),
			Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.InnerSingleton,
			StaticRegisterNativesUVoxelNode_EditGetCustomOutput,
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
	return Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_NoRegister()
{
	return UVoxelNode_EditGetCustomOutput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the previous generator custom output. Only for graph assets\n" },
#endif
		{ "DisplayName", "Get Previous Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the previous generator custom output. Only for graph assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetCustomOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_EditGetCustomOutput, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::NewProp_OutputName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphAssetNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::ClassParams = {
	&UVoxelNode_EditGetCustomOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_EditGetCustomOutput()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetCustomOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetCustomOutput);
UVoxelNode_EditGetCustomOutput::~UVoxelNode_EditGetCustomOutput() {}
// ********** End Class UVoxelNode_EditGetCustomOutput *********************************************

// ********** Begin Class UVoxelNode_EditGetHardness ***********************************************
void UVoxelNode_EditGetHardness::StaticRegisterNativesUVoxelNode_EditGetHardness()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_EditGetHardness;
UClass* UVoxelNode_EditGetHardness::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_EditGetHardness;
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_EditGetHardness"),
			Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.InnerSingleton,
			StaticRegisterNativesUVoxelNode_EditGetHardness,
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
	return Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness_NoRegister()
{
	return UVoxelNode_EditGetHardness::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the material hardness\n" },
#endif
		{ "DisplayName", "Get Hardness" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGraphAssetNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGraphAssetNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the material hardness" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_EditGetHardness>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::ClassParams = {
	&UVoxelNode_EditGetHardness::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_EditGetHardness()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.OuterSingleton, Z_Construct_UClass_UVoxelNode_EditGetHardness_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_EditGetHardness.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_EditGetHardness);
UVoxelNode_EditGetHardness::~UVoxelNode_EditGetHardness() {}
// ********** End Class UVoxelNode_EditGetHardness *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphAssetNode, UVoxelGraphAssetNode::StaticClass, TEXT("UVoxelGraphAssetNode"), &Z_Registration_Info_UClass_UVoxelGraphAssetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphAssetNode), 1467521955U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetValue, UVoxelNode_EditGetValue::StaticClass, TEXT("UVoxelNode_EditGetValue"), &Z_Registration_Info_UClass_UVoxelNode_EditGetValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetValue), 2738552687U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetMaterial, UVoxelNode_EditGetMaterial::StaticClass, TEXT("UVoxelNode_EditGetMaterial"), &Z_Registration_Info_UClass_UVoxelNode_EditGetMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetMaterial), 1446484454U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetCustomOutput, UVoxelNode_EditGetCustomOutput::StaticClass, TEXT("UVoxelNode_EditGetCustomOutput"), &Z_Registration_Info_UClass_UVoxelNode_EditGetCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetCustomOutput), 1790942418U) },
		{ Z_Construct_UClass_UVoxelNode_EditGetHardness, UVoxelNode_EditGetHardness::StaticClass, TEXT("UVoxelNode_EditGetHardness"), &Z_Registration_Info_UClass_UVoxelNode_EditGetHardness, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_EditGetHardness), 3604258734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h__Script_VoxelGraph_781045483(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphAssetNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
