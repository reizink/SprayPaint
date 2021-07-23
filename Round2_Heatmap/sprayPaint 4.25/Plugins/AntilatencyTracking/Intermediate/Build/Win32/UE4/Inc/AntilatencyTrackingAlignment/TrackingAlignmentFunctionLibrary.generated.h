// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTrackingAlignment;
struct FQuat;
struct FTrackingAlignmentState;
enum class ETrackingAlignmentExceptionResult : uint8;
class UTrackingAlignmentLibrary;
#ifdef ANTILATENCYTRACKINGALIGNMENT_TrackingAlignmentFunctionLibrary_generated_h
#error "TrackingAlignmentFunctionLibrary.generated.h already included, missing '#pragma once' in TrackingAlignmentFunctionLibrary.h"
#endif
#define ANTILATENCYTRACKINGALIGNMENT_TrackingAlignmentFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTrackingAlignmentValid); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execCreateTrackingAlignment); \
	DECLARE_FUNCTION(execGetTrackingAlignmentLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTrackingAlignmentValid); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execCreateTrackingAlignment); \
	DECLARE_FUNCTION(execGetTrackingAlignmentLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackingAlignmentFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTrackingAlignmentFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyTrackingAlignment"), NO_API) \
	DECLARE_SERIALIZER(UTrackingAlignmentFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUTrackingAlignmentFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTrackingAlignmentFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyTrackingAlignment"), NO_API) \
	DECLARE_SERIALIZER(UTrackingAlignmentFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackingAlignmentFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackingAlignmentFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackingAlignmentFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackingAlignmentFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackingAlignmentFunctionLibrary(UTrackingAlignmentFunctionLibrary&&); \
	NO_API UTrackingAlignmentFunctionLibrary(const UTrackingAlignmentFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackingAlignmentFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackingAlignmentFunctionLibrary(UTrackingAlignmentFunctionLibrary&&); \
	NO_API UTrackingAlignmentFunctionLibrary(const UTrackingAlignmentFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackingAlignmentFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackingAlignmentFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackingAlignmentFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_39_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYTRACKINGALIGNMENT_API UClass* StaticClass<class UTrackingAlignmentFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTrackingAlignment_Public_TrackingAlignmentFunctionLibrary_h


#define FOREACH_ENUM_ETRACKINGALIGNMENTEXCEPTIONRESULT(op) \
	op(ETrackingAlignmentExceptionResult::Success) \
	op(ETrackingAlignmentExceptionResult::Fail) 

enum class ETrackingAlignmentExceptionResult : uint8;
template<> ANTILATENCYTRACKINGALIGNMENT_API UEnum* StaticEnum<ETrackingAlignmentExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
