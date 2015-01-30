// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef THEARENA_ArenaPlayerCameraManager_generated_h
#error "ArenaPlayerCameraManager.generated.h already included, missing '#pragma once' in ArenaPlayerCameraManager.h"
#endif
#define THEARENA_ArenaPlayerCameraManager_generated_h

#define AArenaPlayerCameraManager_EVENTPARMS
#define AArenaPlayerCameraManager_RPC_WRAPPERS
#define AArenaPlayerCameraManager_CALLBACK_WRAPPERS
#define AArenaPlayerCameraManager_INCLASS \
	private: \
	static void StaticRegisterNativesAArenaPlayerCameraManager(); \
	friend THEARENA_API class UClass* Z_Construct_UClass_AArenaPlayerCameraManager(); \
	public: \
	DECLARE_CLASS(AArenaPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TheArena, NO_API) \
	DECLARE_SERIALIZER(AArenaPlayerCameraManager) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AArenaPlayerCameraManager*>(this); }


#define AArenaPlayerCameraManager_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaPlayerCameraManager(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaPlayerCameraManager) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaPlayerCameraManager(const AArenaPlayerCameraManager& InCopy); \
public:


#define AArenaPlayerCameraManager_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaPlayerCameraManager(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaPlayerCameraManager(const AArenaPlayerCameraManager& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaPlayerCameraManager)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AArenaPlayerCameraManager


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AArenaPlayerCameraManager_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaPlayerCameraManager_RPC_WRAPPERS \
	AArenaPlayerCameraManager_CALLBACK_WRAPPERS \
	AArenaPlayerCameraManager_INCLASS \
	AArenaPlayerCameraManager_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaPlayerCameraManager_RPC_WRAPPERS \
	AArenaPlayerCameraManager_CALLBACK_WRAPPERS \
	AArenaPlayerCameraManager_INCLASS \
	AArenaPlayerCameraManager_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArenaPlayerCameraManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


