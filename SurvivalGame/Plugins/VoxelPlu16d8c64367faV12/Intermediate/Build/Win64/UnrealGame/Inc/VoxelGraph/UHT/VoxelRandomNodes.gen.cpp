// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelRandomNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelRandomNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomFloat();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomFloat_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomInt();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomInt_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_RandomFloat ***************************************************
void UVoxelNode_RandomFloat::StaticRegisterNativesUVoxelNode_RandomFloat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_RandomFloat;
UClass* UVoxelNode_RandomFloat::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_RandomFloat;
	if (!Z_Registration_Info_UClass_UVoxelNode_RandomFloat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_RandomFloat"),
			Z_Registration_Info_UClass_UVoxelNode_RandomFloat.InnerSingleton,
			StaticRegisterNativesUVoxelNode_RandomFloat,
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
	return Z_Registration_Info_UClass_UVoxelNode_RandomFloat.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_RandomFloat_NoRegister()
{
	return UVoxelNode_RandomFloat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_RandomFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "// A random number >= Min and <= Max\n" },
		{ "DisplayName", "Rand Float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelRandomNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
		{ "ToolTip", "A random number >= Min and <= Max" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RandomFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RandomFloat, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RandomFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::ClassParams = {
	&UVoxelNode_RandomFloat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_RandomFloat()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_RandomFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RandomFloat.OuterSingleton, Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_RandomFloat.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RandomFloat);
UVoxelNode_RandomFloat::~UVoxelNode_RandomFloat() {}
// ********** End Class UVoxelNode_RandomFloat *****************************************************

// ********** Begin Class UVoxelNode_RandomInt *****************************************************
void UVoxelNode_RandomInt::StaticRegisterNativesUVoxelNode_RandomInt()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_RandomInt;
UClass* UVoxelNode_RandomInt::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_RandomInt;
	if (!Z_Registration_Info_UClass_UVoxelNode_RandomInt.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_RandomInt"),
			Z_Registration_Info_UClass_UVoxelNode_RandomInt.InnerSingleton,
			StaticRegisterNativesUVoxelNode_RandomInt,
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
	return Z_Registration_Info_UClass_UVoxelNode_RandomInt.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_RandomInt_NoRegister()
{
	return UVoxelNode_RandomInt::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_RandomInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "// A random number >= Min and <= Max\n" },
		{ "DisplayName", "Rand int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelRandomNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
		{ "ToolTip", "A random number >= Min and <= Max" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RandomInt>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RandomInt, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_RandomInt, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_RandomInt_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::ClassParams = {
	&UVoxelNode_RandomInt::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_RandomInt()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_RandomInt.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_RandomInt.OuterSingleton, Z_Construct_UClass_UVoxelNode_RandomInt_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_RandomInt.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RandomInt);
UVoxelNode_RandomInt::~UVoxelNode_RandomInt() {}
// ********** End Class UVoxelNode_RandomInt *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_RandomFloat, UVoxelNode_RandomFloat::StaticClass, TEXT("UVoxelNode_RandomFloat"), &Z_Registration_Info_UClass_UVoxelNode_RandomFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RandomFloat), 1836633274U) },
		{ Z_Construct_UClass_UVoxelNode_RandomInt, UVoxelNode_RandomInt::StaticClass, TEXT("UVoxelNode_RandomInt"), &Z_Registration_Info_UClass_UVoxelNode_RandomInt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_RandomInt), 2341207871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h__Script_VoxelGraph_3526858848(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelRandomNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
