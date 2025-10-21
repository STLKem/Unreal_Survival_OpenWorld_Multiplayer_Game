// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Nodes/K2Node_AddDataItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeK2Node_AddDataItem() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UK2Node_AddDataItem();
VOXELEDITOR_API UClass* Z_Construct_UClass_UK2Node_AddDataItem_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_AddDataItem ******************************************************
void UK2Node_AddDataItem::StaticRegisterNativesUK2Node_AddDataItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_AddDataItem;
UClass* UK2Node_AddDataItem::GetPrivateStaticClass()
{
	using TClass = UK2Node_AddDataItem;
	if (!Z_Registration_Info_UClass_UK2Node_AddDataItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("K2Node_AddDataItem"),
			Z_Registration_Info_UClass_UK2Node_AddDataItem.InnerSingleton,
			StaticRegisterNativesUK2Node_AddDataItem,
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
	return Z_Registration_Info_UClass_UK2Node_AddDataItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_AddDataItem_NoRegister()
{
	return UK2Node_AddDataItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_AddDataItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Nodes/K2Node_AddDataItem.h" },
		{ "ModuleRelativePath", "Private/K2Nodes/K2Node_AddDataItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataItemConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/K2Nodes/K2Node_AddDataItem.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataItemConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AddDataItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig = { "DataItemConfig", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_AddDataItem, DataItemConfig), Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataItemConfig_MetaData), NewProp_DataItemConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddDataItem_Statics::NewProp_DataItemConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_AddDataItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AddDataItem_Statics::ClassParams = {
	&UK2Node_AddDataItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddDataItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_AddDataItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_AddDataItem()
{
	if (!Z_Registration_Info_UClass_UK2Node_AddDataItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AddDataItem.OuterSingleton, Z_Construct_UClass_UK2Node_AddDataItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_AddDataItem.OuterSingleton;
}
UK2Node_AddDataItem::UK2Node_AddDataItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AddDataItem);
UK2Node_AddDataItem::~UK2Node_AddDataItem() {}
// ********** End Class UK2Node_AddDataItem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_K2Nodes_K2Node_AddDataItem_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AddDataItem, UK2Node_AddDataItem::StaticClass, TEXT("UK2Node_AddDataItem"), &Z_Registration_Info_UClass_UK2Node_AddDataItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AddDataItem), 3439875466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_K2Nodes_K2Node_AddDataItem_h__Script_VoxelEditor_1808941026(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_K2Nodes_K2Node_AddDataItem_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_K2Nodes_K2Node_AddDataItem_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
