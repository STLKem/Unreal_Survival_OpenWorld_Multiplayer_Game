// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/VoxelColorWheel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelColorWheel() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel();
VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister();
VOXELHELPERS_API UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnVoxelColorWheelColorChangedEvent ***********************************
struct Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics
{
	struct _Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewColor_MetaData), NewProp_NewColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_VoxelHelpers, nullptr, "OnVoxelColorWheelColorChangedEvent__DelegateSignature", Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnVoxelColorWheelColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVoxelColorWheelColorChangedEvent, FLinearColor const& NewColor)
{
	struct _Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms
	{
		FLinearColor NewColor;
	};
	_Script_VoxelHelpers_eventOnVoxelColorWheelColorChangedEvent_Parms Parms;
	Parms.NewColor=NewColor;
	OnVoxelColorWheelColorChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnVoxelColorWheelColorChangedEvent *************************************

// ********** Begin Class UVoxelColorWheel *********************************************************
void UVoxelColorWheel::StaticRegisterNativesUVoxelColorWheel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelColorWheel;
UClass* UVoxelColorWheel::GetPrivateStaticClass()
{
	using TClass = UVoxelColorWheel;
	if (!Z_Registration_Info_UClass_UVoxelColorWheel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelColorWheel"),
			Z_Registration_Info_UClass_UVoxelColorWheel.InnerSingleton,
			StaticRegisterNativesUVoxelColorWheel,
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
	return Z_Registration_Info_UClass_UVoxelColorWheel.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister()
{
	return UVoxelColorWheel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelColorWheel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelColorWheel.h" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Voxel Color Wheel" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnColorChanged_MetaData[] = {
		{ "Category", "Voxel Color Wheel" },
		{ "ModuleRelativePath", "Public/VoxelColorWheel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnColorChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelColorWheel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelColorWheel, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged = { "OnColorChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelColorWheel, OnColorChanged), Z_Construct_UDelegateFunction_VoxelHelpers_OnVoxelColorWheelColorChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnColorChanged_MetaData), NewProp_OnColorChanged_MetaData) }; // 1389684244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelColorWheel_Statics::NewProp_OnColorChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelColorWheel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelColorWheel_Statics::ClassParams = {
	&UVoxelColorWheel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelColorWheel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelColorWheel()
{
	if (!Z_Registration_Info_UClass_UVoxelColorWheel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelColorWheel.OuterSingleton, Z_Construct_UClass_UVoxelColorWheel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelColorWheel.OuterSingleton;
}
UVoxelColorWheel::UVoxelColorWheel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelColorWheel);
UVoxelColorWheel::~UVoxelColorWheel() {}
// ********** End Class UVoxelColorWheel ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelColorWheel_h__Script_VoxelHelpers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelColorWheel, UVoxelColorWheel::StaticClass, TEXT("UVoxelColorWheel"), &Z_Registration_Info_UClass_UVoxelColorWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelColorWheel), 4097713864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelColorWheel_h__Script_VoxelHelpers_3842333588(TEXT("/Script/VoxelHelpers"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelColorWheel_h__Script_VoxelHelpers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelColorWheel_h__Script_VoxelHelpers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
