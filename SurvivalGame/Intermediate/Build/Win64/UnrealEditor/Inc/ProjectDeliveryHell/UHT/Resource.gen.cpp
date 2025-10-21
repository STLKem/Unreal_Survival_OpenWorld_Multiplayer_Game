// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Resource.h"
#include "Engine/DataTable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeResource() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AResource();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AResource_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AResource Function MineResource ******************************************
struct Z_Construct_UFunction_AResource_MineResource_Statics
{
	struct Resource_eventMineResource_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AResource_MineResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Resource_eventMineResource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AResource_MineResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AResource_MineResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_MineResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AResource_MineResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AResource, nullptr, "MineResource", Z_Construct_UFunction_AResource_MineResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_MineResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AResource_MineResource_Statics::Resource_eventMineResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AResource_MineResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AResource_MineResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AResource_MineResource_Statics::Resource_eventMineResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AResource_MineResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AResource_MineResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AResource::execMineResource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->MineResource();
	P_NATIVE_END;
}
// ********** End Class AResource Function MineResource ********************************************

// ********** Begin Class AResource ****************************************************************
void AResource::StaticRegisterNativesAResource()
{
	UClass* Class = AResource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MineResource", &AResource::execMineResource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AResource;
UClass* AResource::GetPrivateStaticClass()
{
	using TClass = AResource;
	if (!Z_Registration_Info_UClass_AResource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Resource"),
			Z_Registration_Info_UClass_AResource.InnerSingleton,
			StaticRegisterNativesAResource,
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
	return Z_Registration_Info_UClass_AResource.InnerSingleton;
}
UClass* Z_Construct_UClass_AResource_NoRegister()
{
	return AResource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Resource.h" },
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceItem_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingAmount_MetaData[] = {
		{ "Category", "Resource" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*ReplicatedUsing = OnRep_Remaining*/" },
#endif
		{ "ModuleRelativePath", "Public/Resource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReplicatedUsing = OnRep_Remaining" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToAdd_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "Resource" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Resource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResourceItem;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToAdd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AResource_MineResource, "MineResource" }, // 1855182033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_ResourceItem = { "ResourceItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, ResourceItem), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceItem_MetaData), NewProp_ResourceItem_MetaData) }; // 4101738896
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_RemainingAmount = { "RemainingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, RemainingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingAmount_MetaData), NewProp_RemainingAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_AmountToAdd = { "AmountToAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, AmountToAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToAdd_MetaData), NewProp_AmountToAdd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_ResourceItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_RemainingAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_AmountToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AResource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AResource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMainInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AResource, IMainInteractInterface), false },  // 2541149928
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AResource_Statics::ClassParams = {
	&AResource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AResource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_Statics::Class_MetaDataParams), Z_Construct_UClass_AResource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AResource()
{
	if (!Z_Registration_Info_UClass_AResource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResource.OuterSingleton, Z_Construct_UClass_AResource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AResource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AResource);
AResource::~AResource() {}
// ********** End Class AResource ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_Resource_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AResource, AResource::StaticClass, TEXT("AResource"), &Z_Registration_Info_UClass_AResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResource), 3389352549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_Resource_h__Script_ProjectDeliveryHell_2384935094(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_Resource_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_Resource_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
