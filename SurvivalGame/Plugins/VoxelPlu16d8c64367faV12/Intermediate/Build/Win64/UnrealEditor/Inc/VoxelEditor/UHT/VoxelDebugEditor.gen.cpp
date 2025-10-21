// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelDebugEditor.h"
#include "VoxelImporters/VoxelMeshImporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDebugEditor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_Base();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_Base_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_NoRegister();
VOXELEDITOR_API UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis();
VOXELEDITOR_API UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelDebugType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDebugType;
static UEnum* EVoxelDebugType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelDebugType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelDebugType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType, (UObject*)Z_Construct_UPackage__Script_VoxelEditor(), TEXT("EVoxelDebugType"));
	}
	return Z_Registration_Info_UEnum_EVoxelDebugType.OuterSingleton;
}
template<> VOXELEDITOR_API UEnum* StaticEnum<EVoxelDebugType>()
{
	return EVoxelDebugType_StaticEnum();
}
struct Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CustomData.Name", "EVoxelDebugType::CustomData" },
		{ "JumpFlood.Name", "EVoxelDebugType::JumpFlood" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelDebugType::JumpFlood", (int64)EVoxelDebugType::JumpFlood },
		{ "EVoxelDebugType::CustomData", (int64)EVoxelDebugType::CustomData },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelEditor,
	nullptr,
	"EVoxelDebugType",
	"EVoxelDebugType",
	Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugType()
{
	if (!Z_Registration_Info_UEnum_EVoxelDebugType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDebugType.InnerSingleton, Z_Construct_UEnum_VoxelEditor_EVoxelDebugType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelDebugType.InnerSingleton;
}
// ********** End Enum EVoxelDebugType *************************************************************

// ********** Begin Enum EVoxelDebugSliceAxis ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDebugSliceAxis;
static UEnum* EVoxelDebugSliceAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, (UObject*)Z_Construct_UPackage__Script_VoxelEditor(), TEXT("EVoxelDebugSliceAxis"));
	}
	return Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.OuterSingleton;
}
template<> VOXELEDITOR_API UEnum* StaticEnum<EVoxelDebugSliceAxis>()
{
	return EVoxelDebugSliceAxis_StaticEnum();
}
struct Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "X.Name", "EVoxelDebugSliceAxis::X" },
		{ "Y.Name", "EVoxelDebugSliceAxis::Y" },
		{ "Z.Name", "EVoxelDebugSliceAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelDebugSliceAxis::X", (int64)EVoxelDebugSliceAxis::X },
		{ "EVoxelDebugSliceAxis::Y", (int64)EVoxelDebugSliceAxis::Y },
		{ "EVoxelDebugSliceAxis::Z", (int64)EVoxelDebugSliceAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelEditor,
	nullptr,
	"EVoxelDebugSliceAxis",
	"EVoxelDebugSliceAxis",
	Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis()
{
	if (!Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.InnerSingleton, Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelDebugSliceAxis.InnerSingleton;
}
// ********** End Enum EVoxelDebugSliceAxis ********************************************************

// ********** Begin Class UVoxelDebugParameters_Base ***********************************************
void UVoxelDebugParameters_Base::StaticRegisterNativesUVoxelDebugParameters_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDebugParameters_Base;
UClass* UVoxelDebugParameters_Base::GetPrivateStaticClass()
{
	using TClass = UVoxelDebugParameters_Base;
	if (!Z_Registration_Info_UClass_UVoxelDebugParameters_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDebugParameters_Base"),
			Z_Registration_Info_UClass_UVoxelDebugParameters_Base.InnerSingleton,
			StaticRegisterNativesUVoxelDebugParameters_Base,
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
	return Z_Registration_Info_UClass_UVoxelDebugParameters_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDebugParameters_Base_NoRegister()
{
	return UVoxelDebugParameters_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDebugParameters_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdate_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugType;
	static void NewProp_bUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_Base, DebugType), Z_Construct_UEnum_VoxelEditor_EVoxelDebugType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugType_MetaData), NewProp_DebugType_MetaData) }; // 650128739
void Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_SetBit(void* Obj)
{
	((UVoxelDebugParameters_Base*)Obj)->bUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_Base), &Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdate_MetaData), NewProp_bUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_DebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::NewProp_bUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::ClassParams = {
	&UVoxelDebugParameters_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDebugParameters_Base()
{
	if (!Z_Registration_Info_UClass_UVoxelDebugParameters_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugParameters_Base.OuterSingleton, Z_Construct_UClass_UVoxelDebugParameters_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDebugParameters_Base.OuterSingleton;
}
UVoxelDebugParameters_Base::UVoxelDebugParameters_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_Base);
UVoxelDebugParameters_Base::~UVoxelDebugParameters_Base() {}
// ********** End Class UVoxelDebugParameters_Base *************************************************

// ********** Begin Class UVoxelDebugParameters_JumpFlood ******************************************
void UVoxelDebugParameters_JumpFlood::StaticRegisterNativesUVoxelDebugParameters_JumpFlood()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood;
UClass* UVoxelDebugParameters_JumpFlood::GetPrivateStaticClass()
{
	using TClass = UVoxelDebugParameters_JumpFlood;
	if (!Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDebugParameters_JumpFlood"),
			Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.InnerSingleton,
			StaticRegisterNativesUVoxelDebugParameters_JumpFlood,
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
	return Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_NoRegister()
{
	return UVoxelDebugParameters_JumpFlood::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "Source|Sphere" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshImporterSettings_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtension_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Source|Mesh" },
		{ "EditCondition", "bUseMesh" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliceAxis_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Passes_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDistances_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Divisor_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShrink_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCPU_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreaded_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeInSeconds_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshImporterSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoxExtension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SliceAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SliceAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slice;
	static void NewProp_bFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Passes;
	static void NewProp_bShowDistances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDistances;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Divisor;
	static void NewProp_bShrink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShrink;
	static void NewProp_bUseCPU_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCPU;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_JumpFlood>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_SetBit(void* Obj)
{
	((UVoxelDebugParameters_JumpFlood*)Obj)->bUseMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh = { "bUseMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMesh_MetaData), NewProp_bUseMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings = { "MeshImporterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, MeshImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshImporterSettings_MetaData), NewProp_MeshImporterSettings_MetaData) }; // 3539445650
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension = { "BoxExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, BoxExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtension_MetaData), NewProp_BoxExtension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis = { "SliceAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, SliceAxis), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliceAxis_MetaData), NewProp_SliceAxis_MetaData) }; // 3963678897
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Slice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slice_MetaData), NewProp_Slice_MetaData) };
void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_SetBit(void* Obj)
{
	((UVoxelDebugParameters_JumpFlood*)Obj)->bFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlip_MetaData), NewProp_bFlip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes = { "Passes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Passes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Passes_MetaData), NewProp_Passes_MetaData) };
void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_SetBit(void* Obj)
{
	((UVoxelDebugParameters_JumpFlood*)Obj)->bShowDistances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances = { "bShowDistances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDistances_MetaData), NewProp_bShowDistances_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor = { "Divisor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Divisor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Divisor_MetaData), NewProp_Divisor_MetaData) };
