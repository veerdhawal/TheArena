// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef THEARENA_ArenaRangedWeapon_generated_h
#error "ArenaRangedWeapon.generated.h already included, missing '#pragma once' in ArenaRangedWeapon.h"
#endif
#define THEARENA_ArenaRangedWeapon_generated_h

extern THEARENA_API FName THEARENA_ClientStartReload;
extern THEARENA_API FName THEARENA_ServerHandleFiring;
extern THEARENA_API FName THEARENA_ServerStartFire;
extern THEARENA_API FName THEARENA_ServerStartMelee;
extern THEARENA_API FName THEARENA_ServerStartReload;
extern THEARENA_API FName THEARENA_ServerStopFire;
extern THEARENA_API FName THEARENA_ServerStopMelee;
extern THEARENA_API FName THEARENA_ServerStopReload;
#define AArenaRangedWeapon_USTRUCT_BODY_LINE_25 \
	friend THEARENA_API class UScriptStruct* Z_Construct_UScriptStruct_AArenaRangedWeapon_FWeaponData(); \
	THEARENA_API static class UScriptStruct* StaticStruct();


#define AArenaRangedWeapon_USTRUCT_BODY_LINE_76 \
	friend THEARENA_API class UScriptStruct* Z_Construct_UScriptStruct_AArenaRangedWeapon_FWeaponAnim(); \
	THEARENA_API static class UScriptStruct* StaticStruct();


#define AArenaRangedWeapon_EVENTPARMS
#define AArenaRangedWeapon_RPC_WRAPPERS \
	 virtual bool ServerStopReload_Validate(); \
	virtual void ServerStopReload_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStopReload) \
	{ \
		P_FINISH; \
		if (!this->ServerStopReload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopReload_Validate")); \
			return; \
		} \
		this->ServerStopReload_Implementation(); \
	} \
	 virtual bool ServerStopMelee_Validate(); \
	virtual void ServerStopMelee_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStopMelee) \
	{ \
		P_FINISH; \
		if (!this->ServerStopMelee_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopMelee_Validate")); \
			return; \
		} \
		this->ServerStopMelee_Implementation(); \
	} \
	 virtual bool ServerStopFire_Validate(); \
	virtual void ServerStopFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStopFire) \
	{ \
		P_FINISH; \
		if (!this->ServerStopFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopFire_Validate")); \
			return; \
		} \
		this->ServerStopFire_Implementation(); \
	} \
	 virtual bool ServerStartReload_Validate(); \
	virtual void ServerStartReload_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStartReload) \
	{ \
		P_FINISH; \
		if (!this->ServerStartReload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartReload_Validate")); \
			return; \
		} \
		this->ServerStartReload_Implementation(); \
	} \
	 virtual bool ServerStartMelee_Validate(); \
	virtual void ServerStartMelee_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStartMelee) \
	{ \
		P_FINISH; \
		if (!this->ServerStartMelee_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartMelee_Validate")); \
			return; \
		} \
		this->ServerStartMelee_Implementation(); \
	} \
	 virtual bool ServerStartFire_Validate(); \
	virtual void ServerStartFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStartFire) \
	{ \
		P_FINISH; \
		if (!this->ServerStartFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartFire_Validate")); \
			return; \
		} \
		this->ServerStartFire_Implementation(); \
	} \
	 virtual bool ServerHandleFiring_Validate(); \
	virtual void ServerHandleFiring_Implementation(); \
 \
	DECLARE_FUNCTION(execServerHandleFiring) \
	{ \
		P_FINISH; \
		if (!this->ServerHandleFiring_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerHandleFiring_Validate")); \
			return; \
		} \
		this->ServerHandleFiring_Implementation(); \
	} \
	DECLARE_FUNCTION(execOnRep_Reload) \
	{ \
		P_FINISH; \
		this->OnRep_Reload(); \
	} \
	DECLARE_FUNCTION(execOnRep_MyPawn) \
	{ \
		P_FINISH; \
		this->OnRep_MyPawn(); \
	} \
	DECLARE_FUNCTION(execOnRep_Melee) \
	{ \
		P_FINISH; \
		this->OnRep_Melee(); \
	} \
	DECLARE_FUNCTION(execOnRep_BurstCounter) \
	{ \
		P_FINISH; \
		this->OnRep_BurstCounter(); \
	} \
	DECLARE_FUNCTION(execGetPawnOwner) \
	{ \
		P_FINISH; \
		*(class AArenaCharacter**)Result=this->GetPawnOwner(); \
	} \
	virtual void ClientStartReload_Implementation(); \
 \
	DECLARE_FUNCTION(execClientStartReload) \
	{ \
		P_FINISH; \
		this->ClientStartReload_Implementation(); \
	}


#define AArenaRangedWeapon_CALLBACK_WRAPPERS
#define AArenaRangedWeapon_INCLASS \
	private: \
	static void StaticRegisterNativesAArenaRangedWeapon(); \
	friend THEARENA_API class UClass* Z_Construct_UClass_AArenaRangedWeapon(); \
	public: \
	DECLARE_CLASS(AArenaRangedWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TheArena, NO_API) \
	DECLARE_SERIALIZER(AArenaRangedWeapon) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AArenaRangedWeapon*>(this); } \
	virtual void GetLifetimeReplicatedProps( TArray< FLifetimeProperty > & OutLifetimeProps ) const override;


#define AArenaRangedWeapon_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaRangedWeapon(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaRangedWeapon) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaRangedWeapon(const AArenaRangedWeapon& InCopy); \
public:


#define AArenaRangedWeapon_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaRangedWeapon(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaRangedWeapon(const AArenaRangedWeapon& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaRangedWeapon)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AArenaRangedWeapon


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AArenaRangedWeapon_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaRangedWeapon_RPC_WRAPPERS \
	AArenaRangedWeapon_CALLBACK_WRAPPERS \
	AArenaRangedWeapon_INCLASS \
	AArenaRangedWeapon_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaRangedWeapon_RPC_WRAPPERS \
	AArenaRangedWeapon_CALLBACK_WRAPPERS \
	AArenaRangedWeapon_INCLASS \
	AArenaRangedWeapon_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArenaRangedWeapon."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


