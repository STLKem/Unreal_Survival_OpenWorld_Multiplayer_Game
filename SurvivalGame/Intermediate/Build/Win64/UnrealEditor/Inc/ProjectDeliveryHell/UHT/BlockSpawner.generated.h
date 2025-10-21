// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlockSpawner.h"

#ifdef PROJECTDELIVERYHELL_BlockSpawner_generated_h
#error "BlockSpawner.generated.h already included, missing '#pragma once' in BlockSpawner.h"
#endif
#define PROJECTDELIVERYHELL_BlockSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;

// ********** Begin Class ABlockSpawner ************************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execSpawnBlock);


PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_ABlockSpawner_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockSpawner(); \
	friend struct Z_Construct_UClass_ABlockSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_ABlockSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ABlockSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDeliveryHell"), Z_Construct_UClass_ABlockSpawner_NoRegister) \
	DECLARE_SERIALIZER(ABlockSpawner)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABlockSpawner(ABlockSpawner&&) = delete; \
	ABlockSpawner(const ABlockSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockSpawner) \
	NO_API virtual ~ABlockSpawner();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_14_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABlockSpawner;

// ********** End Class ABlockSpawner **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
