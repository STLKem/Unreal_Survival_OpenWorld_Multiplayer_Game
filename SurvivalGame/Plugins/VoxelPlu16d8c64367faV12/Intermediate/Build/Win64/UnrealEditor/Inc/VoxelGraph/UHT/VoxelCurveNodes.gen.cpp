// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelCurveNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelCurveNodes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Curve();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_Curve_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CurveColor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CurveColor_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_Curve *********************************************************
void UVoxelNode_Curve::StaticRegisterNativesUVoxelNode_Curve()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_Curve;
UClass* UVoxelNode_Curve::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_Curve;
	if (!Z_Registration_Info_UClass_UVoxelNode_Curve.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_Curve"),
			Z_Registration_Info_UClass_UVoxelNode_Curve.InnerSingleton,
			StaticRegisterNativesUVoxelNode_Curve,
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
	return Z_Registration_Info_UClass_UVoxelNode_Curve.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_Curve_NoRegister()
{
	return UVoxelNode_Curve::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_Curve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Curve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply a float curve\n" },
#endif
		{ "DisplayName", "Float Curve" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCurveNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a float curve" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
		{ "NonNull", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_Curve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_Curve, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_Curve_Statics::NewProp_Curve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_Curve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_Curve_Statics::ClassParams = {
	&UVoxelNode_Curve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_Curve_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_Curve_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_Curve()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_Curve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_Curve.OuterSingleton, Z_Construct_UClass_UVoxelNode_Curve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_Curve.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_Curve);
UVoxelNode_Curve::~UVoxelNode_Curve() {}
// ********** End Class UVoxelNode_Curve ***********************************************************

// ********** Begin Class UVoxelNode_CurveColor ****************************************************
void UVoxelNode_CurveColor::StaticRegisterNativesUVoxelNode_CurveColor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_CurveColor;
UClass* UVoxelNode_CurveColor::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_CurveColor;
	if (!Z_Registration_Info_UClass_UVoxelNode_CurveColor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_CurveColor"),
			Z_Registration_Info_UClass_UVoxelNode_CurveColor.InnerSingleton,
			StaticRegisterNativesUVoxelNode_CurveColor,
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
	return Z_Registration_Info_UClass_UVoxelNode_CurveColor.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_CurveColor_NoRegister()
{
	return UVoxelNode_CurveColor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_CurveColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Curve" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply a color curve\n// TODO option to output color\n" },
#endif
		{ "DisplayName", "Color Curve" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCurveNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a color curve\nTODO option to output color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCurveNodes.h" },
		{ "NonNull", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CurveColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_CurveColor, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CurveColor_Statics::NewProp_Curve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_CurveColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CurveColor_Statics::ClassParams = {
	&UVoxelNode_CurveColor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CurveColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_CurveColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_CurveColor()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_CurveColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_CurveColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_CurveColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_CurveColor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CurveColor);
UVoxelNode_CurveColor::~UVoxelNode_CurveColor() {}
// ********** End Class UVoxelNode_CurveColor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_Curve, UVoxelNode_Curve::StaticClass, TEXT("UVoxelNode_Curve"), &Z_Registration_Info_UClass_UVoxelNode_Curve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_Curve), 2272686144U) },
		{ Z_Construct_UClass_UVoxelNode_CurveColor, UVoxelNode_CurveColor::StaticClass, TEXT("UVoxelNode_CurveColor"), &Z_Registration_Info_UClass_UVoxelNode_CurveColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_CurveColor), 1914953442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h__Script_VoxelGraph_551381286(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCurveNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
