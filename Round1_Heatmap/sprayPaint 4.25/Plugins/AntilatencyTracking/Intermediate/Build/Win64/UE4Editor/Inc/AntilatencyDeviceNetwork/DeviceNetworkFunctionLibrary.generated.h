// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAdnNode;
class UDeviceNetwork;
enum class EDeviceNetworkExceptionResult : uint8;
struct FGuid;
enum class ENodeStatus : uint8;
struct FUsbDeviceType;
class UDeviceNetworkLibrary;
enum class EDeviceNetworkLogLevel : uint8;
#ifdef ANTILATENCYDEVICENETWORK_DeviceNetworkFunctionLibrary_generated_h
#error "DeviceNetworkFunctionLibrary.generated.h already included, missing '#pragma once' in DeviceNetworkFunctionLibrary.h"
#endif
#define ANTILATENCYDEVICENETWORK_DeviceNetworkFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_FAdnNodeFAdnNode); \
	DECLARE_FUNCTION(execEqualEqual_FAdnNodeFAdnNode); \
	DECLARE_FUNCTION(execIsNetworkValid); \
	DECLARE_FUNCTION(execNodeSetStringProperty); \
	DECLARE_FUNCTION(execNodeGetStringProperty); \
	DECLARE_FUNCTION(execNodeGetPhysicalPath); \
	DECLARE_FUNCTION(execNodeGetParent); \
	DECLARE_FUNCTION(execNodeIsTaskSupported); \
	DECLARE_FUNCTION(execNodeGetStatus); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execGetDevicesTypes); \
	DECLARE_FUNCTION(execGetUpdateId); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execCreateNetwork); \
	DECLARE_FUNCTION(execGetDeviceNetworkLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_FAdnNodeFAdnNode); \
	DECLARE_FUNCTION(execEqualEqual_FAdnNodeFAdnNode); \
	DECLARE_FUNCTION(execIsNetworkValid); \
	DECLARE_FUNCTION(execNodeSetStringProperty); \
	DECLARE_FUNCTION(execNodeGetStringProperty); \
	DECLARE_FUNCTION(execNodeGetPhysicalPath); \
	DECLARE_FUNCTION(execNodeGetParent); \
	DECLARE_FUNCTION(execNodeIsTaskSupported); \
	DECLARE_FUNCTION(execNodeGetStatus); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execGetDevicesTypes); \
	DECLARE_FUNCTION(execGetUpdateId); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execSetLogLevel); \
	DECLARE_FUNCTION(execGetVersion); \
	DECLARE_FUNCTION(execCreateNetwork); \
	DECLARE_FUNCTION(execGetDeviceNetworkLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeviceNetworkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDeviceNetworkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyDeviceNetwork"), NO_API) \
	DECLARE_SERIALIZER(UDeviceNetworkFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceNetworkFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDeviceNetworkFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyDeviceNetwork"), NO_API) \
	DECLARE_SERIALIZER(UDeviceNetworkFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceNetworkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceNetworkFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceNetworkFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceNetworkFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceNetworkFunctionLibrary(UDeviceNetworkFunctionLibrary&&); \
	NO_API UDeviceNetworkFunctionLibrary(const UDeviceNetworkFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceNetworkFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceNetworkFunctionLibrary(UDeviceNetworkFunctionLibrary&&); \
	NO_API UDeviceNetworkFunctionLibrary(const UDeviceNetworkFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceNetworkFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceNetworkFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceNetworkFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_40_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYDEVICENETWORK_API UClass* StaticClass<class UDeviceNetworkFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkFunctionLibrary_h


#define FOREACH_ENUM_EDEVICENETWORKEXCEPTIONRESULT(op) \
	op(EDeviceNetworkExceptionResult::Success) \
	op(EDeviceNetworkExceptionResult::Fail) 

enum class EDeviceNetworkExceptionResult : uint8;
template<> ANTILATENCYDEVICENETWORK_API UEnum* StaticEnum<EDeviceNetworkExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
