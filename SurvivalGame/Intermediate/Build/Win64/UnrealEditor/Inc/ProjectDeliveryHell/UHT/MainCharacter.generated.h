// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"

#ifdef PROJECTDELIVERYHELL_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define PROJECTDELIVERYHELL_MainCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Delegate FOnParameterUpdate ****************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_11_DELEGATE \
PROJECTDELIVERYHELL_API void FOnParameterUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnParameterUpdate);


// ********** End Delegate FOnParameterUpdate ******************************************************

// ********** Begin Class AMainCharacter ***********************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_InteractWithResource_Implementation(AActor* ResourceActor, AActor* Player); \
	DECLARE_FUNCTION(execServer_InteractWithResource); \
	DECLARE_FUNCTION(execGetCameraData);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_CALLBACK_WRAPPERS
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDeliveryHell"), Z_Construct_UClass_AMainCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMainCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMainCharacter*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		Hunger, \
		MaxHunger, \
		Water, \
		MaxWater, \
		Temperature, \
		Stamina, \
		Armor, \
		NETFIELD_REP_END=Armor	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&) = delete; \
	AMainCharacter(const AMainCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_20_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainCharacter;

// ********** End Class AMainCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
