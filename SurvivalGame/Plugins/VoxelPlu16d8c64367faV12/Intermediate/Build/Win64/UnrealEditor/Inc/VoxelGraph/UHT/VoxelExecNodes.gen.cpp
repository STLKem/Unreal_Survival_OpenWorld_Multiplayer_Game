// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelExecNodes.h"
#include "VoxelGraphOutputs.h"
#include "VoxelNodes/VoxelNodeStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExecNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FlowMerge();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FlowMerge_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetColor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetColor_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetUVs();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetUVs_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetValueNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetValueNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelNamedDataPin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_MaterialSetter ************************************************
void UVoxelNode_MaterialSetter::StaticRegisterNativesUVoxelNode_MaterialSetter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_MaterialSetter;
UClass* UVoxelNode_MaterialSetter::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_MaterialSetter;
	if (!Z_Registration_Info_UClass_UVoxelNode_MaterialSetter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_MaterialSetter"),
			Z_Registration_Info_UClass_UVoxelNode_MaterialSetter.InnerSingleton,
			StaticRegisterNativesUVoxelNode_MaterialSetter,
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
	return Z_Registration_Info_UClass_UVoxelNode_MaterialSetter.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter_NoRegister()
{
	return UVoxelNode_MaterialSetter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MaterialSetter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSetterNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::ClassParams = {
	&UVoxelNode_MaterialSetter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_MaterialSetter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MaterialSetter.OuterSingleton, Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_MaterialSetter.OuterSingleton;
}
UVoxelNode_MaterialSetter::UVoxelNode_MaterialSetter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MaterialSetter);
UVoxelNode_MaterialSetter::~UVoxelNode_MaterialSetter() {}
// ********** End Class UVoxelNode_MaterialSetter **************************************************

// ********** Begin Class UVoxelNode_SetColor ******************************************************
void UVoxelNode_SetColor::StaticRegisterNativesUVoxelNode_SetColor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetColor;
UClass* UVoxelNode_SetColor::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetColor;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetColor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetColor"),
			Z_Registration_Info_UClass_UVoxelNode_SetColor.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetColor,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetColor.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetColor_NoRegister()
{
	return UVoxelNode_SetColor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the color at that position. Inputs between 0 and 1\n// Will not work in multi index!\n// In single index, Alpha will be ignored (as it's used for the index)\n" },
#endif
		{ "DisplayName", "Set Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the color at that position. Inputs between 0 and 1\nWill not work in multi index!\nIn single index, Alpha will be ignored (as it's used for the index)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SetColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetColor_Statics::ClassParams = {
	&UVoxelNode_SetColor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetColor()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetColor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetColor);
UVoxelNode_SetColor::~UVoxelNode_SetColor() {}
// ********** End Class UVoxelNode_SetColor ********************************************************

// ********** Begin Class UVoxelNode_SetSingleIndex ************************************************
void UVoxelNode_SetSingleIndex::StaticRegisterNativesUVoxelNode_SetSingleIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex;
UClass* UVoxelNode_SetSingleIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetSingleIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetSingleIndex"),
			Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetSingleIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex_NoRegister()
{
	return UVoxelNode_SetSingleIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the material index at that position. Input clamped between 0 and 255.\n" },
#endif
		{ "DisplayName", "Set Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the material index at that position. Input clamped between 0 and 255." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetSingleIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::ClassParams = {
	&UVoxelNode_SetSingleIndex::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetSingleIndex);
UVoxelNode_SetSingleIndex::~UVoxelNode_SetSingleIndex() {}
// ********** End Class UVoxelNode_SetSingleIndex **************************************************

// ********** Begin Class UVoxelNode_SetMultiIndexWetness ******************************************
void UVoxelNode_SetMultiIndexWetness::StaticRegisterNativesUVoxelNode_SetMultiIndexWetness()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness;
UClass* UVoxelNode_SetMultiIndexWetness::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetMultiIndexWetness;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetMultiIndexWetness"),
			Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetMultiIndexWetness,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_NoRegister()
{
	return UVoxelNode_SetMultiIndexWetness::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the multi index wetness as that position, between 0 and 1. Wetness can be queried using the GetMultiIndexWetness material function in your shader.\n" },
#endif
		{ "DisplayName", "Set Multi Index Wetness" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the multi index wetness as that position, between 0 and 1. Wetness can be queried using the GetMultiIndexWetness material function in your shader." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetMultiIndexWetness>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::ClassParams = {
	&UVoxelNode_SetMultiIndexWetness::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetMultiIndexWetness);
UVoxelNode_SetMultiIndexWetness::~UVoxelNode_SetMultiIndexWetness() {}
// ********** End Class UVoxelNode_SetMultiIndexWetness ********************************************

// ********** Begin Class UVoxelNode_AddMultiIndex *************************************************
void UVoxelNode_AddMultiIndex::StaticRegisterNativesUVoxelNode_AddMultiIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex;
UClass* UVoxelNode_AddMultiIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_AddMultiIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_AddMultiIndex"),
			Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_AddMultiIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex_NoRegister()
{
	return UVoxelNode_AddMultiIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add multi index with the specified strength\n// The strength will be normalized according to the other strengths set, except if Lock Strength is true\n" },
#endif
		{ "DisplayName", "Add Multi Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add multi index with the specified strength\nThe strength will be normalized according to the other strengths set, except if Lock Strength is true" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_AddMultiIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::ClassParams = {
	&UVoxelNode_AddMultiIndex::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_AddMultiIndex);
UVoxelNode_AddMultiIndex::~UVoxelNode_AddMultiIndex() {}
// ********** End Class UVoxelNode_AddMultiIndex ***************************************************

// ********** Begin Class UVoxelNode_SetUVs ********************************************************
void UVoxelNode_SetUVs::StaticRegisterNativesUVoxelNode_SetUVs()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetUVs;
UClass* UVoxelNode_SetUVs::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetUVs;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetUVs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetUVs"),
			Z_Registration_Info_UClass_UVoxelNode_SetUVs.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetUVs,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetUVs.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetUVs_NoRegister()
{
	return UVoxelNode_SetUVs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetUVs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the material additional UVs channels\n// By default the plugin has 2 UV channels that can be queried using TexCoord[1] and TexCoord[2] in the material\n// Values should be between 0.f and 1.f\n// Index should be 0 or 1 (or 2/3 if you enabled them in VoxelUserDefinitions.h)\n// UVs 0 and 1 will not be set in MultiIndex!\n" },
#endif
		{ "DisplayName", "Set UV Channel" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the material additional UVs channels\nBy default the plugin has 2 UV channels that can be queried using TexCoord[1] and TexCoord[2] in the material\nValues should be between 0.f and 1.f\nIndex should be 0 or 1 (or 2/3 if you enabled them in VoxelUserDefinitions.h)\nUVs 0 and 1 will not be set in MultiIndex!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetU_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSetU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetU;
	static void NewProp_bSetV_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetUVs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_SetBit(void* Obj)
{
	((UVoxelNode_SetUVs*)Obj)->bSetU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU = { "bSetU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_SetUVs), &Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetU_MetaData), NewProp_bSetU_MetaData) };
void Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_SetBit(void* Obj)
{
	((UVoxelNode_SetUVs*)Obj)->bSetV = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV = { "bSetV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_SetUVs), &Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetV_MetaData), NewProp_bSetV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_SetUVs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetUVs_Statics::ClassParams = {
	&UVoxelNode_SetUVs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetUVs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetUVs()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetUVs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetUVs.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetUVs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetUVs.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetUVs);
UVoxelNode_SetUVs::~UVoxelNode_SetUVs() {}
// ********** End Class UVoxelNode_SetUVs **********************************************************

// ********** Begin Class UVoxelNode_SetNode *******************************************************
void UVoxelNode_SetNode::StaticRegisterNativesUVoxelNode_SetNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetNode;
UClass* UVoxelNode_SetNode::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetNode;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetNode"),
			Z_Registration_Info_UClass_UVoxelNode_SetNode.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetNode,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetNode_NoRegister()
{
	return UVoxelNode_SetNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Set Node" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOutput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_SetNode, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput = { "CachedOutput", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_SetNode, CachedOutput), Z_Construct_UScriptStruct_FVoxelGraphOutput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedOutput_MetaData), NewProp_CachedOutput_MetaData) }; // 506689577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_SetNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSetterNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetNode_Statics::ClassParams = {
	&UVoxelNode_SetNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers),
	0,
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetNode()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetNode.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetNode);
UVoxelNode_SetNode::~UVoxelNode_SetNode() {}
// ********** End Class UVoxelNode_SetNode *********************************************************

// ********** Begin Class UVoxelNode_SetValueNode **************************************************
void UVoxelNode_SetValueNode::StaticRegisterNativesUVoxelNode_SetValueNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetValueNode;
UClass* UVoxelNode_SetValueNode::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetValueNode;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetValueNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetValueNode"),
			Z_Registration_Info_UClass_UVoxelNode_SetValueNode.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetValueNode,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetValueNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetValueNode_NoRegister()
{
	return UVoxelNode_SetValueNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetValueNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetValueNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_SetNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::ClassParams = {
	&UVoxelNode_SetValueNode::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetValueNode()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetValueNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetValueNode.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetValueNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetValueNode);
UVoxelNode_SetValueNode::~UVoxelNode_SetValueNode() {}
// ********** End Class UVoxelNode_SetValueNode ****************************************************

// ********** Begin Class UVoxelNode_FunctionSeparator *********************************************
void UVoxelNode_FunctionSeparator::StaticRegisterNativesUVoxelNode_FunctionSeparator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator;
UClass* UVoxelNode_FunctionSeparator::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FunctionSeparator;
	if (!Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FunctionSeparator"),
			Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FunctionSeparator,
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
	return Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator_NoRegister()
{
	return UVoxelNode_FunctionSeparator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Break the graph into multiple functions\n" },
#endif
		{ "DisplayName", "Function Separator" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Break the graph into multiple functions" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FunctionSeparator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::ClassParams = {
	&UVoxelNode_FunctionSeparator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator.OuterSingleton, Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FunctionSeparator);
UVoxelNode_FunctionSeparator::~UVoxelNode_FunctionSeparator() {}
// ********** End Class UVoxelNode_FunctionSeparator ***********************************************

// ********** Begin Class UVoxelNode_FlowMerge *****************************************************
void UVoxelNode_FlowMerge::StaticRegisterNativesUVoxelNode_FlowMerge()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FlowMerge;
UClass* UVoxelNode_FlowMerge::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FlowMerge;
	if (!Z_Registration_Info_UClass_UVoxelNode_FlowMerge.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FlowMerge"),
			Z_Registration_Info_UClass_UVoxelNode_FlowMerge.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FlowMerge,
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
	return Z_Registration_Info_UClass_UVoxelNode_FlowMerge.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FlowMerge_NoRegister()
{
	return UVoxelNode_FlowMerge::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FlowMerge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Merges exec flow\n" },
#endif
		{ "DisplayName", "Flow Merge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merges exec flow" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Types_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FlowMerge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelNamedDataPin, METADATA_PARAMS(0, nullptr) }; // 1855088112
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_FlowMerge, Types), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Types_MetaData), NewProp_Types_MetaData) }; // 1855088112
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::ClassParams = {
	&UVoxelNode_FlowMerge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FlowMerge()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FlowMerge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FlowMerge.OuterSingleton, Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FlowMerge.OuterSingleton;
}
UVoxelNode_FlowMerge::UVoxelNode_FlowMerge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FlowMerge);
UVoxelNode_FlowMerge::~UVoxelNode_FlowMerge() {}
// ********** End Class UVoxelNode_FlowMerge *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExecNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_MaterialSetter, UVoxelNode_MaterialSetter::StaticClass, TEXT("UVoxelNode_MaterialSetter"), &Z_Registration_Info_UClass_UVoxelNode_MaterialSetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MaterialSetter), 3609298613U) },
		{ Z_Construct_UClass_UVoxelNode_SetColor, UVoxelNode_SetColor::StaticClass, TEXT("UVoxelNode_SetColor"), &Z_Registration_Info_UClass_UVoxelNode_SetColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetColor), 3437571939U) },
		{ Z_Construct_UClass_UVoxelNode_SetSingleIndex, UVoxelNode_SetSingleIndex::StaticClass, TEXT("UVoxelNode_SetSingleIndex"), &Z_Registration_Info_UClass_UVoxelNode_SetSingleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetSingleIndex), 3856460249U) },
		{ Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness, UVoxelNode_SetMultiIndexWetness::StaticClass, TEXT("UVoxelNode_SetMultiIndexWetness"), &Z_Registration_Info_UClass_UVoxelNode_SetMultiIndexWetness, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetMultiIndexWetness), 3841159980U) },
		{ Z_Construct_UClass_UVoxelNode_AddMultiIndex, UVoxelNode_AddMultiIndex::StaticClass, TEXT("UVoxelNode_AddMultiIndex"), &Z_Registration_Info_UClass_UVoxelNode_AddMultiIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_AddMultiIndex), 3568283014U) },
		{ Z_Construct_UClass_UVoxelNode_SetUVs, UVoxelNode_SetUVs::StaticClass, TEXT("UVoxelNode_SetUVs"), &Z_Registration_Info_UClass_UVoxelNode_SetUVs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetUVs), 54584172U) },
		{ Z_Construct_UClass_UVoxelNode_SetNode, UVoxelNode_SetNode::StaticClass, TEXT("UVoxelNode_SetNode"), &Z_Registration_Info_UClass_UVoxelNode_SetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetNode), 2489698854U) },
		{ Z_Construct_UClass_UVoxelNode_SetValueNode, UVoxelNode_SetValueNode::StaticClass, TEXT("UVoxelNode_SetValueNode"), &Z_Registration_Info_UClass_UVoxelNode_SetValueNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetValueNode), 3940049231U) },
		{ Z_Construct_UClass_UVoxelNode_FunctionSeparator, UVoxelNode_FunctionSeparator::StaticClass, TEXT("UVoxelNode_FunctionSeparator"), &Z_Registration_Info_UClass_UVoxelNode_FunctionSeparator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FunctionSeparator), 1080609669U) },
		{ Z_Construct_UClass_UVoxelNode_FlowMerge, UVoxelNode_FlowMerge::StaticClass, TEXT("UVoxelNode_FlowMerge"), &Z_Registration_Info_UClass_UVoxelNode_FlowMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FlowMerge), 2442624193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExecNodes_h__Script_VoxelGraph_27626682(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExecNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelExecNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
