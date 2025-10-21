// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelConstantNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelConstantNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LOD();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LOD_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelSize();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelSize_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldSize();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldSize_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_LOD ***********************************************************
void UVoxelNode_LOD::StaticRegisterNativesUVoxelNode_LOD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_LOD;
UClass* UVoxelNode_LOD::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_LOD;
	if (!Z_Registration_Info_UClass_UVoxelNode_LOD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_LOD"),
			Z_Registration_Info_UClass_UVoxelNode_LOD.InnerSingleton,
			StaticRegisterNativesUVoxelNode_LOD,
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
	return Z_Registration_Info_UClass_UVoxelNode_LOD.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_LOD_NoRegister()
{
	return UVoxelNode_LOD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_LOD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Returns the current LOD\n" },
		{ "DisplayName", "LOD" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Returns the current LOD" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_LOD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_LOD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LOD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_LOD_Statics::ClassParams = {
	&UVoxelNode_LOD::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_LOD()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_LOD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_LOD.OuterSingleton, Z_Construct_UClass_UVoxelNode_LOD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_LOD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_LOD);
UVoxelNode_LOD::~UVoxelNode_LOD() {}
// ********** End Class UVoxelNode_LOD *************************************************************

// ********** Begin Class UVoxelNode_VoxelSize *****************************************************
void UVoxelNode_VoxelSize::StaticRegisterNativesUVoxelNode_VoxelSize()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_VoxelSize;
UClass* UVoxelNode_VoxelSize::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_VoxelSize;
	if (!Z_Registration_Info_UClass_UVoxelNode_VoxelSize.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_VoxelSize"),
			Z_Registration_Info_UClass_UVoxelNode_VoxelSize.InnerSingleton,
			StaticRegisterNativesUVoxelNode_VoxelSize,
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
	return Z_Registration_Info_UClass_UVoxelNode_VoxelSize.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_VoxelSize_NoRegister()
{
	return UVoxelNode_VoxelSize::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_VoxelSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Voxel Size\n" },
		{ "DisplayName", "Voxel Size" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Voxel Size" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoxelSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::ClassParams = {
	&UVoxelNode_VoxelSize::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_VoxelSize()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_VoxelSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_VoxelSize.OuterSingleton, Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_VoxelSize.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoxelSize);
UVoxelNode_VoxelSize::~UVoxelNode_VoxelSize() {}
// ********** End Class UVoxelNode_VoxelSize *******************************************************

// ********** Begin Class UVoxelNode_WorldSize *****************************************************
void UVoxelNode_WorldSize::StaticRegisterNativesUVoxelNode_WorldSize()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_WorldSize;
UClass* UVoxelNode_WorldSize::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_WorldSize;
	if (!Z_Registration_Info_UClass_UVoxelNode_WorldSize.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_WorldSize"),
			Z_Registration_Info_UClass_UVoxelNode_WorldSize.InnerSingleton,
			StaticRegisterNativesUVoxelNode_WorldSize,
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
	return Z_Registration_Info_UClass_UVoxelNode_WorldSize.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_WorldSize_NoRegister()
{
	return UVoxelNode_WorldSize::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_WorldSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// World Size\n" },
		{ "DisplayName", "World Size" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "World Size" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldSize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_WorldSize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldSize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldSize_Statics::ClassParams = {
	&UVoxelNode_WorldSize::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_WorldSize()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_WorldSize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_WorldSize.OuterSingleton, Z_Construct_UClass_UVoxelNode_WorldSize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_WorldSize.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldSize);
UVoxelNode_WorldSize::~UVoxelNode_WorldSize() {}
// ********** End Class UVoxelNode_WorldSize *******************************************************

// ********** Begin Class UVoxelNode_CompileTimeConstant *******************************************
void UVoxelNode_CompileTimeConstant::StaticRegisterNativesUVoxelNode_CompileTimeConstant()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant;
UClass* UVoxelNode_CompileTimeConstant::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_CompileTimeConstant;
	if (!Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_CompileTimeConstant"),
			Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.InnerSingleton,
			StaticRegisterNativesUVoxelNode_CompileTimeConstant,
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
	return Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant_NoRegister()
{
	return UVoxelNode_CompileTimeConstant::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Use this to access compilation constants such as preview size, target...\n" },
		{ "DisplayName", "Compile-Time Constant" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "Keywords", "is" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Use this to access compilation constants such as preview size, target..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ReconstructNode", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constants_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Constants_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Constants_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Constants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CompileTimeConstant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Type), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 504560274
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_ValueProp = { "Constants", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_Key_KeyProp = { "Constants_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants = { "Constants", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Constants), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constants_MetaData), NewProp_Constants_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::ClassParams = {
	&UVoxelNode_CompileTimeConstant::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.OuterSingleton, Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CompileTimeConstant);
UVoxelNode_CompileTimeConstant::~UVoxelNode_CompileTimeConstant() {}
// ********** End Class UVoxelNode_CompileTimeConstant *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_LOD, UVoxelNode_LOD::StaticClass, TEXT("UVoxelNode_LOD"), &Z_Registration_Info_UClass_UVoxelNode_LOD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_LOD), 4293654415U) },
		{ Z_Construct_UClass_UVoxelNode_VoxelSize, UVoxelNode_VoxelSize::StaticClass, TEXT("UVoxelNode_VoxelSize"), &Z_Registration_Info_UClass_UVoxelNode_VoxelSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_VoxelSize), 1525325714U) },
		{ Z_Construct_UClass_UVoxelNode_WorldSize, UVoxelNode_WorldSize::StaticClass, TEXT("UVoxelNode_WorldSize"), &Z_Registration_Info_UClass_UVoxelNode_WorldSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_WorldSize), 1243005899U) },
		{ Z_Construct_UClass_UVoxelNode_CompileTimeConstant, UVoxelNode_CompileTimeConstant::StaticClass, TEXT("UVoxelNode_CompileTimeConstant"), &Z_Registration_Info_UClass_UVoxelNode_CompileTimeConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_CompileTimeConstant), 3844250039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h__Script_VoxelGraph_2313481059(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelConstantNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
