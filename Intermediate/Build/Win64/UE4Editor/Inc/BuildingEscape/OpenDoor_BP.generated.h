// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_OpenDoor_BP_generated_h
#error "OpenDoor_BP.generated.h already included, missing '#pragma once' in OpenDoor_BP.h"
#endif
#define BUILDINGESCAPE_OpenDoor_BP_generated_h

#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_8_DELEGATE \
static inline void FDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& DoorEvent) \
{ \
	DoorEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor_BP(); \
	friend struct Z_Construct_UClass_UOpenDoor_BP_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor_BP, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor_BP)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor_BP(); \
	friend struct Z_Construct_UClass_UOpenDoor_BP_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor_BP, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor_BP)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor_BP(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor_BP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor_BP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor_BP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor_BP(UOpenDoor_BP&&); \
	NO_API UOpenDoor_BP(const UOpenDoor_BP&); \
public:


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor_BP(UOpenDoor_BP&&); \
	NO_API UOpenDoor_BP(const UOpenDoor_BP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor_BP); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor_BP); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor_BP)


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pressurePlate() { return STRUCT_OFFSET(UOpenDoor_BP, pressurePlate); } \
	FORCEINLINE static uint32 __PPO__triggerMass() { return STRUCT_OFFSET(UOpenDoor_BP, triggerMass); }


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_10_PROLOG
#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_INCLASS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UOpenDoor_BP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_OpenDoor_BP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
