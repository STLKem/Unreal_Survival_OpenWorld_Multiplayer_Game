// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldGeneration.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWorldGeneration() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AWorldGeneration();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AWorldGeneration_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AWorldGeneration Function GenerateTerrain ********************************
struct Z_Construct_UFunction_AWorldGeneration_GenerateTerrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldGeneration_GenerateTerrain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWorldGeneration, nullptr, "GenerateTerrain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldGeneration_GenerateTerrain_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldGeneration_GenerateTerrain_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWorldGeneration_GenerateTerrain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldGeneration_GenerateTerrain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldGeneration::execGenerateTerrain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateTerrain();
	P_NATIVE_END;
}
// ********** End Class AWorldGeneration Function GenerateTerrain **********************************

// ********** Begin Class AWorldGeneration *********************************************************
void AWorldGeneration::StaticRegisterNativesAWorldGeneration()
{
	UClass* Class = AWorldGeneration::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateTerrain", &AWorldGeneration::execGenerateTerrain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWorldGeneration;
UClass* AWorldGeneration::GetPrivateStaticClass()
{
	using TClass = AWorldGeneration;
	if (!Z_Registration_Info_UClass_AWorldGeneration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WorldGeneration"),
			Z_Registration_Info_UClass_AWorldGeneration.InnerSingleton,
			StaticRegisterNativesAWorldGeneration,
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
	return Z_Registration_Info_UClass_AWorldGeneration.InnerSingleton;
}
UClass* Z_Construct_UClass_AWorldGeneration_NoRegister()
{
	return AWorldGeneration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWorldGeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration.h" },
		{ "ModuleRelativePath", "Public/WorldGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XVertexCount_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ModuleRelativePath", "Public/WorldGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YVertexCount_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ModuleRelativePath", "Public/WorldGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ModuleRelativePath", "Public/WorldGeneration.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMesh_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldGeneration.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XVertexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YVertexCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldGeneration_GenerateTerrain, "GenerateTerrain" }, // 1647557463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldGeneration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_XVertexCount = { "XVertexCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGeneration, XVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XVertexCount_MetaData), NewProp_XVertexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_YVertexCount = { "YVertexCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGeneration, YVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YVertexCount_MetaData), NewProp_YVertexCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGeneration, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_TerrainMesh = { "TerrainMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldGeneration, TerrainMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerrainMesh_MetaData), NewProp_TerrainMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldGeneration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_XVertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_YVertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_TerrainMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldGeneration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldGeneration_Statics::ClassParams = {
	&AWorldGeneration::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldGeneration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldGeneration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldGeneration()
{
	if (!Z_Registration_Info_UClass_AWorldGeneration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldGeneration.OuterSingleton, Z_Construct_UClass_AWorldGeneration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldGeneration.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldGeneration);
AWorldGeneration::~AWorldGeneration() {}
// ********** End Class AWorldGeneration ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_WorldGeneration_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldGeneration, AWorldGeneration::StaticClass, TEXT("AWorldGeneration"), &Z_Registration_Info_UClass_AWorldGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldGeneration), 1841537625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_WorldGeneration_h__Script_ProjectDeliveryHell_3981444178(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_WorldGeneration_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_WorldGeneration_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
