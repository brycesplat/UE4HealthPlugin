// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HEALTHPLUGIN_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define HEALTHPLUGIN_HealthComponent_generated_h

#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_SPARSE_DATA
#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execCheckOverHealth); \
	DECLARE_FUNCTION(execBreakHealthBar); \
	DECLARE_FUNCTION(execCheckDeath); \
	DECLARE_FUNCTION(execHealPercentHealth); \
	DECLARE_FUNCTION(execHealHealth); \
	DECLARE_FUNCTION(execTakePercentDamage); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetHealthBarNumber); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealthBars); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execGetPercentHealth); \
	DECLARE_FUNCTION(execSetup);


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execCheckOverHealth); \
	DECLARE_FUNCTION(execBreakHealthBar); \
	DECLARE_FUNCTION(execCheckDeath); \
	DECLARE_FUNCTION(execHealPercentHealth); \
	DECLARE_FUNCTION(execHealHealth); \
	DECLARE_FUNCTION(execTakePercentDamage); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetHealthBarNumber); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execSetHealthBars); \
	DECLARE_FUNCTION(execSetHealth); \
	DECLARE_FUNCTION(execGetPercentHealth); \
	DECLARE_FUNCTION(execSetup);


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HealthPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HealthPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_10_PROLOG
#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_SPARSE_DATA \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_RPC_WRAPPERS \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_INCLASS \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_SPARSE_DATA \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEALTHPLUGIN_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLabo_Plugins_HealthPlugin_Source_HealthPlugin_Public_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
