// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStorage;
enum class EStorageClientExceptionResult : uint8;
class UStorageClientLibrary;
#ifdef ANTILATENCYSTORAGECLIENT_StorageClientFunctionLibrary_generated_h
#error "StorageClientFunctionLibrary.generated.h already included, missing '#pragma once' in StorageClientFunctionLibrary.h"
#endif
#define ANTILATENCYSTORAGECLIENT_StorageClientFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsStorageValid); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execWrite); \
	DECLARE_FUNCTION(execRead); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execGetLocalStorage); \
	DECLARE_FUNCTION(execGetRemoteStorage); \
	DECLARE_FUNCTION(execGetStorageClientLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsStorageValid); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execWrite); \
	DECLARE_FUNCTION(execRead); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execGetLocalStorage); \
	DECLARE_FUNCTION(execGetRemoteStorage); \
	DECLARE_FUNCTION(execGetStorageClientLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageClientFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStorageClientFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStorageClientFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyStorageClient"), NO_API) \
	DECLARE_SERIALIZER(UStorageClientFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUStorageClientFunctionLibrary(); \
	friend struct Z_Construct_UClass_UStorageClientFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UStorageClientFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyStorageClient"), NO_API) \
	DECLARE_SERIALIZER(UStorageClientFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageClientFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageClientFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageClientFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageClientFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageClientFunctionLibrary(UStorageClientFunctionLibrary&&); \
	NO_API UStorageClientFunctionLibrary(const UStorageClientFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageClientFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageClientFunctionLibrary(UStorageClientFunctionLibrary&&); \
	NO_API UStorageClientFunctionLibrary(const UStorageClientFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageClientFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageClientFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageClientFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_38_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYSTORAGECLIENT_API UClass* StaticClass<class UStorageClientFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyStorageClient_Public_StorageClientFunctionLibrary_h


#define FOREACH_ENUM_ESTORAGECLIENTEXCEPTIONRESULT(op) \
	op(EStorageClientExceptionResult::Success) \
	op(EStorageClientExceptionResult::Fail) 

enum class EStorageClientExceptionResult : uint8;
template<> ANTILATENCYSTORAGECLIENT_API UEnum* StaticEnum<EStorageClientExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
