// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelPlaceableItems/Actors/VoxelAssetActor.h"
#include "VoxelGenerators/VoxelGeneratorPicker.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelAssetActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
VOXEL_API UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent();
VOXEL_API UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelAssetActorPreviewUpdateType *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType;
static UEnum* EVoxelAssetActorPreviewUpdateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelAssetActorPreviewUpdateType"));
	}
	return Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelAssetActorPreviewUpdateType>()
{
	return EVoxelAssetActorPreviewUpdateType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EndOfMove.Comment", "// Will update after each move\n" },
		{ "EndOfMove.Name", "EVoxelAssetActorPreviewUpdateType::EndOfMove" },
		{ "EndOfMove.ToolTip", "Will update after each move" },
		{ "Manually.Comment", "// Will only update when Update is clicked, or when a property is changed\n" },
		{ "Manually.Name", "EVoxelAssetActorPreviewUpdateType::Manually" },
		{ "Manually.ToolTip", "Will only update when Update is clicked, or when a property is changed" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "RealTime.Comment", "// Will update while moving\n" },
		{ "RealTime.Name", "EVoxelAssetActorPreviewUpdateType::RealTime" },
		{ "RealTime.ToolTip", "Will update while moving" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelAssetActorPreviewUpdateType::Manually", (int64)EVoxelAssetActorPreviewUpdateType::Manually },
		{ "EVoxelAssetActorPreviewUpdateType::EndOfMove", (int64)EVoxelAssetActorPreviewUpdateType::EndOfMove },
		{ "EVoxelAssetActorPreviewUpdateType::RealTime", (int64)EVoxelAssetActorPreviewUpdateType::RealTime },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelAssetActorPreviewUpdateType",
	"EVoxelAssetActorPreviewUpdateType",
	Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType()
{
	if (!Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType.InnerSingleton;
}
// ********** End Enum EVoxelAssetActorPreviewUpdateType *******************************************

// ********** Begin Class UAssetActorPrimitiveComponent ********************************************
void UAssetActorPrimitiveComponent::StaticRegisterNativesUAssetActorPrimitiveComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetActorPrimitiveComponent;
UClass* UAssetActorPrimitiveComponent::GetPrivateStaticClass()
{
	using TClass = UAssetActorPrimitiveComponent;
	if (!Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetActorPrimitiveComponent"),
			Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.InnerSingleton,
			StaticRegisterNativesUAssetActorPrimitiveComponent,
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
	return Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister()
{
	return UAssetActorPrimitiveComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetActorPrimitiveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::ClassParams = {
	&UAssetActorPrimitiveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetActorPrimitiveComponent()
{
	if (!Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.OuterSingleton, Z_Construct_UClass_UAssetActorPrimitiveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetActorPrimitiveComponent.OuterSingleton;
}
UAssetActorPrimitiveComponent::UAssetActorPrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetActorPrimitiveComponent);
UAssetActorPrimitiveComponent::~UAssetActorPrimitiveComponent() {}
// ********** End Class UAssetActorPrimitiveComponent **********************************************

// ********** Begin Class AVoxelAssetActor *********************************************************
void AVoxelAssetActor::StaticRegisterNativesAVoxelAssetActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelAssetActor;
UClass* AVoxelAssetActor::GetPrivateStaticClass()
{
	using TClass = AVoxelAssetActor;
	if (!Z_Registration_Info_UClass_AVoxelAssetActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelAssetActor"),
			Z_Registration_Info_UClass_AVoxelAssetActor.InnerSingleton,
			StaticRegisterNativesAVoxelAssetActor,
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
	return Z_Registration_Info_UClass_AVoxelAssetActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelAssetActor_NoRegister()
{
	return AVoxelAssetActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelAssetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking Collision" },
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher priority assets will be on top\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher priority assets will be on top" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAssetBounds_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetBounds_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "EditCondition", "bOverrideAssetBounds" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractiveAsset_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "EditCondition", "!bImportAsReference" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeMode_MetaData[] = {
		{ "Category", "Asset Actor Settings" },
		{ "EditCondition", "!bImportAsReference" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewLOD_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The lower, the better looking but the slower\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The lower, the better looking but the slower" },
#endif
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateType_MetaData[] = {
		{ "Category", "Preview Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetPosition_MetaData[] = {
		{ "Category", "Preview Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the voxel asset actor position will be rounded to the nearest voxel position when moved\n// Always on in cubic mode\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the voxel asset actor position will be rounded to the nearest voxel position when moved\nAlways on in cubic mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetRotation_MetaData[] = {
		{ "Category", "Preview Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the voxel asset actor rotation will be rounded to the nearest valid rotation (90/180/-90)\n// Always on in cubic mode\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the voxel asset actor rotation will be rounded to the nearest valid rotation (90/180/-90)\nAlways on in cubic mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPreviewChunks_MetaData[] = {
		{ "Category", "Preview Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increase this if you want a higher quality preview\n// Be careful: might freeze Unreal if too high!\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increase this if you want a higher quality preview\nBe careful: might freeze Unreal if too high!" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelAssetActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static void NewProp_bOverrideAssetBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAssetBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetBounds;
	static void NewProp_bImportAsReference_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
	static void NewProp_bSubtractiveAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractiveAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateType;
	static void NewProp_bRoundAssetPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetPosition;
	static void NewProp_bRoundAssetRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetRotation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxPreviewChunks;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelAssetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, Generator), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) }; // 3102180178
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_SetBit(void* Obj)
{
	((AVoxelAssetActor*)Obj)->bOverrideAssetBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds = { "bOverrideAssetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAssetBounds_MetaData), NewProp_bOverrideAssetBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds = { "AssetBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, AssetBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetBounds_MetaData), NewProp_AssetBounds_MetaData) }; // 3520536583
void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
{
	((AVoxelAssetActor*)Obj)->bImportAsReference = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportAsReference_MetaData), NewProp_bImportAsReference_MetaData) };
void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_SetBit(void* Obj)
{
	((AVoxelAssetActor*)Obj)->bSubtractiveAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset = { "bSubtractiveAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtractiveAsset_MetaData), NewProp_bSubtractiveAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, MergeMode), Z_Construct_UEnum_Voxel_EVoxelAssetMergeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeMode_MetaData), NewProp_MergeMode_MetaData) }; // 3319000532
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD = { "PreviewLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, PreviewLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewLOD_MetaData), NewProp_PreviewLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType = { "UpdateType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, UpdateType), Z_Construct_UEnum_Voxel_EVoxelAssetActorPreviewUpdateType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateType_MetaData), NewProp_UpdateType_MetaData) }; // 2403448876
void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_SetBit(void* Obj)
{
	((AVoxelAssetActor*)Obj)->bRoundAssetPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition = { "bRoundAssetPosition", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundAssetPosition_MetaData), NewProp_bRoundAssetPosition_MetaData) };
void Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_SetBit(void* Obj)
{
	((AVoxelAssetActor*)Obj)->bRoundAssetRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation = { "bRoundAssetRotation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelAssetActor), &Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundAssetRotation_MetaData), NewProp_bRoundAssetRotation_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks = { "MaxPreviewChunks", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, MaxPreviewChunks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPreviewChunks_MetaData), NewProp_MaxPreviewChunks_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, PrimitiveComponent), Z_Construct_UClass_UAssetActorPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveComponent_MetaData), NewProp_PrimitiveComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0144000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelAssetActor, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bOverrideAssetBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_AssetBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bImportAsReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bSubtractiveAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MergeMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PreviewLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_UpdateType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_bRoundAssetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_MaxPreviewChunks,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Root,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_PrimitiveComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelAssetActor_Statics::NewProp_Box,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelAssetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVoxelPlaceableItemActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVoxelAssetActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister, (int32)VTABLE_OFFSET(AVoxelAssetActor, IVoxelEditorDelegatesInterface), false },  // 1557566173
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelAssetActor_Statics::ClassParams = {
	&AVoxelAssetActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelAssetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelAssetActor()
{
	if (!Z_Registration_Info_UClass_AVoxelAssetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelAssetActor.OuterSingleton, Z_Construct_UClass_AVoxelAssetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelAssetActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelAssetActor);
AVoxelAssetActor::~AVoxelAssetActor() {}
// ********** End Class AVoxelAssetActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelAssetActorPreviewUpdateType_StaticEnum, TEXT("EVoxelAssetActorPreviewUpdateType"), &Z_Registration_Info_UEnum_EVoxelAssetActorPreviewUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2403448876U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetActorPrimitiveComponent, UAssetActorPrimitiveComponent::StaticClass, TEXT("UAssetActorPrimitiveComponent"), &Z_Registration_Info_UClass_UAssetActorPrimitiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetActorPrimitiveComponent), 3122630120U) },
		{ Z_Construct_UClass_AVoxelAssetActor, AVoxelAssetActor::StaticClass, TEXT("AVoxelAssetActor"), &Z_Registration_Info_UClass_AVoxelAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelAssetActor), 3334253929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h__Script_Voxel_219494261(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelAssetActor_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
