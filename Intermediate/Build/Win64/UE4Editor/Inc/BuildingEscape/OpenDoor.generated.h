// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define BUILDINGESCAPE_OpenDoor_generated_h

#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_RPC_WRAPPERS
#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__openAngle() { return STRUCT_OFFSET(UOpenDoor, openAngle); } \
	FORCEINLINE static uint32 __PPO__pressurePlate() { return STRUCT_OFFSET(UOpenDoor, pressurePlate); } \
	FORCEINLINE static uint32 __PPO__doorCloseDelay() { return STRUCT_OFFSET(UOpenDoor, doorCloseDelay); } \
	FORCEINLINE static uint32 __PPO__triggerMass() { return STRUCT_OFFSET(UOpenDoor, triggerMass); }


#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_9_PROLOG
#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_RPC_WRAPPERS \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_INCLASS \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_INCLASS_NO_PURE_DECLS \
	UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealSection_03_BuildingEscape_Source_BuildingEscape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
