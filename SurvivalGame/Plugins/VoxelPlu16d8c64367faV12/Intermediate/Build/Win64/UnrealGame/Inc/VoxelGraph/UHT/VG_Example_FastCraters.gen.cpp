// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VG_Example_FastCraters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVG_Example_FastCraters() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_FastCraters();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_FastCraters_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVG_Example_FastCraters **************************************************
void UVG_Example_FastCraters::StaticRegisterNativesUVG_Example_FastCraters()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVG_Example_FastCraters;
UClass* UVG_Example_FastCraters::GetPrivateStaticClass()
{
	using TClass = UVG_Example_FastCraters;
	if (!Z_Registration_Info_UClass_UVG_Example_FastCraters.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VG_Example_FastCraters"),
			Z_Registration_Info_UClass_UVG_Example_FastCraters.InnerSingleton,
			StaticRegisterNativesUVG_Example_FastCraters,
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
	return Z_Registration_Info_UClass_UVG_Example_FastCraters.InnerSingleton;
}
UClass* Z_Construct_UClass_UVG_Example_FastCraters_NoRegister()
{
	return UVG_Example_FastCraters::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVG_Example_FastCraters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_FastCraters.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_FastCraters.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_FastCraters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVG_Example_FastCraters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_FastCraters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_FastCraters_Statics::ClassParams = {
	&UVG_Example_FastCraters::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams), Z_Construct_UClass_UVG_Example_FastCraters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVG_Example_FastCraters()
{
	if (!Z_Registration_Info_UClass_UVG_Example_FastCraters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_FastCraters.OuterSingleton, Z_Construct_UClass_UVG_Example_FastCraters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVG_Example_FastCraters.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_FastCraters);
UVG_Example_FastCraters::~UVG_Example_FastCraters() {}
// ********** End Class UVG_Example_FastCraters ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_FastCraters, UVG_Example_FastCraters::StaticClass, TEXT("UVG_Example_FastCraters"), &Z_Registration_Info_UClass_UVG_Example_FastCraters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_FastCraters), 578591645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h__Script_VoxelGraph_344162559(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_FastCraters_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
