// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"

#ifdef PROJECTDELIVERYHELL_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define PROJECTDELIVERYHELL_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInventoryComponent;
struct FRecipeIngredient;

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_11_DELEGATE \
PROJECTDELIVERYHELL_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin Class UInventoryComponent ******************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_CraftItem_Implementation(int32 CraftItemID, int32 CraftQuantity, TArray<FRecipeIngredient> const& RequiredMaterials); \
	virtual void Server_SwapInventorySlots_Implementation(UInventoryComponent* OtherInventoryComponent, int32 OtherInventoryIndex, int32 ThisInventoryIndex); \
	DECLARE_FUNCTION(execServer_CraftItem); \
	DECLARE_FUNCTION(execCraftItem); \
	DECLARE_FUNCTION(execCanCraftItem); \
	DECLARE_FUNCTION(execServer_SwapInventorySlots); \
	DECLARE_FUNCTION(execSwapInventorySlots); \
	DECLARE_FUNCTION(execRemoveFromInventorByItemID); \
	DECLARE_FUNCTION(execRemoveFromInventoryByInventoryIndex); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execPrintInventory_TEST); \
	DECLARE_FUNCTION(execOnRep_Inventory);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_CALLBACK_WRAPPERS
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectDeliveryHell"), Z_Construct_UClass_UInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Inventory=NETFIELD_REP_START, \
		NETFIELD_REP_END=Inventory	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&) = delete; \
	UInventoryComponent(const UInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_13_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryComponent;

// ********** End Class UInventoryComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
