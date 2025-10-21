// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelExamples/Public/VoxelExamplesModule.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExamplesModule() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VoxelExamples();
VOXELEXAMPLES_API UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy();
VOXELEXAMPLES_API UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExamplesModuleDummy ************************************************
void UVoxelExamplesModuleDummy::StaticRegisterNativesUVoxelExamplesModuleDummy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExamplesModuleDummy;
UClass* UVoxelExamplesModuleDummy::GetPrivateStaticClass()
{
	using TClass = UVoxelExamplesModuleDummy;
	if (!Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExamplesModuleDummy"),
			Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.InnerSingleton,
			StaticRegisterNativesUVoxelExamplesModuleDummy,
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
	return Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy_NoRegister()
{
	return UVoxelExamplesModuleDummy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// UBT doesn't like not having any UObject in a module\n" },
		{ "IncludePath", "VoxelExamplesModule.h" },
		{ "ModuleRelativePath", "Public/VoxelExamplesModule.h" },
		{ "ToolTip", "UBT doesn't like not having any UObject in a module" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExamplesModuleDummy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelExamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::ClassParams = {
	&UVoxelExamplesModuleDummy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExamplesModuleDummy()
{
	if (!Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.OuterSingleton, Z_Construct_UClass_UVoxelExamplesModuleDummy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExamplesModuleDummy.OuterSingleton;
}
UVoxelExamplesModuleDummy::UVoxelExamplesModuleDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExamplesModuleDummy);
UVoxelExamplesModuleDummy::~UVoxelExamplesModuleDummy() {}
// ********** End Class UVoxelExamplesModuleDummy **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelExamples_Public_VoxelExamplesModule_h__Script_VoxelExamples_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExamplesModuleDummy, UVoxelExamplesModuleDummy::StaticClass, TEXT("UVoxelExamplesModuleDummy"), &Z_Registration_Info_UClass_UVoxelExamplesModuleDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExamplesModuleDummy), 1854181782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelExamples_Public_VoxelExamplesModule_h__Script_VoxelExamples_3406895804(TEXT("/Script/VoxelExamples"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelExamples_Public_VoxelExamplesModule_h__Script_VoxelExamples_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelExamples_Public_VoxelExamplesModule_h__Script_VoxelExamples_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
