// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_HeightmapComposition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_HeightmapComposition() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_HeightmapComposition ***************************************
void UVoxelExample_HeightmapComposition::StaticRegisterNativesUVoxelExample_HeightmapComposition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition;
UClass* UVoxelExample_HeightmapComposition::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_HeightmapComposition;
	if (!Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_HeightmapComposition"),
			Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.InnerSingleton,
			StaticRegisterNativesUVoxelExample_HeightmapComposition,
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
	return Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition_NoRegister()
{
	return UVoxelExample_HeightmapComposition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_HeightmapComposition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Depth below the heightmap\n" },
#endif
		{ "DisplayName", "Depth" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth below the heightmap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flip_X_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Flip X" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flip_Y_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Flip Y" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x0_y0_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "heightmap x0 y0" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x0_y1_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "heightmap x0 y1" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x1_y0_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "heightmap x1 y0" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_heightmap_x1_y1_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "heightmap x1 y1" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_X_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the heightmaps\n" },
#endif
		{ "DisplayName", "Size X" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the heightmaps" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_Y_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the heightmaps\n" },
#endif
		{ "DisplayName", "Size Y" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HeightmapComposition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the heightmaps" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static void NewProp_Flip_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Flip_X;
	static void NewProp_Flip_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Flip_Y;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x0_y0;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x0_y1;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x1_y0;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_heightmap_x1_y1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_HeightmapComposition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
void Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_SetBit(void* Obj)
{
	((UVoxelExample_HeightmapComposition*)Obj)->Flip_X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X = { "Flip_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelExample_HeightmapComposition), &Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flip_X_MetaData), NewProp_Flip_X_MetaData) };
void Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_SetBit(void* Obj)
{
	((UVoxelExample_HeightmapComposition*)Obj)->Flip_Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y = { "Flip_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelExample_HeightmapComposition), &Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flip_Y_MetaData), NewProp_Flip_Y_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0 = { "heightmap_x0_y0", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x0_y0), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_heightmap_x0_y0_MetaData), NewProp_heightmap_x0_y0_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1 = { "heightmap_x0_y1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x0_y1), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_heightmap_x0_y1_MetaData), NewProp_heightmap_x0_y1_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0 = { "heightmap_x1_y0", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x1_y0), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_heightmap_x1_y0_MetaData), NewProp_heightmap_x1_y0_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1 = { "heightmap_x1_y1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, heightmap_x1_y1), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_heightmap_x1_y1_MetaData), NewProp_heightmap_x1_y1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X = { "Size_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, Size_X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_X_MetaData), NewProp_Size_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y = { "Size_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HeightmapComposition, Size_Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_Y_MetaData), NewProp_Size_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Flip_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x0_y1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_heightmap_x1_y1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::NewProp_Size_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::ClassParams = {
	&UVoxelExample_HeightmapComposition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_HeightmapComposition()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.OuterSingleton, Z_Construct_UClass_UVoxelExample_HeightmapComposition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_HeightmapComposition);
UVoxelExample_HeightmapComposition::~UVoxelExample_HeightmapComposition() {}
// ********** End Class UVoxelExample_HeightmapComposition *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_HeightmapComposition, UVoxelExample_HeightmapComposition::StaticClass, TEXT("UVoxelExample_HeightmapComposition"), &Z_Registration_Info_UClass_UVoxelExample_HeightmapComposition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_HeightmapComposition), 2062925540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h__Script_VoxelGraph_3861939243(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_HeightmapComposition_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
