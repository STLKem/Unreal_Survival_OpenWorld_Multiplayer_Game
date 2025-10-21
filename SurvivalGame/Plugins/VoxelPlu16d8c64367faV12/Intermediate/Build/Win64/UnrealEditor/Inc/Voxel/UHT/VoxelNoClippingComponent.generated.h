// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelComponents/VoxelNoClippingComponent.h"

#ifdef VOXEL_VoxelNoClippingComponent_generated_h
#error "VoxelNoClippingComponent.generated.h already included, missing '#pragma once' in VoxelNoClippingComponent.h"
#endif
#define VOXEL_VoxelNoClippingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorld;

// ********** Begin Delegate FOnMoveTowardsSurface *************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_62_DELEGATE \
static void FOnMoveTowardsSurface_DelegateWrapper(const FMulticastScriptDelegate& OnMoveTowardsSurface);


// ********** End Delegate FOnMoveTowardsSurface ***************************************************

// ********** Begin Delegate FOnStopMovingTowardsSurface *******************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_63_DELEGATE \
static void FOnStopMovingTowardsSurface_DelegateWrapper(const FMulticastScriptDelegate& OnStopMovingTowardsSurface);


// ********** End Delegate FOnStopMovingTowardsSurface *********************************************

// ********** Begin Delegate FOnTeleported *********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_64_DELEGATE \
static void FOnTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnTeleported);


// ********** End Delegate FOnTeleported ***********************************************************

// ********** Begin Class UVoxelNoClippingComponent ************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldUseVoxelWorld);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_CALLBACK_WRAPPERS
VOXEL_API UClass* Z_Construct_UClass_UVoxelNoClippingComponent_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelNoClippingComponent(); \
	friend struct Z_Construct_UClass_UVoxelNoClippingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelNoClippingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelNoClippingComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelNoClippingComponent_NoRegister) \
	DECLARE_SERIALIZER(UVoxelNoClippingComponent)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelNoClippingComponent(UVoxelNoClippingComponent&&) = delete; \
	UVoxelNoClippingComponent(const UVoxelNoClippingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelNoClippingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelNoClippingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelNoClippingComponent) \
	NO_API virtual ~UVoxelNoClippingComponent();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_25_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelNoClippingComponent;

// ********** End Class UVoxelNoClippingComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
