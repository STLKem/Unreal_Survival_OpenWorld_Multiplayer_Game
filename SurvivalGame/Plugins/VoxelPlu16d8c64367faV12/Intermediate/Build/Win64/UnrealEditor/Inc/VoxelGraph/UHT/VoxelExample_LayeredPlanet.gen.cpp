// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_LayeredPlanet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_LayeredPlanet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_LayeredPlanet **********************************************
void UVoxelExample_LayeredPlanet::StaticRegisterNativesUVoxelExample_LayeredPlanet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet;
UClass* UVoxelExample_LayeredPlanet::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_LayeredPlanet;
	if (!Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_LayeredPlanet"),
			Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.InnerSingleton,
			StaticRegisterNativesUVoxelExample_LayeredPlanet,
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
	return Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet_NoRegister()
{
	return UVoxelExample_LayeredPlanet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_LayeredPlanet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_None1_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slice_Mode_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Slice Mode" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_LayeredPlanet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_None1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_Slice_Mode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Slice_Mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_LayeredPlanet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_LayeredPlanet, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1 = { "None1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_LayeredPlanet, None1), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_None1_MetaData), NewProp_None1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_LayeredPlanet, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_SetBit(void* Obj)
{
	((UVoxelExample_LayeredPlanet*)Obj)->Slice_Mode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode = { "Slice_Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelExample_LayeredPlanet), &Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slice_Mode_MetaData), NewProp_Slice_Mode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_None1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::NewProp_Slice_Mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::ClassParams = {
	&UVoxelExample_LayeredPlanet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_LayeredPlanet()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.OuterSingleton, Z_Construct_UClass_UVoxelExample_LayeredPlanet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_LayeredPlanet);
UVoxelExample_LayeredPlanet::~UVoxelExample_LayeredPlanet() {}
// ********** End Class UVoxelExample_LayeredPlanet ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_LayeredPlanet, UVoxelExample_LayeredPlanet::StaticClass, TEXT("UVoxelExample_LayeredPlanet"), &Z_Registration_Info_UClass_UVoxelExample_LayeredPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_LayeredPlanet), 2513218853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h__Script_VoxelGraph_836605355(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_LayeredPlanet_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
