// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuat;
struct FRotator;
#ifdef ANTILATENCYALTTRACKING_MathLibrary_generated_h
#error "MathLibrary.generated.h already included, missing '#pragma once' in MathLibrary.h"
#endif
#define ANTILATENCYALTTRACKING_MathLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFQuatAngularDistance); \
	DECLARE_FUNCTION(execNormalizeFQuat); \
	DECLARE_FUNCTION(execSLerpFQuat); \
	DECLARE_FUNCTION(execFastLerpFQuat); \
	DECLARE_FUNCTION(execInverseFQuat); \
	DECLARE_FUNCTION(execMultFQuatFQuat); \
	DECLARE_FUNCTION(execFQuatToFRotator); \
	DECLARE_FUNCTION(execFRotatorToFQuat); \
	DECLARE_FUNCTION(execFQuatIdentity); \
	DECLARE_FUNCTION(execMakeFQuat);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFQuatAngularDistance); \
	DECLARE_FUNCTION(execNormalizeFQuat); \
	DECLARE_FUNCTION(execSLerpFQuat); \
	DECLARE_FUNCTION(execFastLerpFQuat); \
	DECLARE_FUNCTION(execInverseFQuat); \
	DECLARE_FUNCTION(execMultFQuatFQuat); \
	DECLARE_FUNCTION(execFQuatToFRotator); \
	DECLARE_FUNCTION(execFRotatorToFQuat); \
	DECLARE_FUNCTION(execFQuatIdentity); \
	DECLARE_FUNCTION(execMakeFQuat);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMathLibrary(); \
	friend struct Z_Construct_UClass_UMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyAltTracking"), NO_API) \
	DECLARE_SERIALIZER(UMathLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMathLibrary(); \
	friend struct Z_Construct_UClass_UMathLibrary_Statics; \
public: \
	DECLARE_CLASS(UMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyAltTracking"), NO_API) \
	DECLARE_SERIALIZER(UMathLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMathLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMathLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMathLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMathLibrary(UMathLibrary&&); \
	NO_API UMathLibrary(const UMathLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMathLibrary(UMathLibrary&&); \
	NO_API UMathLibrary(const UMathLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMathLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMathLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_25_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<class UMathLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_MathLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
