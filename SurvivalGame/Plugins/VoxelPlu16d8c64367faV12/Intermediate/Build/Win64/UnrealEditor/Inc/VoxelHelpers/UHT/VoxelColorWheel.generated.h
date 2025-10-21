// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelColorWheel.h"

#ifdef VOXELHELPERS_VoxelColorWheel_generated_h
#error "VoxelColorWheel.generated.h already included, missing '#pragma once' in VoxelColorWheel.h"
#endif
#define VOXELHELPERS_VoxelColorWheel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLinearColor;

// ********** Begin Delegate FOnVoxelColorWheelColorChangedEvent ***********************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_11_DELEGATE \
VOXELHELPERS_API void FOnVoxelColorWheelColorChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVoxelColorWheelColorChangedEvent, FLinearColor const& NewColor);


// ********** End Delegate FOnVoxelColorWheelColorChangedEvent *************************************

// ********** Begin Class UVoxelColorWheel *********************************************************
VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelColorWheel(); \
	friend struct Z_Construct_UClass_UVoxelColorWheel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelColorWheel_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelColorWheel, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelHelpers"), Z_Construct_UClass_UVoxelColorWheel_NoRegister) \
	DECLARE_SERIALIZER(UVoxelColorWheel)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelColorWheel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelColorWheel(UVoxelColorWheel&&) = delete; \
	UVoxelColorWheel(const UVoxelColorWheel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelColorWheel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelColorWheel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelColorWheel) \
	NO_API virtual ~UVoxelColorWheel();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_13_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelColorWheel;

// ********** End Class UVoxelColorWheel ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_VoxelColorWheel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
