// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacingBlockParent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlacingBlockParent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_APlacingBlockParent();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_APlacingBlockParent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBlocksInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlacingBlockParent ******************************************************
void APlacingBlockParent::StaticRegisterNativesAPlacingBlockParent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlacingBlockParent;
UClass* APlacingBlockParent::GetPrivateStaticClass()
{
	using TClass = APlacingBlockParent;
	if (!Z_Registration_Info_UClass_APlacingBlockParent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlacingBlockParent"),
			Z_Registration_Info_UClass_APlacingBlockParent.InnerSingleton,
			StaticRegisterNativesAPlacingBlockParent,
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
	return Z_Registration_Info_UClass_APlacingBlockParent.InnerSingleton;
}
UClass* Z_Construct_UClass_APlacingBlockParent_NoRegister()
{
	return APlacingBlockParent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlacingBlockParent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlacingBlockParent.h" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isPlaced_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "PlacingBlockParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCompOne_MetaData[] = {
		{ "Category", "PlacingBlockParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCompTwo_MetaData[] = {
		{ "Category", "PlacingBlockParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCompThree_MetaData[] = {
		{ "Category", "PlacingBlockParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCompFour_MetaData[] = {
		{ "Category", "PlacingBlockParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCompFive_MetaData[] = {
		{ "Category", "PlacingBlockParent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlacingBlockParent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isPlaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isPlaced;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCompOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCompTwo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCompThree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCompFour;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCompFive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlacingBlockParent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_isPlaced_SetBit(void* Obj)
{
	((APlacingBlockParent*)Obj)->isPlaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_isPlaced = { "isPlaced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlacingBlockParent), &Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_isPlaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isPlaced_MetaData), NewProp_isPlaced_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, MeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompOne = { "BoxCompOne", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, BoxCompOne), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCompOne_MetaData), NewProp_BoxCompOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompTwo = { "BoxCompTwo", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, BoxCompTwo), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCompTwo_MetaData), NewProp_BoxCompTwo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompThree = { "BoxCompThree", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, BoxCompThree), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCompThree_MetaData), NewProp_BoxCompThree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompFour = { "BoxCompFour", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, BoxCompFour), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCompFour_MetaData), NewProp_BoxCompFour_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompFive = { "BoxCompFive", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlacingBlockParent, BoxCompFive), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCompFive_MetaData), NewProp_BoxCompFive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlacingBlockParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_isPlaced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompThree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompFour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacingBlockParent_Statics::NewProp_BoxCompFive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlacingBlockParent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlacingBlockParent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlacingBlockParent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlacingBlockParent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBlocksInterface_NoRegister, (int32)VTABLE_OFFSET(APlacingBlockParent, IBlocksInterface), false },  // 3769490843
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlacingBlockParent_Statics::ClassParams = {
	&APlacingBlockParent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlacingBlockParent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlacingBlockParent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlacingBlockParent_Statics::Class_MetaDataParams), Z_Construct_UClass_APlacingBlockParent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlacingBlockParent()
{
	if (!Z_Registration_Info_UClass_APlacingBlockParent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlacingBlockParent.OuterSingleton, Z_Construct_UClass_APlacingBlockParent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlacingBlockParent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlacingBlockParent);
APlacingBlockParent::~APlacingBlockParent() {}
// ********** End Class APlacingBlockParent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_PlacingBlockParent_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlacingBlockParent, APlacingBlockParent::StaticClass, TEXT("APlacingBlockParent"), &Z_Registration_Info_UClass_APlacingBlockParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlacingBlockParent), 1812083935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_PlacingBlockParent_h__Script_ProjectDeliveryHell_3615260993(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_PlacingBlockParent_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_PlacingBlockParent_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
