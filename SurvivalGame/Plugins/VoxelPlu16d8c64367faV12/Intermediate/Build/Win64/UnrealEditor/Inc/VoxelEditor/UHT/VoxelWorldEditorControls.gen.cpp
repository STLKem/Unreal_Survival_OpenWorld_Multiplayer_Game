// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelWorldEditorControls.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWorldEditorControls() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent();
VOXELEDITOR_API UClass* Z_Construct_UClass_AVoxelWorldEditorControls();
VOXELEDITOR_API UClass* Z_Construct_UClass_AVoxelWorldEditorControls_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelWorldEditorControls ************************************************
void AVoxelWorldEditorControls::StaticRegisterNativesAVoxelWorldEditorControls()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelWorldEditorControls;
UClass* AVoxelWorldEditorControls::GetPrivateStaticClass()
{
	using TClass = AVoxelWorldEditorControls;
	if (!Z_Registration_Info_UClass_AVoxelWorldEditorControls.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelWorldEditorControls"),
			Z_Registration_Info_UClass_AVoxelWorldEditorControls.InnerSingleton,
			StaticRegisterNativesAVoxelWorldEditorControls,
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
	return Z_Registration_Info_UClass_AVoxelWorldEditorControls.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelWorldEditorControls_NoRegister()
{
	return AVoxelWorldEditorControls::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelWorldEditorControls_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelWorldEditorControls.h" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLocation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End AActor interface\n" },
#endif
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOverride_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Invoker_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Invoker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorldEditorControls>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_SetBit(void* Obj)
{
	((AVoxelWorldEditorControls*)Obj)->bOverrideLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation = { "bOverrideLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorldEditorControls), &Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLocation_MetaData), NewProp_bOverrideLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride = { "LocationOverride", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorldEditorControls, LocationOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOverride_MetaData), NewProp_LocationOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker = { "Invoker", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorldEditorControls, Invoker), Z_Construct_UClass_UVoxelInvokerEditorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Invoker_MetaData), NewProp_Invoker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_bOverrideLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_LocationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorldEditorControls_Statics::NewProp_Invoker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelWorldEditorControls_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorldEditorControls_Statics::ClassParams = {
	&AVoxelWorldEditorControls::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldEditorControls_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelWorldEditorControls_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelWorldEditorControls()
{
	if (!Z_Registration_Info_UClass_AVoxelWorldEditorControls.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelWorldEditorControls.OuterSingleton, Z_Construct_UClass_AVoxelWorldEditorControls_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelWorldEditorControls.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelWorldEditorControls);
AVoxelWorldEditorControls::~AVoxelWorldEditorControls() {}
// ********** End Class AVoxelWorldEditorControls **************************************************

// ********** Begin Class UVoxelInvokerEditorComponent *********************************************
void UVoxelInvokerEditorComponent::StaticRegisterNativesUVoxelInvokerEditorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInvokerEditorComponent;
UClass* UVoxelInvokerEditorComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelInvokerEditorComponent;
	if (!Z_Registration_Info_UClass_UVoxelInvokerEditorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInvokerEditorComponent"),
			Z_Registration_Info_UClass_UVoxelInvokerEditorComponent.InnerSingleton,
			StaticRegisterNativesUVoxelInvokerEditorComponent,
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
	return Z_Registration_Info_UClass_UVoxelInvokerEditorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent_NoRegister()
{
	return UVoxelInvokerEditorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelWorldEditorControls.h" },
		{ "ModuleRelativePath", "Private/VoxelWorldEditorControls.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerEditorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::ClassParams = {
	&UVoxelInvokerEditorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInvokerEditorComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelInvokerEditorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInvokerEditorComponent.OuterSingleton, Z_Construct_UClass_UVoxelInvokerEditorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInvokerEditorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerEditorComponent);
UVoxelInvokerEditorComponent::~UVoxelInvokerEditorComponent() {}
// ********** End Class UVoxelInvokerEditorComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelWorldEditorControls_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelWorldEditorControls, AVoxelWorldEditorControls::StaticClass, TEXT("AVoxelWorldEditorControls"), &Z_Registration_Info_UClass_AVoxelWorldEditorControls, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelWorldEditorControls), 767093972U) },
		{ Z_Construct_UClass_UVoxelInvokerEditorComponent, UVoxelInvokerEditorComponent::StaticClass, TEXT("UVoxelInvokerEditorComponent"), &Z_Registration_Info_UClass_UVoxelInvokerEditorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInvokerEditorComponent), 1303983146U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelWorldEditorControls_h__Script_VoxelEditor_3872545201(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelWorldEditorControls_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelWorldEditorControls_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
