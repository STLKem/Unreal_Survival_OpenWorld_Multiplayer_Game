// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelEmptyGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelEmptyGenerator() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyGenerator();
VOXEL_API UClass* Z_Construct_UClass_UVoxelEmptyGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelEmptyGenerator *****************************************************
void UVoxelEmptyGenerator::StaticRegisterNativesUVoxelEmptyGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelEmptyGenerator;
UClass* UVoxelEmptyGenerator::GetPrivateStaticClass()
{
	using TClass = UVoxelEmptyGenerator;
	if (!Z_Registration_Info_UClass_UVoxelEmptyGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelEmptyGenerator"),
			Z_Registration_Info_UClass_UVoxelEmptyGenerator.InnerSingleton,
			StaticRegisterNativesUVoxelEmptyGenerator,
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
	return Z_Registration_Info_UClass_UVoxelEmptyGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelEmptyGenerator_NoRegister()
{
	return UVoxelEmptyGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelEmptyGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Empty world, can be used to remove voxels\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelEmptyGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelEmptyGenerator.h" },
		{ "ToolTip", "Empty world, can be used to remove voxels" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEmptyGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelEmptyGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEmptyGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEmptyGenerator_Statics::ClassParams = {
	&UVoxelEmptyGenerator::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelEmptyGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelEmptyGenerator()
{
	if (!Z_Registration_Info_UClass_UVoxelEmptyGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelEmptyGenerator.OuterSingleton, Z_Construct_UClass_UVoxelEmptyGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelEmptyGenerator.OuterSingleton;
}
UVoxelEmptyGenerator::UVoxelEmptyGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEmptyGenerator);
UVoxelEmptyGenerator::~UVoxelEmptyGenerator() {}
// ********** End Class UVoxelEmptyGenerator *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelEmptyGenerator, UVoxelEmptyGenerator::StaticClass, TEXT("UVoxelEmptyGenerator"), &Z_Registration_Info_UClass_UVoxelEmptyGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelEmptyGenerator), 509965157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h__Script_Voxel_2720424714(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelEmptyGenerator_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
