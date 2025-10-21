// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelData/VoxelSave.h"
#include "VoxelObjectArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSave() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject();
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelUncompressedWorldSave ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave;
class UScriptStruct* FVoxelUncompressedWorldSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelUncompressedWorldSave"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelUncompressedWorldSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, METADATA_PARAMS(0, nullptr) }; // 2413361163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelUncompressedWorldSave, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) }; // 2413361163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewProp_Objects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelUncompressedWorldSave",
	Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::PropPointers),
	sizeof(FVoxelUncompressedWorldSave),
	alignof(FVoxelUncompressedWorldSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave.InnerSingleton;
}
// ********** End ScriptStruct FVoxelUncompressedWorldSave *****************************************

// ********** Begin ScriptStruct FVoxelCompressedWorldSave *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave;
class UScriptStruct* FVoxelCompressedWorldSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelCompressedWorldSave"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelCompressedWorldSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, METADATA_PARAMS(0, nullptr) }; // 2413361163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelCompressedWorldSave, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objects_MetaData), NewProp_Objects_MetaData) }; // 2413361163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewProp_Objects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelCompressedWorldSave",
	Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::PropPointers),
	sizeof(FVoxelCompressedWorldSave),
	alignof(FVoxelCompressedWorldSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave.InnerSingleton;
}
// ********** End ScriptStruct FVoxelCompressedWorldSave *******************************************

// ********** Begin Class UVoxelWorldSaveObject ****************************************************
void UVoxelWorldSaveObject::StaticRegisterNativesUVoxelWorldSaveObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelWorldSaveObject;
UClass* UVoxelWorldSaveObject::GetPrivateStaticClass()
{
	using TClass = UVoxelWorldSaveObject;
	if (!Z_Registration_Info_UClass_UVoxelWorldSaveObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelWorldSaveObject"),
			Z_Registration_Info_UClass_UVoxelWorldSaveObject.InnerSingleton,
			StaticRegisterNativesUVoxelWorldSaveObject,
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
	return Z_Registration_Info_UClass_UVoxelWorldSaveObject.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister()
{
	return UVoxelWorldSaveObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelWorldSaveObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "VoxelData/VoxelSave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Depth of the world\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth of the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Save;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldSaveObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelWorldSaveObject, Save), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Save_MetaData), NewProp_Save_MetaData) }; // 407345368
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelWorldSaveObject, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelWorldSaveObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::ClassParams = {
	&UVoxelWorldSaveObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelWorldSaveObject()
{
	if (!Z_Registration_Info_UClass_UVoxelWorldSaveObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelWorldSaveObject.OuterSingleton, Z_Construct_UClass_UVoxelWorldSaveObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelWorldSaveObject.OuterSingleton;
}
UVoxelWorldSaveObject::UVoxelWorldSaveObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldSaveObject);
UVoxelWorldSaveObject::~UVoxelWorldSaveObject() {}
// ********** End Class UVoxelWorldSaveObject ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSave_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelUncompressedWorldSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewStructOps, TEXT("VoxelUncompressedWorldSave"), &Z_Registration_Info_UScriptStruct_FVoxelUncompressedWorldSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelUncompressedWorldSave), 1260233769U) },
		{ FVoxelCompressedWorldSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewStructOps, TEXT("VoxelCompressedWorldSave"), &Z_Registration_Info_UScriptStruct_FVoxelCompressedWorldSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelCompressedWorldSave), 407345368U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelWorldSaveObject, UVoxelWorldSaveObject::StaticClass, TEXT("UVoxelWorldSaveObject"), &Z_Registration_Info_UClass_UVoxelWorldSaveObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelWorldSaveObject), 2361859038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSave_h__Script_Voxel_487198693(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSave_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSave_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSave_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSave_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