void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_SetBit(void* Obj)
{
	((UVoxelDebugParameters_JumpFlood*)Obj)->bShrink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink = { "bShrink", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShrink_MetaData), NewProp_bShrink_MetaData) };
void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_SetBit(void* Obj)
{
	((UVoxelDebugParameters_JumpFlood*)Obj)->bUseCPU = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU = { "bUseCPU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCPU_MetaData), NewProp_bUseCPU_MetaData) };
void Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((UVoxelDebugParameters_JumpFlood*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_JumpFlood), &Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiThreaded_MetaData), NewProp_bMultiThreaded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_JumpFlood, TimeInSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeInSeconds_MetaData), NewProp_TimeInSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_MeshImporterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_BoxExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_SliceAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Slice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Passes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShowDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Divisor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bShrink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bUseCPU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::NewProp_TimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::ClassParams = {
	&UVoxelDebugParameters_JumpFlood::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDebugParameters_JumpFlood()
{
	if (!Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.OuterSingleton, Z_Construct_UClass_UVoxelDebugParameters_JumpFlood_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood.OuterSingleton;
}
UVoxelDebugParameters_JumpFlood::UVoxelDebugParameters_JumpFlood(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_JumpFlood);
UVoxelDebugParameters_JumpFlood::~UVoxelDebugParameters_JumpFlood() {}
// ********** End Class UVoxelDebugParameters_JumpFlood ********************************************

// ********** Begin Class UVoxelDebugParameters_CustomData *****************************************
void UVoxelDebugParameters_CustomData::StaticRegisterNativesUVoxelDebugParameters_CustomData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData;
UClass* UVoxelDebugParameters_CustomData::GetPrivateStaticClass()
{
	using TClass = UVoxelDebugParameters_CustomData;
	if (!Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDebugParameters_CustomData"),
			Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.InnerSingleton,
			StaticRegisterNativesUVoxelDebugParameters_CustomData,
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
	return Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData_NoRegister()
{
	return UVoxelDebugParameters_CustomData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebugEditor.h" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliceAxis_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slice_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlip_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataToDisplay_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
		{ "UIMax", "99" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Private/VoxelDebugEditor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SliceAxis_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SliceAxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slice;
	static void NewProp_bFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlip;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DataToDisplay_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataToDisplay_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DataToDisplay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugParameters_CustomData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis = { "SliceAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, SliceAxis), Z_Construct_UEnum_VoxelEditor_EVoxelDebugSliceAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliceAxis_MetaData), NewProp_SliceAxis_MetaData) }; // 3963678897
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice = { "Slice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Slice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slice_MetaData), NewProp_Slice_MetaData) };
void Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_SetBit(void* Obj)
{
	((UVoxelDebugParameters_CustomData*)Obj)->bFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip = { "bFlip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDebugParameters_CustomData), &Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlip_MetaData), NewProp_bFlip_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_ValueProp = { "DataToDisplay", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_Key_KeyProp = { "DataToDisplay_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay = { "DataToDisplay", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, DataToDisplay), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataToDisplay_MetaData), NewProp_DataToDisplay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Frame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDebugParameters_CustomData, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_SliceAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Slice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_bFlip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_DataToDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::ClassParams = {
	&UVoxelDebugParameters_CustomData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDebugParameters_CustomData()
{
	if (!Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.OuterSingleton, Z_Construct_UClass_UVoxelDebugParameters_CustomData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData.OuterSingleton;
}
UVoxelDebugParameters_CustomData::UVoxelDebugParameters_CustomData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugParameters_CustomData);
UVoxelDebugParameters_CustomData::~UVoxelDebugParameters_CustomData() {}
// ********** End Class UVoxelDebugParameters_CustomData *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelDebugEditor_h__Script_VoxelEditor_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelDebugType_StaticEnum, TEXT("EVoxelDebugType"), &Z_Registration_Info_UEnum_EVoxelDebugType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 650128739U) },
		{ EVoxelDebugSliceAxis_StaticEnum, TEXT("EVoxelDebugSliceAxis"), &Z_Registration_Info_UEnum_EVoxelDebugSliceAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3963678897U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDebugParameters_Base, UVoxelDebugParameters_Base::StaticClass, TEXT("UVoxelDebugParameters_Base"), &Z_Registration_Info_UClass_UVoxelDebugParameters_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugParameters_Base), 3616918317U) },
		{ Z_Construct_UClass_UVoxelDebugParameters_JumpFlood, UVoxelDebugParameters_JumpFlood::StaticClass, TEXT("UVoxelDebugParameters_JumpFlood"), &Z_Registration_Info_UClass_UVoxelDebugParameters_JumpFlood, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugParameters_JumpFlood), 930760125U) },
		{ Z_Construct_UClass_UVoxelDebugParameters_CustomData, UVoxelDebugParameters_CustomData::StaticClass, TEXT("UVoxelDebugParameters_CustomData"), &Z_Registration_Info_UClass_UVoxelDebugParameters_CustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugParameters_CustomData), 717547125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelDebugEditor_h__Script_VoxelEditor_1813949942(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelDebugEditor_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelDebugEditor_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelDebugEditor_h__Script_VoxelEditor_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelDebugEditor_h__Script_VoxelEditor_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
