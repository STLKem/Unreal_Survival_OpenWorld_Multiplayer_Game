// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VG_Example_Craters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVG_Example_Craters() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Craters();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Craters_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVG_Example_Craters ******************************************************
void UVG_Example_Craters::StaticRegisterNativesUVG_Example_Craters()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVG_Example_Craters;
UClass* UVG_Example_Craters::GetPrivateStaticClass()
{
	using TClass = UVG_Example_Craters;
	if (!Z_Registration_Info_UClass_UVG_Example_Craters.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VG_Example_Craters"),
			Z_Registration_Info_UClass_UVG_Example_Craters.InnerSingleton,
			StaticRegisterNativesUVG_Example_Craters,
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
	return Z_Registration_Info_UClass_UVG_Example_Craters.InnerSingleton;
}
UClass* Z_Construct_UClass_UVG_Example_Craters_NoRegister()
{
	return UVG_Example_Craters::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVG_Example_Craters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Craters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Craters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Craters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Craters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Craters, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Craters_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVG_Example_Craters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Craters_Statics::ClassParams = {
	&UVG_Example_Craters::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Craters_Statics::Class_MetaDataParams), Z_Construct_UClass_UVG_Example_Craters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVG_Example_Craters()
{
	if (!Z_Registration_Info_UClass_UVG_Example_Craters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_Craters.OuterSingleton, Z_Construct_UClass_UVG_Example_Craters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVG_Example_Craters.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Craters);
UVG_Example_Craters::~UVG_Example_Craters() {}
// ********** End Class UVG_Example_Craters ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_Craters, UVG_Example_Craters::StaticClass, TEXT("UVG_Example_Craters"), &Z_Registration_Info_UClass_UVG_Example_Craters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_Craters), 2473050727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h__Script_VoxelGraph_878774569(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Craters_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
