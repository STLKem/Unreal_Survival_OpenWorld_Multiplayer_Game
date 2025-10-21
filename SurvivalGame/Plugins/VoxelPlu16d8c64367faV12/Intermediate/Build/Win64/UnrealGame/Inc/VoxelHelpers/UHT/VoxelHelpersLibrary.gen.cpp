// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/VoxelHelpersLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHelpersLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelHelpersLibrary();
VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelHelpersLibrary_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelHelpersLibrary Function CreateProcMeshPlane ************************
struct Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics
{
	struct VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms
	{
		UProceduralMeshComponent* Mesh;
		int32 SizeX;
		int32 SizeY;
		float Step;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Helpers" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_Step", "100.000000" },
		{ "ModuleRelativePath", "Public/VoxelHelpersLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, Step), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Step,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelHelpersLibrary, nullptr, "CreateProcMeshPlane", Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelHelpersLibrary::execCreateProcMeshPlane)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelHelpersLibrary::CreateProcMeshPlane(Z_Param_Mesh,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Step);
	P_NATIVE_END;
}
// ********** End Class UVoxelHelpersLibrary Function CreateProcMeshPlane **************************

// ********** Begin Class UVoxelHelpersLibrary *****************************************************
void UVoxelHelpersLibrary::StaticRegisterNativesUVoxelHelpersLibrary()
{
	UClass* Class = UVoxelHelpersLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProcMeshPlane", &UVoxelHelpersLibrary::execCreateProcMeshPlane },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHelpersLibrary;
UClass* UVoxelHelpersLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelHelpersLibrary;
	if (!Z_Registration_Info_UClass_UVoxelHelpersLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHelpersLibrary"),
			Z_Registration_Info_UClass_UVoxelHelpersLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelHelpersLibrary,
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
	return Z_Registration_Info_UClass_UVoxelHelpersLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHelpersLibrary_NoRegister()
{
	return UVoxelHelpersLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHelpersLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelHelpersLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelHelpersLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane, "CreateProcMeshPlane" }, // 1176736466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHelpersLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelHelpersLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHelpersLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHelpersLibrary_Statics::ClassParams = {
	&UVoxelHelpersLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHelpersLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelHelpersLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHelpersLibrary.OuterSingleton, Z_Construct_UClass_UVoxelHelpersLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHelpersLibrary.OuterSingleton;
}
UVoxelHelpersLibrary::UVoxelHelpersLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHelpersLibrary);
UVoxelHelpersLibrary::~UVoxelHelpersLibrary() {}
// ********** End Class UVoxelHelpersLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h__Script_VoxelHelpers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHelpersLibrary, UVoxelHelpersLibrary::StaticClass, TEXT("UVoxelHelpersLibrary"), &Z_Registration_Info_UClass_UVoxelHelpersLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHelpersLibrary), 1127963368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h__Script_VoxelHelpers_3681503768(TEXT("/Script/VoxelHelpers"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h__Script_VoxelHelpers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_VoxelHelpersLibrary_h__Script_VoxelHelpers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
