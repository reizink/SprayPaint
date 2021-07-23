// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANTILATENCYDEVICENETWORK_DeviceNetworkLibrary_generated_h
#error "DeviceNetworkLibrary.generated.h already included, missing '#pragma once' in DeviceNetworkLibrary.h"
#endif
#define ANTILATENCYDEVICENETWORK_DeviceNetworkLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_RPC_WRAPPERS
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeviceNetworkLibrary(); \
	friend struct Z_Construct_UClass_UDeviceNetworkLibrary_Statics; \
public: \
	DECLARE_CLASS(UDeviceNetworkLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyDeviceNetwork"), NO_API) \
	DECLARE_SERIALIZER(UDeviceNetworkLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceNetworkLibrary(); \
	friend struct Z_Construct_UClass_UDeviceNetworkLibrary_Statics; \
public: \
	DECLARE_CLASS(UDeviceNetworkLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyDeviceNetwork"), NO_API) \
	DECLARE_SERIALIZER(UDeviceNetworkLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceNetworkLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceNetworkLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceNetworkLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceNetworkLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceNetworkLibrary(UDeviceNetworkLibrary&&); \
	NO_API UDeviceNetworkLibrary(const UDeviceNetworkLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeviceNetworkLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeviceNetworkLibrary(UDeviceNetworkLibrary&&); \
	NO_API UDeviceNetworkLibrary(const UDeviceNetworkLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeviceNetworkLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceNetworkLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceNetworkLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_46_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYDEVICENETWORK_API UClass* StaticClass<class UDeviceNetworkLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkLibrary_h


#define FOREACH_ENUM_EDEVICENETWORKLOGLEVEL(op) \
	op(EDeviceNetworkLogLevel::Trace) \
	op(EDeviceNetworkLogLevel::Debug) \
	op(EDeviceNetworkLogLevel::Info) \
	op(EDeviceNetworkLogLevel::Warning) \
	op(EDeviceNetworkLogLevel::Error) \
	op(EDeviceNetworkLogLevel::Critical) \
	op(EDeviceNetworkLogLevel::Off) 

enum class EDeviceNetworkLogLevel : uint8;
template<> ANTILATENCYDEVICENETWORK_API UEnum* StaticEnum<EDeviceNetworkLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
