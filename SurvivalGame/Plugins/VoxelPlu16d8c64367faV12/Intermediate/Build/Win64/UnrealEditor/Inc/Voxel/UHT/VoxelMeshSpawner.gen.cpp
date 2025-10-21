// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelMeshSpawner.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "VoxelSpawners/VoxelInstancedMeshSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMeshSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelMeshSpawnerInstanceRandom *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom;
static UEnum* EVoxelMeshSpawnerInstanceRandom_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMeshSpawnerInstanceRandom"));
	}
	return Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelMeshSpawnerInstanceRandom>()
{
	return EVoxelMeshSpawnerInstanceRandom_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ColorOutput.Comment", "// Get a voxel graph output color in the shader\n// Use GetColorFromInstanceRandom\n" },
		{ "ColorOutput.Name", "EVoxelMeshSpawnerInstanceRandom::ColorOutput" },
		{ "ColorOutput.ToolTip", "Get a voxel graph output color in the shader\nUse GetColorFromInstanceRandom" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "Random.Comment", "// Random number\n// Use GetVoxelSpawnerActorInstanceRandom to get it\n// Will have the same value in the spawned actor as in the instance\n" },
		{ "Random.Name", "EVoxelMeshSpawnerInstanceRandom::Random" },
		{ "Random.ToolTip", "Random number\nUse GetVoxelSpawnerActorInstanceRandom to get it\nWill have the same value in the spawned actor as in the instance" },
		{ "VoxelMaterial.Comment", "// Get the voxel material in the shader\n// Use GetVoxelMaterialFromInstanceRandom\n" },
		{ "VoxelMaterial.Name", "EVoxelMeshSpawnerInstanceRandom::VoxelMaterial" },
		{ "VoxelMaterial.ToolTip", "Get the voxel material in the shader\nUse GetVoxelMaterialFromInstanceRandom" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelMeshSpawnerInstanceRandom::Random", (int64)EVoxelMeshSpawnerInstanceRandom::Random },
		{ "EVoxelMeshSpawnerInstanceRandom::VoxelMaterial", (int64)EVoxelMeshSpawnerInstanceRandom::VoxelMaterial },
		{ "EVoxelMeshSpawnerInstanceRandom::ColorOutput", (int64)EVoxelMeshSpawnerInstanceRandom::ColorOutput },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelMeshSpawnerInstanceRandom",
	"EVoxelMeshSpawnerInstanceRandom",
	Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom()
{
	if (!Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom.InnerSingleton;
}
// ********** End Enum EVoxelMeshSpawnerInstanceRandom *********************************************

// ********** Begin Class UVoxelMeshSpawnerBase ****************************************************
void UVoxelMeshSpawnerBase::StaticRegisterNativesUVoxelMeshSpawnerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawnerBase;
UClass* UVoxelMeshSpawnerBase::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawnerBase;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerBase"),
			Z_Registration_Info_UClass_UVoxelMeshSpawnerBase.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawnerBase,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase_NoRegister()
{
	return UVoxelMeshSpawnerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceRandom_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What to send through InstanceRandom\n// Check enum values tooltips\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What to send through InstanceRandom\nCheck enum values tooltips" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorOutputName_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSettings_MetaData[] = {
		{ "Category", "Actor Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysSpawnActor_MetaData[] = {
		{ "Category", "Actor Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will always spawn an actor instead of an instanced mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will always spawn an actor instead of an instanced mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshSettings_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatingDetectionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In local space. Increase this if your foliage is enabling physics too soon. In cm\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In local space. Increase this if your foliage is enabling physics too soon. In cm" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstanceRandom_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstanceRandom;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ColorOutputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSettings;
	static void NewProp_bAlwaysSpawnActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSpawnActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedMeshSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDetectionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom = { "InstanceRandom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, InstanceRandom), Z_Construct_UEnum_Voxel_EVoxelMeshSpawnerInstanceRandom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceRandom_MetaData), NewProp_InstanceRandom_MetaData) }; // 2581096075
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName = { "ColorOutputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, ColorOutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorOutputName_MetaData), NewProp_ColorOutputName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings = { "ActorSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, ActorSettings), Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSettings_MetaData), NewProp_ActorSettings_MetaData) }; // 2216116063
void Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_SetBit(void* Obj)
{
	((UVoxelMeshSpawnerBase*)Obj)->bAlwaysSpawnActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor = { "bAlwaysSpawnActor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshSpawnerBase), &Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysSpawnActor_MetaData), NewProp_bAlwaysSpawnActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings = { "InstancedMeshSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, InstancedMeshSettings), Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMeshSettings_MetaData), NewProp_InstancedMeshSettings_MetaData) }; // 3799635786
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset = { "FloatingDetectionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawnerBase, FloatingDetectionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatingDetectionOffset_MetaData), NewProp_FloatingDetectionOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstanceRandom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ColorOutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_ActorSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_bAlwaysSpawnActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_InstancedMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::NewProp_FloatingDetectionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelBasicSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::ClassParams = {
	&UVoxelMeshSpawnerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawnerBase()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerBase.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerBase.OuterSingleton;
}
UVoxelMeshSpawnerBase::UVoxelMeshSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerBase);
UVoxelMeshSpawnerBase::~UVoxelMeshSpawnerBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelMeshSpawnerBase)
// ********** End Class UVoxelMeshSpawnerBase ******************************************************

