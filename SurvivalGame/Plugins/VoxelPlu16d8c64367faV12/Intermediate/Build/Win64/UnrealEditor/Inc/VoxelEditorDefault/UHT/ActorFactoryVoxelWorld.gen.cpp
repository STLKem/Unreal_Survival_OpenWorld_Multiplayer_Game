// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryVoxelWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorFactoryVoxelWorld() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelWorld();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelWorld_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorFactoryVoxelWorld **************************************************
void UActorFactoryVoxelWorld::StaticRegisterNativesUActorFactoryVoxelWorld()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryVoxelWorld;
UClass* UActorFactoryVoxelWorld::GetPrivateStaticClass()
{
	using TClass = UActorFactoryVoxelWorld;
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorFactoryVoxelWorld"),
			Z_Registration_Info_UClass_UActorFactoryVoxelWorld.InnerSingleton,
			StaticRegisterNativesUActorFactoryVoxelWorld,
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
	return Z_Registration_Info_UClass_UActorFactoryVoxelWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryVoxelWorld_NoRegister()
{
	return UActorFactoryVoxelWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryVoxelWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelWorld.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelWorld.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::ClassParams = {
	&UActorFactoryVoxelWorld::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryVoxelWorld()
{
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVoxelWorld.OuterSingleton, Z_Construct_UClass_UActorFactoryVoxelWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryVoxelWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelWorld);
UActorFactoryVoxelWorld::~UActorFactoryVoxelWorld() {}
// ********** End Class UActorFactoryVoxelWorld ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h__Script_VoxelEditorDefault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVoxelWorld, UActorFactoryVoxelWorld::StaticClass, TEXT("UActorFactoryVoxelWorld"), &Z_Registration_Info_UClass_UActorFactoryVoxelWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVoxelWorld), 2839829566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h__Script_VoxelEditorDefault_1360169578(TEXT("/Script/VoxelEditorDefault"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h__Script_VoxelEditorDefault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelWorld_h__Script_VoxelEditorDefault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
