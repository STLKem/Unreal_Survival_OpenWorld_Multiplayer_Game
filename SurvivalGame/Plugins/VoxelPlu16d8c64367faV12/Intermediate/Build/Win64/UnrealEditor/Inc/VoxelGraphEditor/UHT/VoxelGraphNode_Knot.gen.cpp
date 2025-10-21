// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphNodes/VoxelGraphNode_Knot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphNode_Knot() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Knot();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphNode_Knot_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphNode_Knot *****************************************************
void UVoxelGraphNode_Knot::StaticRegisterNativesUVoxelGraphNode_Knot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphNode_Knot;
UClass* UVoxelGraphNode_Knot::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphNode_Knot;
	if (!Z_Registration_Info_UClass_UVoxelGraphNode_Knot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphNode_Knot"),
			Z_Registration_Info_UClass_UVoxelGraphNode_Knot.InnerSingleton,
			StaticRegisterNativesUVoxelGraphNode_Knot,
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
	return Z_Registration_Info_UClass_UVoxelGraphNode_Knot.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphNode_Knot_NoRegister()
{
	return UVoxelGraphNode_Knot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphNode_Knot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphNodes/VoxelGraphNode_Knot.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphNodes/VoxelGraphNode_Knot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphNode_Knot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphNode_Knot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Knot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphNode_Knot_Statics::ClassParams = {
	&UVoxelGraphNode_Knot::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphNode_Knot_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphNode_Knot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphNode_Knot()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphNode_Knot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphNode_Knot.OuterSingleton, Z_Construct_UClass_UVoxelGraphNode_Knot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphNode_Knot.OuterSingleton;
}
UVoxelGraphNode_Knot::UVoxelGraphNode_Knot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphNode_Knot);
UVoxelGraphNode_Knot::~UVoxelGraphNode_Knot() {}
// ********** End Class UVoxelGraphNode_Knot *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Knot_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphNode_Knot, UVoxelGraphNode_Knot::StaticClass, TEXT("UVoxelGraphNode_Knot"), &Z_Registration_Info_UClass_UVoxelGraphNode_Knot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphNode_Knot), 828850403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Knot_h__Script_VoxelGraphEditor_857707661(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Knot_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphNodes_VoxelGraphNode_Knot_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
