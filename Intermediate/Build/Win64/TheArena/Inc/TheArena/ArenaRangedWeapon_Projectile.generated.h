// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef THEARENA_ArenaRangedWeapon_Projectile_generated_h
#error "ArenaRangedWeapon_Projectile.generated.h already included, missing '#pragma once' in ArenaRangedWeapon_Projectile.h"
#endif
#define THEARENA_ArenaRangedWeapon_Projectile_generated_h

extern THEARENA_API FName THEARENA_ServerFireProjectile;
#define AArenaRangedWeapon_Projectile_USTRUCT_BODY_LINE_9 \
	friend THEARENA_API class UScriptStruct* Z_Construct_UScriptStruct_AArenaRangedWeapon_Projectile_FProjectileWeaponData(); \
	THEARENA_API static class UScriptStruct* StaticStruct();


#define AArenaRangedWeapon_Projectile_EVENTPARMS \
struct ArenaRangedWeapon_Projectile_eventServerFireProjectile_Parms \
{ \
	FVector Origin; \
	struct FVector_NetQuantizeNormal ShootDir; \
};


#define AArenaRangedWeapon_Projectile_RPC_WRAPPERS \
	 virtual bool ServerFireProjectile_Validate(FVector Origin, struct FVector_NetQuantizeNormal ShootDir); \
	virtual void ServerFireProjectile_Implementation(FVector Origin, struct FVector_NetQuantizeNormal ShootDir); \
 \
	DECLARE_FUNCTION(execServerFireProjectile) \
	{ \
		P_GET_STRUCT(FVector,Origin); \
		P_GET_STRUCT(struct FVector_NetQuantizeNormal,ShootDir); \
		P_FINISH; \
		if (!this->ServerFireProjectile_Validate(Origin,ShootDir)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFireProjectile_Validate")); \
			return; \
		} \
		this->ServerFireProjectile_Implementation(Origin,ShootDir); \
	}


#define AArenaRangedWeapon_Projectile_CALLBACK_WRAPPERS
#define AArenaRangedWeapon_Projectile_INCLASS \
	private: \
	static void StaticRegisterNativesAArenaRangedWeapon_Projectile(); \
	friend THEARENA_API class UClass* Z_Construct_UClass_AArenaRangedWeapon_Projectile(); \
	public: \
	DECLARE_CLASS(AArenaRangedWeapon_Projectile, AArenaRangedWeapon, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TheArena, NO_API) \
	DECLARE_SERIALIZER(AArenaRangedWeapon_Projectile) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AArenaRangedWeapon_Projectile*>(this); }


#define AArenaRangedWeapon_Projectile_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaRangedWeapon_Projectile(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaRangedWeapon_Projectile) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaRangedWeapon_Projectile(const AArenaRangedWeapon_Projectile& InCopy); \
public:


#define AArenaRangedWeapon_Projectile_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaRangedWeapon_Projectile(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaRangedWeapon_Projectile(const AArenaRangedWeapon_Projectile& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaRangedWeapon_Projectile)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AArenaRangedWeapon_Projectile


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AArenaRangedWeapon_Projectile_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaRangedWeapon_Projectile_RPC_WRAPPERS \
	AArenaRangedWeapon_Projectile_CALLBACK_WRAPPERS \
	AArenaRangedWeapon_Projectile_INCLASS \
	AArenaRangedWeapon_Projectile_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaRangedWeapon_Projectile_RPC_WRAPPERS \
	AArenaRangedWeapon_Projectile_CALLBACK_WRAPPERS \
	AArenaRangedWeapon_Projectile_INCLASS \
	AArenaRangedWeapon_Projectile_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArenaRangedWeapon_Projectile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