// ********** Begin Class UVoxelMeshSpawner ********************************************************
void UVoxelMeshSpawner::StaticRegisterNativesUVoxelMeshSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawner;
UClass* UVoxelMeshSpawner::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawner;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawner"),
			Z_Registration_Info_UClass_UVoxelMeshSpawner.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawner,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawner_NoRegister()
{
	return UVoxelMeshSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh to spawn. Can be left to null if AlwaysSpawnActor is true\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh to spawn. Can be left to null if AlwaysSpawnActor is true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsOverrides_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per mesh section\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per mesh section" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialsOverrides_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialsOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialsOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawner, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_ValueProp = { "MaterialsOverrides", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_Key_KeyProp = { "MaterialsOverrides_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides = { "MaterialsOverrides", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawner, MaterialsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsOverrides_MetaData), NewProp_MaterialsOverrides_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawner_Statics::NewProp_MaterialsOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMeshSpawnerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawner_Statics::ClassParams = {
	&UVoxelMeshSpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawner()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawner.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawner.OuterSingleton;
}
UVoxelMeshSpawner::UVoxelMeshSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawner);
UVoxelMeshSpawner::~UVoxelMeshSpawner() {}
// ********** End Class UVoxelMeshSpawner **********************************************************

// ********** Begin Class UVoxelMeshSpawnerGroup ***************************************************
void UVoxelMeshSpawnerGroup::StaticRegisterNativesUVoxelMeshSpawnerGroup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup;
UClass* UVoxelMeshSpawnerGroup::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawnerGroup;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerGroup"),
			Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawnerGroup,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup_NoRegister()
{
	return UVoxelMeshSpawnerGroup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelMeshSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Meshes to spawn. Can be left to null if AlwaysSpawnActor is true\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelMeshSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Meshes to spawn. Can be left to null if AlwaysSpawnActor is true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshSpawnerGroup, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::NewProp_Meshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMeshSpawnerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::ClassParams = {
	&UVoxelMeshSpawnerGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroup()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup.OuterSingleton;
}
UVoxelMeshSpawnerGroup::UVoxelMeshSpawnerGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerGroup);
UVoxelMeshSpawnerGroup::~UVoxelMeshSpawnerGroup() {}
// ********** End Class UVoxelMeshSpawnerGroup *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelMeshSpawner_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelMeshSpawnerInstanceRandom_StaticEnum, TEXT("EVoxelMeshSpawnerInstanceRandom"), &Z_Registration_Info_UEnum_EVoxelMeshSpawnerInstanceRandom, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2581096075U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMeshSpawnerBase, UVoxelMeshSpawnerBase::StaticClass, TEXT("UVoxelMeshSpawnerBase"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerBase), 1818231905U) },
		{ Z_Construct_UClass_UVoxelMeshSpawner, UVoxelMeshSpawner::StaticClass, TEXT("UVoxelMeshSpawner"), &Z_Registration_Info_UClass_UVoxelMeshSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawner), 2960732189U) },
		{ Z_Construct_UClass_UVoxelMeshSpawnerGroup, UVoxelMeshSpawnerGroup::StaticClass, TEXT("UVoxelMeshSpawnerGroup"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerGroup), 1958197946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelMeshSpawner_h__Script_Voxel_851381490(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelMeshSpawner_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelMeshSpawner_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelMeshSpawner_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelMeshSpawner_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
