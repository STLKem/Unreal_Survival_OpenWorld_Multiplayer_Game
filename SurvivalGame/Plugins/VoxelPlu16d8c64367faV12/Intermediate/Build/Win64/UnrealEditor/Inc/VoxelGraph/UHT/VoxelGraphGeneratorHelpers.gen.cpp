// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphGeneratorHelpers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphGeneratorHelpers() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphGeneratorHelper ***********************************************
void UVoxelGraphGeneratorHelper::StaticRegisterNativesUVoxelGraphGeneratorHelper()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper;
UClass* UVoxelGraphGeneratorHelper::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphGeneratorHelper;
	if (!Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphGeneratorHelper"),
			Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper.InnerSingleton,
			StaticRegisterNativesUVoxelGraphGeneratorHelper,
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
	return Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper_NoRegister()
{
	return UVoxelGraphGeneratorHelper::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphGeneratorHelpers.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGeneratorHelpers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRangeAnalysis_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Range analysis gives a pretty significant speed-up. You should not disable it\n" },
#endif
		{ "HideInGenerator", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphGeneratorHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range analysis gives a pretty significant speed-up. You should not disable it" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableRangeAnalysis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRangeAnalysis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGeneratorHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_SetBit(void* Obj)
{
	((UVoxelGraphGeneratorHelper*)Obj)->bEnableRangeAnalysis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis = { "bEnableRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphGeneratorHelper), &Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRangeAnalysis_MetaData), NewProp_bEnableRangeAnalysis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::NewProp_bEnableRangeAnalysis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::ClassParams = {
	&UVoxelGraphGeneratorHelper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper.OuterSingleton, Z_Construct_UClass_UVoxelGraphGeneratorHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper.OuterSingleton;
}
UVoxelGraphGeneratorHelper::UVoxelGraphGeneratorHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGeneratorHelper);
UVoxelGraphGeneratorHelper::~UVoxelGraphGeneratorHelper() {}
// ********** End Class UVoxelGraphGeneratorHelper *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphGeneratorHelpers_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphGeneratorHelper, UVoxelGraphGeneratorHelper::StaticClass, TEXT("UVoxelGraphGeneratorHelper"), &Z_Registration_Info_UClass_UVoxelGraphGeneratorHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphGeneratorHelper), 3207923522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphGeneratorHelpers_h__Script_VoxelGraph_3787599624(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphGeneratorHelpers_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphGeneratorHelpers_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
