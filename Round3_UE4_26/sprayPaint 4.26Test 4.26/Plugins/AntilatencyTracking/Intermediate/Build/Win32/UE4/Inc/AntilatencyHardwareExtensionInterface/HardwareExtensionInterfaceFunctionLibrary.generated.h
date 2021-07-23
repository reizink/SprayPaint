// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPulseCounterPin;
enum class EHardwareExtensionInterfaceExceptionResult : uint8;
class UAnalogPin;
class UOutputPin;
enum class EPinState : uint8;
class UInputPin;
class UHardwareExtensionInterfaceCotask;
enum class EPins : uint8;
class UHardwareExtensionInterfaceLibrary;
class UDeviceNetwork;
struct FAdnNode;
#ifdef ANTILATENCYHARDWAREEXTENSIONINTERFACE_HardwareExtensionInterfaceFunctionLibrary_generated_h
#error "HardwareExtensionInterfaceFunctionLibrary.generated.h already included, missing '#pragma once' in HardwareExtensionInterfaceFunctionLibrary.h"
#endif
#define ANTILATENCYHARDWAREEXTENSIONINTERFACE_HardwareExtensionInterfaceFunctionLibrary_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_SPARSE_DATA
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPulseCounterPinValid); \
	DECLARE_FUNCTION(execGetPulseCounterPinValue); \
	DECLARE_FUNCTION(execIsAnalogPinValid); \
	DECLARE_FUNCTION(execGetAnalogPinValue); \
	DECLARE_FUNCTION(execIsOutputPinValid); \
	DECLARE_FUNCTION(execSetOutputPinState); \
	DECLARE_FUNCTION(execGetOutputPinState); \
	DECLARE_FUNCTION(execIsInputPinValid); \
	DECLARE_FUNCTION(execGetInputPinState); \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execCreatePulseCounterPin); \
	DECLARE_FUNCTION(execCreateAnalogPin); \
	DECLARE_FUNCTION(execCreateOutputPin); \
	DECLARE_FUNCTION(execCreateInputPin); \
	DECLARE_FUNCTION(execIsHardwareExtensionInterfaceTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execStartHardwareExtensionInterfaceTask); \
	DECLARE_FUNCTION(execGetHardwareExtensionInterfaceLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPulseCounterPinValid); \
	DECLARE_FUNCTION(execGetPulseCounterPinValue); \
	DECLARE_FUNCTION(execIsAnalogPinValid); \
	DECLARE_FUNCTION(execGetAnalogPinValue); \
	DECLARE_FUNCTION(execIsOutputPinValid); \
	DECLARE_FUNCTION(execSetOutputPinState); \
	DECLARE_FUNCTION(execGetOutputPinState); \
	DECLARE_FUNCTION(execIsInputPinValid); \
	DECLARE_FUNCTION(execGetInputPinState); \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execCreatePulseCounterPin); \
	DECLARE_FUNCTION(execCreateAnalogPin); \
	DECLARE_FUNCTION(execCreateOutputPin); \
	DECLARE_FUNCTION(execCreateInputPin); \
	DECLARE_FUNCTION(execIsHardwareExtensionInterfaceTaskValid); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execIsTaskFinished); \
	DECLARE_FUNCTION(execIsLibraryValid); \
	DECLARE_FUNCTION(execFindSupportedNodes); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execStartHardwareExtensionInterfaceTask); \
	DECLARE_FUNCTION(execGetHardwareExtensionInterfaceLibrary);


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHardwareExtensionInterfaceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHardwareExtensionInterfaceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyHardwareExtensionInterface"), NO_API) \
	DECLARE_SERIALIZER(UHardwareExtensionInterfaceFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHardwareExtensionInterfaceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHardwareExtensionInterfaceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AntilatencyHardwareExtensionInterface"), NO_API) \
	DECLARE_SERIALIZER(UHardwareExtensionInterfaceFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHardwareExtensionInterfaceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareExtensionInterfaceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHardwareExtensionInterfaceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareExtensionInterfaceFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHardwareExtensionInterfaceFunctionLibrary(UHardwareExtensionInterfaceFunctionLibrary&&); \
	NO_API UHardwareExtensionInterfaceFunctionLibrary(const UHardwareExtensionInterfaceFunctionLibrary&); \
public:


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHardwareExtensionInterfaceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHardwareExtensionInterfaceFunctionLibrary(UHardwareExtensionInterfaceFunctionLibrary&&); \
	NO_API UHardwareExtensionInterfaceFunctionLibrary(const UHardwareExtensionInterfaceFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHardwareExtensionInterfaceFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareExtensionInterfaceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareExtensionInterfaceFunctionLibrary)


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_38_PROLOG
#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_RPC_WRAPPERS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_INCLASS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_SPARSE_DATA \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<class UHardwareExtensionInterfaceFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceFunctionLibrary_h


#define FOREACH_ENUM_EHARDWAREEXTENSIONINTERFACEEXCEPTIONRESULT(op) \
	op(EHardwareExtensionInterfaceExceptionResult::Success) \
	op(EHardwareExtensionInterfaceExceptionResult::Fail) 

enum class EHardwareExtensionInterfaceExceptionResult : uint8;
template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* StaticEnum<EHardwareExtensionInterfaceExceptionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
