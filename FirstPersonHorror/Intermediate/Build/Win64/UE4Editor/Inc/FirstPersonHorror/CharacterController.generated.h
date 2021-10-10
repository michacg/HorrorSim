// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONHORROR_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define FIRSTPERSONHORROR_CharacterController_generated_h

#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_SPARSE_DATA
#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump);


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump);


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonHorror"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
public: \
	DECLARE_CLASS(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonHorror"), NO_API) \
	DECLARE_SERIALIZER(ACharacterController)


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public:


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterController(ACharacterController&&); \
	NO_API ACharacterController(const ACharacterController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController)


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cam() { return STRUCT_OFFSET(ACharacterController, cam); }


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_11_PROLOG
#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_SPARSE_DATA \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_RPC_WRAPPERS \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_INCLASS \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_PRIVATE_PROPERTY_OFFSET \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_SPARSE_DATA \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_INCLASS_NO_PURE_DECLS \
	FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONHORROR_API UClass* StaticClass<class ACharacterController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPersonHorror_Source_FirstPersonHorror_CharacterController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
