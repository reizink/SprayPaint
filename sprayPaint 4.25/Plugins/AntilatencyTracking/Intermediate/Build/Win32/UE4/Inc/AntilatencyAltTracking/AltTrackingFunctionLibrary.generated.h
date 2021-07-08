// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAltEnvironment;
enum class EAltTrackingExceptionResult : uint8;
struct FVector;
class UAltTrackingCotask;
struct FAltPose;
struct FTrackingState;
class UAltTrackingLibrary;
class UDeviceNetwork;
struct FAdnNode;
#ifdef ANTILATENCYALTTRACKING_AltTrackingFunctionLibrary_generated_h
#error "AltTrackingFunctionLibrary.generated.h already included, missing '#pragma once' in AltTrackingFunctionLibrary.h"
#endif
#define ANTILATENCYALTTRACKING_AltTrackingFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnvironmentValid); \
	DECLARE_FUNCTION(execGetUpdateId); \
	DECLARE_FUNCTION(execIsMutable); \
	DECLARE_FUNCTION(execGetMarkers); \
	DECLARE_FUNCTION(execCreateEnvironmentUsingName); \
	DECLARE_FUNCTION(execCreateEnvironmentUsingCode); \
	DECLARE_FUNCTION(execCreateEnvironment); \
	DECLARE_FUNCTION(execIsTrackingTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execGetExtrapolatedState); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execEncodePlacement); \
	DECLARE_FUNCTION(execCreateTracking); \
	DECLARE_FUNCTION(execCreatePlacement); \
	DECLARE_FUNCTION(execGetTrackingLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnvironmentValid); \
	DECLARE_FUNCTION(execGetUpdateId); \
	DECLARE_FUNCTION(execIsMutable); \
	DECLARE_FUNCTION(execGetMarkers); \
	DECLARE_FUNCTION(execCreateEnvironmentUsingName); \
	DECLARE_FUNCTION(execCreateEnvironmentUsingCode); \
	DECLARE_FUNCTION(execCreateEnvironment); \
	DECLARE_FUNCTION(execIsTrackingTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execGetExtrapolatedState); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execEncodePlacement); \
	DECLARE_FUNCTION(execCreateTracking); \
	DECLARE_FUNCTION(execCreatePlacement); \
	DECLARE_FUNCTION(execGetTrackingLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAltTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAltTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyAltTracking"), NO_API) \
	DECLARE_SERIALIZER(UAltTrackingFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUAltTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAltTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyAltTracking"), NO_API) \
	DECLARE_SERIALIZER(UAltTrackingFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAltTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAltTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAltTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAltTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAltTrackingFunctionLibrary(UAltTrackingFunctionLibrary&&); \
	NO_API UAltTrackingFunctionLibrary(const UAltTrackingFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAltTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAltTrackingFunctionLibrary(UAltTrackingFunctionLibrary&&); \
	NO_API UAltTrackingFunctionLibrary(const UAltTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAltTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAltTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAltTrackingFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_39_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<class UAltTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingFunctionLibrary_h


#define FOREACH_ENUM_EALTTRACKINGEXCEPTIONRESULT(op) \
	op(EAltTrackingExceptionResult::Success) \
	op(EAltTrackingExceptionResult::Fail) 

enum class EAltTrackingExceptionResult : uint8;
template<> ANTILATENCYALTTRACKING_API UEnum* StaticEnum<EAltTrackingExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
