// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelWorldInterface.h"

#ifdef VOXEL_VoxelWorldInterface_generated_h
#error "VoxelWorldInterface.generated.h already included, missing '#pragma once' in VoxelWorldInterface.h"
#endif
#define VOXEL_VoxelWorldInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AVoxelWorldInterface *****************************************************
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelWorldInterface(); \
	friend struct Z_Construct_UClass_AVoxelWorldInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelWorldInterface, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelWorldInterface_NoRegister) \
	DECLARE_SERIALIZER(AVoxelWorldInterface)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelWorldInterface(AVoxelWorldInterface&&) = delete; \
	AVoxelWorldInterface(const AVoxelWorldInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelWorldInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelWorldInterface) \
	NO_API virtual ~AVoxelWorldInterface();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h_33_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h_40_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelWorldInterface;

// ********** End Class AVoxelWorldInterface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h

// ********** Begin Enum EVoxelWorldCoordinatesRounding ********************************************
#define FOREACH_ENUM_EVOXELWORLDCOORDINATESROUNDING(op) \
	op(EVoxelWorldCoordinatesRounding::RoundToNearest) \
	op(EVoxelWorldCoordinatesRounding::RoundUp) \
	op(EVoxelWorldCoordinatesRounding::RoundDown) 

enum class EVoxelWorldCoordinatesRounding : uint8;
template<> struct TIsUEnumClass<EVoxelWorldCoordinatesRounding> { enum { Value = true }; };
template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldCoordinatesRounding>();
// ********** End Enum EVoxelWorldCoordinatesRounding **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
