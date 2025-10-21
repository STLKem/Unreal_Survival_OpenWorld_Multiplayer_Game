// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_RingWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_RingWorld() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_RingWorld();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_RingWorld_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_RingWorld **************************************************
void UVoxelExample_RingWorld::StaticRegisterNativesUVoxelExample_RingWorld()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_RingWorld;
UClass* UVoxelExample_RingWorld::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_RingWorld;
	if (!Z_Registration_Info_UClass_UVoxelExample_RingWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_RingWorld"),
			Z_Registration_Info_UClass_UVoxelExample_RingWorld.InnerSingleton,
			StaticRegisterNativesUVoxelExample_RingWorld,
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
	return Z_Registration_Info_UClass_UVoxelExample_RingWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_RingWorld_NoRegister()
{
	return UVoxelExample_RingWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_RingWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_RingWorld.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingEdgesHardness_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RingEdgesHardness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Thickness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_in_Degrees_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Width in Degrees" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverDepth_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RiverDepth" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverWidth_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RiverWidth" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeachColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "BeachColor" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainsColorHigh_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "MountainsColorHigh" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainsColorLowHigh_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "MountainsColorLowHigh" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainsColorLowLow_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "MountainsColorLowLow" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoutainsMaskCurve_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// \n" },
		{ "DisplayName", "MoutainsMaskCurve" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlainsColorHigh_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlainsColorHigh" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlainsColorLow_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlainsColorLow" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlainsNoiseFrequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlainsNoiseFrequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlainsNoiseHeight_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlainsNoiseHeight" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlainsNoiseStrengthCurve_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// \n" },
		{ "DisplayName", "PlainsNoiseStrengthCurve" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingMainShapeCurve_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RingMainShapeCurve" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingOuterColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RingOuterColor" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RiverColor" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverDepthCurve_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// \n" },
		{ "DisplayName", "RiverDepthCurve" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainsNoiseFrequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "MountainsNoiseFrequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainsNoiseHeight_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "MountainsNoiseHeight" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNoiseFrquency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "BaseNoiseFrquency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseNoiseHeight_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "BaseNoiseHeight" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeight_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "BaseHeight" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_RingWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RingEdgesHardness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width_in_Degrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RiverWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BeachColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MountainsColorHigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MountainsColorLowHigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MountainsColorLowLow;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MoutainsMaskCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlainsColorHigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlainsColorLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlainsNoiseFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlainsNoiseHeight;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PlainsNoiseStrengthCurve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RingMainShapeCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RingOuterColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RiverColor;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RiverDepthCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainsNoiseFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainsNoiseHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseNoiseFrquency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseNoiseHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_RingWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RingEdgesHardness = { "RingEdgesHardness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RingEdgesHardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingEdgesHardness_MetaData), NewProp_RingEdgesHardness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Width_in_Degrees = { "Width_in_Degrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, Width_in_Degrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_in_Degrees_MetaData), NewProp_Width_in_Degrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverDepth = { "RiverDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RiverDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverDepth_MetaData), NewProp_RiverDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverWidth = { "RiverWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RiverWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverWidth_MetaData), NewProp_RiverWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BeachColor = { "BeachColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, BeachColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeachColor_MetaData), NewProp_BeachColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsColorHigh = { "MountainsColorHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, MountainsColorHigh), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainsColorHigh_MetaData), NewProp_MountainsColorHigh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsColorLowHigh = { "MountainsColorLowHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, MountainsColorLowHigh), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainsColorLowHigh_MetaData), NewProp_MountainsColorLowHigh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsColorLowLow = { "MountainsColorLowLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, MountainsColorLowLow), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainsColorLowLow_MetaData), NewProp_MountainsColorLowLow_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MoutainsMaskCurve = { "MoutainsMaskCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, MoutainsMaskCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoutainsMaskCurve_MetaData), NewProp_MoutainsMaskCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsColorHigh = { "PlainsColorHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, PlainsColorHigh), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlainsColorHigh_MetaData), NewProp_PlainsColorHigh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsColorLow = { "PlainsColorLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, PlainsColorLow), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlainsColorLow_MetaData), NewProp_PlainsColorLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsNoiseFrequency = { "PlainsNoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, PlainsNoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlainsNoiseFrequency_MetaData), NewProp_PlainsNoiseFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsNoiseHeight = { "PlainsNoiseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, PlainsNoiseHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlainsNoiseHeight_MetaData), NewProp_PlainsNoiseHeight_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsNoiseStrengthCurve = { "PlainsNoiseStrengthCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, PlainsNoiseStrengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlainsNoiseStrengthCurve_MetaData), NewProp_PlainsNoiseStrengthCurve_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RingMainShapeCurve = { "RingMainShapeCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RingMainShapeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingMainShapeCurve_MetaData), NewProp_RingMainShapeCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RingOuterColor = { "RingOuterColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RingOuterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingOuterColor_MetaData), NewProp_RingOuterColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverColor = { "RiverColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RiverColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverColor_MetaData), NewProp_RiverColor_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverDepthCurve = { "RiverDepthCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, RiverDepthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverDepthCurve_MetaData), NewProp_RiverDepthCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsNoiseFrequency = { "MountainsNoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, MountainsNoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainsNoiseFrequency_MetaData), NewProp_MountainsNoiseFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsNoiseHeight = { "MountainsNoiseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, MountainsNoiseHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainsNoiseHeight_MetaData), NewProp_MountainsNoiseHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BaseNoiseFrquency = { "BaseNoiseFrquency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, BaseNoiseFrquency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNoiseFrquency_MetaData), NewProp_BaseNoiseFrquency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BaseNoiseHeight = { "BaseNoiseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, BaseNoiseHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseNoiseHeight_MetaData), NewProp_BaseNoiseHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BaseHeight = { "BaseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_RingWorld, BaseHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHeight_MetaData), NewProp_BaseHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_RingWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RingEdgesHardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_Width_in_Degrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BeachColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsColorHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsColorLowHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsColorLowLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MoutainsMaskCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsColorHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsColorLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsNoiseFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsNoiseHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_PlainsNoiseStrengthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RingMainShapeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RingOuterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_RiverDepthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsNoiseFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_MountainsNoiseHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BaseNoiseFrquency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BaseNoiseHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_RingWorld_Statics::NewProp_BaseHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_RingWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_RingWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_RingWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_RingWorld_Statics::ClassParams = {
	&UVoxelExample_RingWorld::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_RingWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_RingWorld_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_RingWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_RingWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_RingWorld()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_RingWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_RingWorld.OuterSingleton, Z_Construct_UClass_UVoxelExample_RingWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_RingWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_RingWorld);
UVoxelExample_RingWorld::~UVoxelExample_RingWorld() {}
// ********** End Class UVoxelExample_RingWorld ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_RingWorld_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_RingWorld, UVoxelExample_RingWorld::StaticClass, TEXT("UVoxelExample_RingWorld"), &Z_Registration_Info_UClass_UVoxelExample_RingWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_RingWorld), 2359509645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_RingWorld_h__Script_VoxelGraph_3501616305(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_RingWorld_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_RingWorld_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
