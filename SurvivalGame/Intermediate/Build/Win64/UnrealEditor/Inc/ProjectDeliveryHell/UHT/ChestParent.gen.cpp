// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChestParent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeChestParent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AChestParent();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AChestParent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AChestParent *************************************************************
void AChestParent::StaticRegisterNativesAChestParent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AChestParent;
UClass* AChestParent::GetPrivateStaticClass()
{
	using TClass = AChestParent;
	if (!Z_Registration_Info_UClass_AChestParent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ChestParent"),
			Z_Registration_Info_UClass_AChestParent.InnerSingleton,
			StaticRegisterNativesAChestParent,
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
	return Z_Registration_Info_UClass_AChestParent.InnerSingleton;
}
UClass* Z_Construct_UClass_AChestParent_NoRegister()
{
	return AChestParent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AChestParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChestParent.h" },
		{ "ModuleRelativePath", "Public/ChestParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "ChestParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChestParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "ChestParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChestParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "ChestParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChestParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "ChestParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChestParent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChestParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChestParent_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChestParent, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChestParent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChestParent, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChestParent_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChestParent, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChestParent_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChestParent, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChestParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChestParent_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChestParent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChestParent_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChestParent_Statics::NewProp_InventoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChestParent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AChestParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChestParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChestParent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMainInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AChestParent, IMainInteractInterface), false },  // 2541149928
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AChestParent_Statics::ClassParams = {
	&AChestParent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AChestParent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AChestParent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChestParent_Statics::Class_MetaDataParams), Z_Construct_UClass_AChestParent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AChestParent()
{
	if (!Z_Registration_Info_UClass_AChestParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChestParent.OuterSingleton, Z_Construct_UClass_AChestParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AChestParent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AChestParent);
AChestParent::~AChestParent() {}
// ********** End Class AChestParent ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ChestParent_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AChestParent, AChestParent::StaticClass, TEXT("AChestParent"), &Z_Registration_Info_UClass_AChestParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChestParent), 1808669563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ChestParent_h__Script_ProjectDeliveryHell_1894967592(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ChestParent_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ChestParent_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
