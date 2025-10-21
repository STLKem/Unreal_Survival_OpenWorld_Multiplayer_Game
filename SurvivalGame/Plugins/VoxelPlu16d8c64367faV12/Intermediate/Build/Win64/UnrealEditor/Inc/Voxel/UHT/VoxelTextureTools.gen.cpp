// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelTextureTools.h"
#include "VoxelTexture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelTextureTools() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTextureTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTextureTools_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelTextureTools Function Maximum **************************************
struct Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics
{
	struct VoxelTextureTools_eventMaximum_Parms
	{
		FVoxelFloatTexture Texture;
		float Radius;
		FVoxelFloatTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply the photoshop Maximum filter\n// Set each pixel to the max value in a radius Radius\n" },
#endif
		{ "CPP_Default_Radius", "2.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTextureTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply the photoshop Maximum filter\nSet each pixel to the max value in a radius Radius" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTextureTools_eventMaximum_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTextureTools_eventMaximum_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTextureTools_eventMaximum_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTextureTools, nullptr, "Maximum", Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::VoxelTextureTools_eventMaximum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::VoxelTextureTools_eventMaximum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTextureTools_Maximum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTextureTools_Maximum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTextureTools::execMaximum)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelFloatTexture*)Z_Param__Result=UVoxelTextureTools::Maximum(Z_Param_Texture,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class UVoxelTextureTools Function Maximum ****************************************

// ********** Begin Class UVoxelTextureTools Function Minimum **************************************
struct Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics
{
	struct VoxelTextureTools_eventMinimum_Parms
	{
		FVoxelFloatTexture Texture;
		float Radius;
		FVoxelFloatTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply the photoshop Minimum filter\n// Set each pixel to the min value in a radius Radius\n" },
#endif
		{ "CPP_Default_Radius", "2.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTextureTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply the photoshop Minimum filter\nSet each pixel to the min value in a radius Radius" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTextureTools_eventMinimum_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTextureTools_eventMinimum_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTextureTools_eventMinimum_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTextureTools, nullptr, "Minimum", Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::VoxelTextureTools_eventMinimum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::VoxelTextureTools_eventMinimum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTextureTools_Minimum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTextureTools_Minimum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTextureTools::execMinimum)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelFloatTexture*)Z_Param__Result=UVoxelTextureTools::Minimum(Z_Param_Texture,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class UVoxelTextureTools Function Minimum ****************************************

// ********** Begin Class UVoxelTextureTools *******************************************************
void UVoxelTextureTools::StaticRegisterNativesUVoxelTextureTools()
{
	UClass* Class = UVoxelTextureTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Maximum", &UVoxelTextureTools::execMaximum },
		{ "Minimum", &UVoxelTextureTools::execMinimum },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTextureTools;
UClass* UVoxelTextureTools::GetPrivateStaticClass()
{
	using TClass = UVoxelTextureTools;
	if (!Z_Registration_Info_UClass_UVoxelTextureTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTextureTools"),
			Z_Registration_Info_UClass_UVoxelTextureTools.InnerSingleton,
			StaticRegisterNativesUVoxelTextureTools,
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
	return Z_Registration_Info_UClass_UVoxelTextureTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTextureTools_NoRegister()
{
	return UVoxelTextureTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTextureTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelTextureTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTextureTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTextureTools_Maximum, "Maximum" }, // 912933051
		{ &Z_Construct_UFunction_UVoxelTextureTools_Minimum, "Minimum" }, // 4201014237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTextureTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelTextureTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTextureTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTextureTools_Statics::ClassParams = {
	&UVoxelTextureTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTextureTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTextureTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTextureTools()
{
	if (!Z_Registration_Info_UClass_UVoxelTextureTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTextureTools.OuterSingleton, Z_Construct_UClass_UVoxelTextureTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTextureTools.OuterSingleton;
}
UVoxelTextureTools::UVoxelTextureTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTextureTools);
UVoxelTextureTools::~UVoxelTextureTools() {}
// ********** End Class UVoxelTextureTools *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelTextureTools, UVoxelTextureTools::StaticClass, TEXT("UVoxelTextureTools"), &Z_Registration_Info_UClass_UVoxelTextureTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTextureTools), 3659553461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h__Script_Voxel_1732115668(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTextureTools_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
