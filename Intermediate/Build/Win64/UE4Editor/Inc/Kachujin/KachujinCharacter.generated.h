// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KACHUJIN_KachujinCharacter_generated_h
#error "KachujinCharacter.generated.h already included, missing '#pragma once' in KachujinCharacter.h"
#endif
#define KACHUJIN_KachujinCharacter_generated_h

#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_SPARSE_DATA
#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_RPC_WRAPPERS
#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKachujinCharacter(); \
	friend struct Z_Construct_UClass_AKachujinCharacter_Statics; \
public: \
	DECLARE_CLASS(AKachujinCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kachujin"), NO_API) \
	DECLARE_SERIALIZER(AKachujinCharacter)


#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKachujinCharacter(); \
	friend struct Z_Construct_UClass_AKachujinCharacter_Statics; \
public: \
	DECLARE_CLASS(AKachujinCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Kachujin"), NO_API) \
	DECLARE_SERIALIZER(AKachujinCharacter)


#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKachujinCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKachujinCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKachujinCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKachujinCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKachujinCharacter(AKachujinCharacter&&); \
	NO_API AKachujinCharacter(const AKachujinCharacter&); \
public:


#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKachujinCharacter(AKachujinCharacter&&); \
	NO_API AKachujinCharacter(const AKachujinCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKachujinCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKachujinCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKachujinCharacter)


#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AKachujinCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AKachujinCharacter, CameraBoom); }


#define Kachujin_Source_Kachujin_KachujinCharacter_h_9_PROLOG
#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_SPARSE_DATA \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_RPC_WRAPPERS \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_INCLASS \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kachujin_Source_Kachujin_KachujinCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_SPARSE_DATA \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Kachujin_Source_Kachujin_KachujinCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KACHUJIN_API UClass* StaticClass<class AKachujinCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kachujin_Source_Kachujin_KachujinCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
