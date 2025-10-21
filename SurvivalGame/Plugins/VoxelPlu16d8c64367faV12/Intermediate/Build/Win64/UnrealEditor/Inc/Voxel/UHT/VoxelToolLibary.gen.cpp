// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelToolLibary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelToolLibary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolLibrary();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolLibrary_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelToolLibrary Function UpdateSphereOverlayMaterial *******************
struct Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics
{
	struct VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms
	{
		UVoxelToolBase* Tool;
		UMaterialInstanceDynamic* OverlayMaterialInstance;
		EVoxelFalloff FalloffType;
		float Falloff;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Tool Library" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolLibary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterialInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, Tool), Z_Construct_UClass_UVoxelToolBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_OverlayMaterialInstance = { "OverlayMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, OverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Tool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_OverlayMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolLibrary, nullptr, "UpdateSphereOverlayMaterial", Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::VoxelToolLibrary_eventUpdateSphereOverlayMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolLibrary::execUpdateSphereOverlayMaterial)
{
	P_GET_OBJECT(UVoxelToolBase,Z_Param_Tool);
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_OverlayMaterialInstance);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelToolLibrary::UpdateSphereOverlayMaterial(Z_Param_Tool,Z_Param_OverlayMaterialInstance,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolLibrary Function UpdateSphereOverlayMaterial *********************

// ********** Begin Class UVoxelToolLibrary ********************************************************
void UVoxelToolLibrary::StaticRegisterNativesUVoxelToolLibrary()
{
	UClass* Class = UVoxelToolLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateSphereOverlayMaterial", &UVoxelToolLibrary::execUpdateSphereOverlayMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelToolLibrary;
UClass* UVoxelToolLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelToolLibrary;
	if (!Z_Registration_Info_UClass_UVoxelToolLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelToolLibrary"),
			Z_Registration_Info_UClass_UVoxelToolLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelToolLibrary,
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
	return Z_Registration_Info_UClass_UVoxelToolLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelToolLibrary_NoRegister()
{
	return UVoxelToolLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelToolLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelToolLibary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolLibary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolLibrary_UpdateSphereOverlayMaterial, "UpdateSphereOverlayMaterial" }, // 310266940
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelToolLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolLibrary_Statics::ClassParams = {
	&UVoxelToolLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelToolLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelToolLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelToolLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolLibrary.OuterSingleton, Z_Construct_UClass_UVoxelToolLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelToolLibrary.OuterSingleton;
}
UVoxelToolLibrary::UVoxelToolLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolLibrary);
UVoxelToolLibrary::~UVoxelToolLibrary() {}
// ********** End Class UVoxelToolLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolLibary_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolLibrary, UVoxelToolLibrary::StaticClass, TEXT("UVoxelToolLibrary"), &Z_Registration_Info_UClass_UVoxelToolLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolLibrary), 1514203265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolLibary_h__Script_Voxel_2616120984(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolLibary_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolLibary_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
