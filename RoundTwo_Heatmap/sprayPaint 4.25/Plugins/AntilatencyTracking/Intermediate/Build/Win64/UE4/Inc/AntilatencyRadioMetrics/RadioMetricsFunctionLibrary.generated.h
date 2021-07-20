// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URadioMetricsCotask;
struct FAdnNode;
struct FExtendedMetrics;
enum class ERadioMetricsExceptionResult : uint8;
struct FRadioMetrics;
class URadioMetricsLibrary;
class UDeviceNetwork;
#ifdef ANTILATENCYRADIOMETRICS_RadioMetricsFunctionLibrary_generated_h
#error "RadioMetricsFunctionLibrary.generated.h already included, missing '#pragma once' in RadioMetricsFunctionLibrary.h"
#endif
#define ANTILATENCYRADIOMETRICS_RadioMetricsFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetExtendedMetrics); \
	DECLARE_FUNCTION(execGetMetrics); \
	DECLARE_FUNCTION(execIsRadioMetricsTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execStartRadioMetricsTask); \
	DECLARE_FUNCTION(execGetRadioMetricsLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetExtendedMetrics); \
	DECLARE_FUNCTION(execGetMetrics); \
	DECLARE_FUNCTION(execIsRadioMetricsTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execStartRadioMetricsTask); \
	DECLARE_FUNCTION(execGetRadioMetricsLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadioMetricsFunctionLibrary(); \
	friend struct Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URadioMetricsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyRadioMetrics"), NO_API) \
	DECLARE_SERIALIZER(URadioMetricsFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesURadioMetricsFunctionLibrary(); \
	friend struct Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URadioMetricsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyRadioMetrics"), NO_API) \
	DECLARE_SERIALIZER(URadioMetricsFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioMetricsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioMetricsFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioMetricsFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioMetricsFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioMetricsFunctionLibrary(URadioMetricsFunctionLibrary&&); \
	NO_API URadioMetricsFunctionLibrary(const URadioMetricsFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadioMetricsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadioMetricsFunctionLibrary(URadioMetricsFunctionLibrary&&); \
	NO_API URadioMetricsFunctionLibrary(const URadioMetricsFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadioMetricsFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadioMetricsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadioMetricsFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_38_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYRADIOMETRICS_API UClass* StaticClass<class URadioMetricsFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyRadioMetrics_Public_RadioMetricsFunctionLibrary_h


#define FOREACH_ENUM_ERADIOMETRICSEXCEPTIONRESULT(op) \
	op(ERadioMetricsExceptionResult::Success) \
	op(ERadioMetricsExceptionResult::Fail) 

enum class ERadioMetricsExceptionResult : uint8;
template<> ANTILATENCYRADIOMETRICS_API UEnum* StaticEnum<ERadioMetricsExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
