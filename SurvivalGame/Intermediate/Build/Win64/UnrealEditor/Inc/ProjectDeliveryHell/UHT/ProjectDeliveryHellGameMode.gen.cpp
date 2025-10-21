// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDeliveryHellGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectDeliveryHellGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AProjectDeliveryHellGameMode();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AProjectDeliveryHellGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AProjectDeliveryHellGameMode *********************************************
void AProjectDeliveryHellGameMode::StaticRegisterNativesAProjectDeliveryHellGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectDeliveryHellGameMode;
UClass* AProjectDeliveryHellGameMode::GetPrivateStaticClass()
{
	using TClass = AProjectDeliveryHellGameMode;
	if (!Z_Registration_Info_UClass_AProjectDeliveryHellGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectDeliveryHellGameMode"),
			Z_Registration_Info_UClass_AProjectDeliveryHellGameMode.InnerSingleton,
			StaticRegisterNativesAProjectDeliveryHellGameMode,
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
	return Z_Registration_Info_UClass_AProjectDeliveryHellGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectDeliveryHellGameMode_NoRegister()
{
	return AProjectDeliveryHellGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectDeliveryHellGameMode.h" },
		{ "ModuleRelativePath", "ProjectDeliveryHellGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDeliveryHellGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics::ClassParams = {
	&AProjectDeliveryHellGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectDeliveryHellGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectDeliveryHellGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectDeliveryHellGameMode.OuterSingleton, Z_Construct_UClass_AProjectDeliveryHellGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectDeliveryHellGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDeliveryHellGameMode);
AProjectDeliveryHellGameMode::~AProjectDeliveryHellGameMode() {}
// ********** End Class AProjectDeliveryHellGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_ProjectDeliveryHellGameMode_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectDeliveryHellGameMode, AProjectDeliveryHellGameMode::StaticClass, TEXT("AProjectDeliveryHellGameMode"), &Z_Registration_Info_UClass_AProjectDeliveryHellGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectDeliveryHellGameMode), 3057771157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_ProjectDeliveryHellGameMode_h__Script_ProjectDeliveryHell_3780718254(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_ProjectDeliveryHellGameMode_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_ProjectDeliveryHellGameMode_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
