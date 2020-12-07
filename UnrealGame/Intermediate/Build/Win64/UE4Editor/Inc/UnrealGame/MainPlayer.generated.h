// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define UNREALGAME_MainPlayer_generated_h

#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_SPARSE_DATA
#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execZoomCamera); \
	DECLARE_FUNCTION(execShakeCamera); \
	DECLARE_FUNCTION(execgetMoveDir);


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execZoomCamera); \
	DECLARE_FUNCTION(execShakeCamera); \
	DECLARE_FUNCTION(execgetMoveDir);


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayer(); \
	friend struct Z_Construct_UClass_AMainPlayer_Statics; \
public: \
	DECLARE_CLASS(AMainPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayer)


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public:


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayer(AMainPlayer&&); \
	NO_API AMainPlayer(const AMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayer)


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__prepForDash() { return STRUCT_OFFSET(AMainPlayer, prepForDash); } \
	FORCEINLINE static uint32 __PPO__CanDash() { return STRUCT_OFFSET(AMainPlayer, CanDash); } \
	FORCEINLINE static uint32 __PPO__Dashing() { return STRUCT_OFFSET(AMainPlayer, Dashing); } \
	FORCEINLINE static uint32 __PPO__dashDistance() { return STRUCT_OFFSET(AMainPlayer, dashDistance); } \
	FORCEINLINE static uint32 __PPO__dashSpeed() { return STRUCT_OFFSET(AMainPlayer, dashSpeed); } \
	FORCEINLINE static uint32 __PPO__freezeFrameTimer() { return STRUCT_OFFSET(AMainPlayer, freezeFrameTimer); } \
	FORCEINLINE static uint32 __PPO__HitBox() { return STRUCT_OFFSET(AMainPlayer, HitBox); } \
	FORCEINLINE static uint32 __PPO__CameraShakeDistance() { return STRUCT_OFFSET(AMainPlayer, CameraShakeDistance); } \
	FORCEINLINE static uint32 __PPO__CameraShakeTimer() { return STRUCT_OFFSET(AMainPlayer, CameraShakeTimer); } \
	FORCEINLINE static uint32 __PPO__zoomAmount() { return STRUCT_OFFSET(AMainPlayer, zoomAmount); } \
	FORCEINLINE static uint32 __PPO__zoomSpeed() { return STRUCT_OFFSET(AMainPlayer, zoomSpeed); }


#define UnrealGame_Source_UnrealGame_MainPlayer_h_12_PROLOG
#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_SPARSE_DATA \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_RPC_WRAPPERS \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_INCLASS \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame_Source_UnrealGame_MainPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_SPARSE_DATA \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_INCLASS_NO_PURE_DECLS \
	UnrealGame_Source_UnrealGame_MainPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME_API UClass* StaticClass<class AMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame_Source_UnrealGame_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
