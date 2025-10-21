// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DummyObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDummyObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDEPRECATED_GraphEditorDummyObject ***************************************
void UDEPRECATED_GraphEditorDummyObject::StaticRegisterNativesUDEPRECATED_GraphEditorDummyObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject;
UClass* UDEPRECATED_GraphEditorDummyObject::GetPrivateStaticClass()
{
	using TClass = UDEPRECATED_GraphEditorDummyObject;
	if (!Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GraphEditorDummyObject"),
			Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.InnerSingleton,
			StaticRegisterNativesUDEPRECATED_GraphEditorDummyObject,
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
	return Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_NoRegister()
{
	return UDEPRECATED_GraphEditorDummyObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Random class to make UHT happy\n" },
#endif
		{ "IncludePath", "DummyObject.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DummyObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random class to make UHT happy" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GraphEditorDummyObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::ClassParams = {
	&UDEPRECATED_GraphEditorDummyObject::StaticClass,
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
	0x060002A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject.OuterSingleton;
}
UDEPRECATED_GraphEditorDummyObject::UDEPRECATED_GraphEditorDummyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GraphEditorDummyObject);
UDEPRECATED_GraphEditorDummyObject::~UDEPRECATED_GraphEditorDummyObject() {}
// ********** End Class UDEPRECATED_GraphEditorDummyObject *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_DummyObject_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GraphEditorDummyObject, UDEPRECATED_GraphEditorDummyObject::StaticClass, TEXT("UDEPRECATED_GraphEditorDummyObject"), &Z_Registration_Info_UClass_UDEPRECATED_GraphEditorDummyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GraphEditorDummyObject), 1445421931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_DummyObject_h__Script_VoxelGraphEditor_1751118060(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_DummyObject_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_DummyObject_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
