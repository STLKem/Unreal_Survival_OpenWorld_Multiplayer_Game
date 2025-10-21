// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CraftingParent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCraftingParent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_ACraftingParent();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_ACraftingParent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACraftingParent **********************************************************
void ACraftingParent::StaticRegisterNativesACraftingParent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACraftingParent;
UClass* ACraftingParent::GetPrivateStaticClass()
{
	using TClass = ACraftingParent;
	if (!Z_Registration_Info_UClass_ACraftingParent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CraftingParent"),
			Z_Registration_Info_UClass_ACraftingParent.InnerSingleton,
			StaticRegisterNativesACraftingParent,
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
	return Z_Registration_Info_UClass_ACraftingParent.InnerSingleton;
}
UClass* Z_Construct_UClass_ACraftingParent_NoRegister()
{
	return ACraftingParent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACraftingParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CraftingParent.h" },
		{ "ModuleRelativePath", "Public/CraftingParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecipesDataTable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/CraftingParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsDataTable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/CraftingParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "CraftingParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CraftingParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "CraftingParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CraftingParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "CraftingParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CraftingParent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecipesDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACraftingParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingParent_Statics::NewProp_RecipesDataTable = { "RecipesDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACraftingParent, RecipesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecipesDataTable_MetaData), NewProp_RecipesDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingParent_Statics::NewProp_ItemsDataTable = { "ItemsDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACraftingParent, ItemsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsDataTable_MetaData), NewProp_ItemsDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingParent_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACraftingParent, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingParent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACraftingParent, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingParent_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACraftingParent, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACraftingParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingParent_Statics::NewProp_RecipesDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingParent_Statics::NewProp_ItemsDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingParent_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingParent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingParent_Statics::NewProp_BoxComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingParent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACraftingParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACraftingParent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMainInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ACraftingParent, IMainInteractInterface), false },  // 2541149928
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACraftingParent_Statics::ClassParams = {
	&ACraftingParent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACraftingParent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingParent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingParent_Statics::Class_MetaDataParams), Z_Construct_UClass_ACraftingParent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACraftingParent()
{
	if (!Z_Registration_Info_UClass_ACraftingParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACraftingParent.OuterSingleton, Z_Construct_UClass_ACraftingParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACraftingParent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACraftingParent);
ACraftingParent::~ACraftingParent() {}
// ********** End Class ACraftingParent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_CraftingParent_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACraftingParent, ACraftingParent::StaticClass, TEXT("ACraftingParent"), &Z_Registration_Info_UClass_ACraftingParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACraftingParent), 1940447161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_CraftingParent_h__Script_ProjectDeliveryHell_2901632133(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_CraftingParent_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_CraftingParent_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
