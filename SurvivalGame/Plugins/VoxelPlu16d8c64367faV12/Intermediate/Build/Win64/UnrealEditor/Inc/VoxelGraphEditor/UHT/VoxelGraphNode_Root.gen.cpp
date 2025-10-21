// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphNodes/VoxelGraphNode_Root.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode_Root() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Base();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Root();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Root_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphNode_Root *****************************************************
void UVoxelGraphNode_Root::StaticRegisterNativesUVoxelGraphNode_Root()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphNode_Root;
UClass* UVoxelGraphNode_Root::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphNode_Root;
	if (!Z_Registration_Info_UClass_UVoxelGraphNode_Root.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphNode_Root"),
			Z_Registration_Info_UClass_UVoxelGraphNode_Root.InnerSingleton,
			StaticRegisterNativesUVoxelGraphNode_Root,
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
	return Z_Registration_Info_UClass_UVoxelGraphNode_Root.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphNode_Root_NoRegister()
{
	return UVoxelGraphNode_Root::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphNode_Root_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode_Root.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode_Root.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode_Root>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Root_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Root_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Root_Statics::ClassParams = {
	&UVoxelGraphNode_Root::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Root_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphNode_Root_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphNode_Root()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphNode_Root.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode_Root.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Root_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphNode_Root.OuterSingleton;
}
UVoxelGraphNode_Root::UVoxelGraphNode_Root(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode_Root);
UVoxelGraphNode_Root::~UVoxelGraphNode_Root() {}
// ********** End Class UVoxelGraphNode_Root *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode_Root, UVoxelGraphNode_Root::StaticClass, TEXT("UVoxelGraphNode_Root"), &Z_Registration_Info_UClass_UVoxelGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode_Root), 2416333863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h__Script_VoxelGraphEditor_2568492948(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Root_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
