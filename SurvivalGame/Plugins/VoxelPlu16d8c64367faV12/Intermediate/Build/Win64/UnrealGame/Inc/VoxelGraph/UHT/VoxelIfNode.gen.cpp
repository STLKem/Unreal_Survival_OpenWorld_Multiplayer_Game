// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelIfNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelIfNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_If();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_If_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelNodeIfBranchToUseForRangeAnalysis ***********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis;
static UEnum* EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"));
	}
	return Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelNodeIfBranchToUseForRangeAnalysis>()
{
	return EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "None.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::None" },
		{ "UseFalse.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse" },
		{ "UseTrue.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelNodeIfBranchToUseForRangeAnalysis::None", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::None },
		{ "EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue },
		{ "EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelNodeIfBranchToUseForRangeAnalysis",
	"EVoxelNodeIfBranchToUseForRangeAnalysis",
	Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis()
{
	if (!Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis.InnerSingleton;
}
// ********** End Enum EVoxelNodeIfBranchToUseForRangeAnalysis *************************************

// ********** Begin Class UVoxelNode_If ************************************************************
void UVoxelNode_If::StaticRegisterNativesUVoxelNode_If()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_If;
UClass* UVoxelNode_If::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_If;
	if (!Z_Registration_Info_UClass_UVoxelNode_If.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_If"),
			Z_Registration_Info_UClass_UVoxelNode_If.InnerSingleton,
			StaticRegisterNativesUVoxelNode_If,
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
	return Z_Registration_Info_UClass_UVoxelNode_If.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_If_NoRegister()
{
	return UVoxelNode_If::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_If_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
		{ "Comment", "// Branch node\n" },
		{ "DisplayName", "If" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "Keywords", "branch" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Branch node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchToUseForRangeAnalysis_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If the condition range analysis fails, use this branch instead of failing.\n// DO NOT CHANGE THIS UNLESS YOU KNOW WHAT YOU ARE DOING, ELSE YOUR WORLD WILL HAVE HOLES\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "If the condition range analysis fails, use this branch instead of failing.\nDO NOT CHANGE THIS UNLESS YOU KNOW WHAT YOU ARE DOING, ELSE YOUR WORLD WILL HAVE HOLES" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BranchToUseForRangeAnalysis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BranchToUseForRangeAnalysis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_If>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis = { "BranchToUseForRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_If, BranchToUseForRangeAnalysis), Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchToUseForRangeAnalysis_MetaData), NewProp_BranchToUseForRangeAnalysis_MetaData) }; // 3701597357
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_If_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_If_Statics::ClassParams = {
	&UVoxelNode_If::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_If()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_If.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_If.OuterSingleton, Z_Construct_UClass_UVoxelNode_If_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_If.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_If);
UVoxelNode_If::~UVoxelNode_If() {}
// ********** End Class UVoxelNode_If **************************************************************

// ********** Begin Class UVoxelNode_IfWithDefaultToFalse ******************************************
void UVoxelNode_IfWithDefaultToFalse::StaticRegisterNativesUVoxelNode_IfWithDefaultToFalse()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse;
UClass* UVoxelNode_IfWithDefaultToFalse::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IfWithDefaultToFalse;
	if (!Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IfWithDefaultToFalse"),
			Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IfWithDefaultToFalse,
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
	return Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_NoRegister()
{
	return UVoxelNode_IfWithDefaultToFalse::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Helper\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Helper" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IfWithDefaultToFalse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_If,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::ClassParams = {
	&UVoxelNode_IfWithDefaultToFalse::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.OuterSingleton, Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IfWithDefaultToFalse);
UVoxelNode_IfWithDefaultToFalse::~UVoxelNode_IfWithDefaultToFalse() {}
// ********** End Class UVoxelNode_IfWithDefaultToFalse ********************************************

// ********** Begin Class UVoxelNode_IfWithDefaultToTrue *******************************************
void UVoxelNode_IfWithDefaultToTrue::StaticRegisterNativesUVoxelNode_IfWithDefaultToTrue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue;
UClass* UVoxelNode_IfWithDefaultToTrue::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IfWithDefaultToTrue;
	if (!Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IfWithDefaultToTrue"),
			Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IfWithDefaultToTrue,
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
	return Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_NoRegister()
{
	return UVoxelNode_IfWithDefaultToTrue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Helper\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Helper" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IfWithDefaultToTrue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_If,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::ClassParams = {
	&UVoxelNode_IfWithDefaultToTrue::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.OuterSingleton, Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IfWithDefaultToTrue);
UVoxelNode_IfWithDefaultToTrue::~UVoxelNode_IfWithDefaultToTrue() {}
// ********** End Class UVoxelNode_IfWithDefaultToTrue *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h__Script_VoxelGraph_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum, TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"), &Z_Registration_Info_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3701597357U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_If, UVoxelNode_If::StaticClass, TEXT("UVoxelNode_If"), &Z_Registration_Info_UClass_UVoxelNode_If, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_If), 3381112371U) },
		{ Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse, UVoxelNode_IfWithDefaultToFalse::StaticClass, TEXT("UVoxelNode_IfWithDefaultToFalse"), &Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToFalse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IfWithDefaultToFalse), 1403190286U) },
		{ Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue, UVoxelNode_IfWithDefaultToTrue::StaticClass, TEXT("UVoxelNode_IfWithDefaultToTrue"), &Z_Registration_Info_UClass_UVoxelNode_IfWithDefaultToTrue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IfWithDefaultToTrue), 2853273529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h__Script_VoxelGraph_2070201779(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h__Script_VoxelGraph_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelIfNode_h__Script_VoxelGraph_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
