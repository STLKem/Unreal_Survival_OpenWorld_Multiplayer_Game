// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphNodes/VoxelGraphNode_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode_Base() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphNodeInterface();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphNode_Base *****************************************************
void UVoxelGraphNode_Base::StaticRegisterNativesUVoxelGraphNode_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphNode_Base;
UClass* UVoxelGraphNode_Base::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphNode_Base;
	if (!Z_Registration_Info_UClass_UVoxelGraphNode_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphNode_Base"),
			Z_Registration_Info_UClass_UVoxelGraphNode_Base.InnerSingleton,
			StaticRegisterNativesUVoxelGraphNode_Base,
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
	return Z_Registration_Info_UClass_UVoxelGraphNode_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphNode_Base_NoRegister()
{
	return UVoxelGraphNode_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphNode_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode_Base.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode_Base.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphNodeInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Base_Statics::ClassParams = {
	&UVoxelGraphNode_Base::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphNode_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphNode_Base()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphNode_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode_Base.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphNode_Base.OuterSingleton;
}
UVoxelGraphNode_Base::UVoxelGraphNode_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode_Base);
UVoxelGraphNode_Base::~UVoxelGraphNode_Base() {}
// ********** End Class UVoxelGraphNode_Base *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode_Base, UVoxelGraphNode_Base::StaticClass, TEXT("UVoxelGraphNode_Base"), &Z_Registration_Info_UClass_UVoxelGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode_Base), 2000364686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h__Script_VoxelGraphEditor_1765933017(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Base_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
