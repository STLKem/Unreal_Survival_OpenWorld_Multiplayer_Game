// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_LayeredWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_LayeredWorld() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_LayeredWorld();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_LayeredWorld_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_LayeredWorld ***********************************************
void UVoxelExample_LayeredWorld::StaticRegisterNativesUVoxelExample_LayeredWorld()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_LayeredWorld;
UClass* UVoxelExample_LayeredWorld::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_LayeredWorld;
	if (!Z_Registration_Info_UClass_UVoxelExample_LayeredWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_LayeredWorld"),
			Z_Registration_Info_UClass_UVoxelExample_LayeredWorld.InnerSingleton,
			StaticRegisterNativesUVoxelExample_LayeredWorld,
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
	return Z_Registration_Info_UClass_UVoxelExample_LayeredWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_LayeredWorld_NoRegister()
{
	return UVoxelExample_LayeredWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_LayeredWorld.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_None1_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_None1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_LayeredWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_LayeredWorld, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::NewProp_None1 = { "None1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_LayeredWorld, None1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_None1_MetaData), NewProp_None1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_LayeredWorld, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::NewProp_None1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::ClassParams = {
	&UVoxelExample_LayeredWorld::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_LayeredWorld()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_LayeredWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_LayeredWorld.OuterSingleton, Z_Construct_UClass_UVoxelExample_LayeredWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_LayeredWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_LayeredWorld);
UVoxelExample_LayeredWorld::~UVoxelExample_LayeredWorld() {}
// ********** End Class UVoxelExample_LayeredWorld *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredWorld_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_LayeredWorld, UVoxelExample_LayeredWorld::StaticClass, TEXT("UVoxelExample_LayeredWorld"), &Z_Registration_Info_UClass_UVoxelExample_LayeredWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_LayeredWorld), 938453093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredWorld_h__Script_VoxelGraph_3079045040(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredWorld_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredWorld_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
