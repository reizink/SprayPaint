// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBracerCotask;
enum class EBracerExceptionResult : uint8;
struct FVibration;
class UBracerLibrary;
class UDeviceNetwork;
struct FAdnNode;
#ifdef ANTILATENCYBRACER_BracerFunctionLibrary_generated_h
#error "BracerFunctionLibrary.generated.h already included, missing '#pragma once' in BracerFunctionLibrary.h"
#endif
#define ANTILATENCYBRACER_BracerFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBracerTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execExecuteVibrationSequence); \
	DECLARE_FUNCTION(execGetTouch); \
	DECLARE_FUNCTION(execGetTouchNativeValue); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execStartBracerTask); \
	DECLARE_FUNCTION(execGetBracerLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBracerTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execExecuteVibrationSequence); \
	DECLARE_FUNCTION(execGetTouch); \
	DECLARE_FUNCTION(execGetTouchNativeValue); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execStartBracerTask); \
	DECLARE_FUNCTION(execGetBracerLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBracerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBracerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBracerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyBracer"), NO_API) \
	DECLARE_SERIALIZER(UBracerFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUBracerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBracerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBracerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyBracer"), NO_API) \
	DECLARE_SERIALIZER(UBracerFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBracerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBracerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBracerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBracerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBracerFunctionLibrary(UBracerFunctionLibrary&&); \
	NO_API UBracerFunctionLibrary(const UBracerFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBracerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBracerFunctionLibrary(UBracerFunctionLibrary&&); \
	NO_API UBracerFunctionLibrary(const UBracerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBracerFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBracerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBracerFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_39_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYBRACER_API UClass* StaticClass<class UBracerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyBracer_Public_BracerFunctionLibrary_h


#define FOREACH_ENUM_EBRACEREXCEPTIONRESULT(op) \
	op(EBracerExceptionResult::Success) \
	op(EBracerExceptionResult::Fail) 

enum class EBracerExceptionResult : uint8;
template<> ANTILATENCYBRACER_API UEnum* StaticEnum<EBracerExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
