// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryVoxelMeshImporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorFactoryVoxelMeshImporter() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorFactoryVoxelMeshImporter *******************************************
void UActorFactoryVoxelMeshImporter::StaticRegisterNativesUActorFactoryVoxelMeshImporter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter;
UClass* UActorFactoryVoxelMeshImporter::GetPrivateStaticClass()
{
	using TClass = UActorFactoryVoxelMeshImporter;
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorFactoryVoxelMeshImporter"),
			Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter.InnerSingleton,
			StaticRegisterNativesUActorFactoryVoxelMeshImporter,
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
	return Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter_NoRegister()
{
	return UActorFactoryVoxelMeshImporter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelMeshImporter.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelMeshImporter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelMeshImporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::ClassParams = {
	&UActorFactoryVoxelMeshImporter::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryVoxelMeshImporter()
{
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter.OuterSingleton, Z_Construct_UClass_UActorFactoryVoxelMeshImporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelMeshImporter);
UActorFactoryVoxelMeshImporter::~UActorFactoryVoxelMeshImporter() {}
// ********** End Class UActorFactoryVoxelMeshImporter *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelMeshImporter_h__Script_VoxelEditorDefault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVoxelMeshImporter, UActorFactoryVoxelMeshImporter::StaticClass, TEXT("UActorFactoryVoxelMeshImporter"), &Z_Registration_Info_UClass_UActorFactoryVoxelMeshImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVoxelMeshImporter), 3286571605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelMeshImporter_h__Script_VoxelEditorDefault_813589387(TEXT("/Script/VoxelEditorDefault"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelMeshImporter_h__Script_VoxelEditorDefault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelMeshImporter_h__Script_VoxelEditorDefault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
