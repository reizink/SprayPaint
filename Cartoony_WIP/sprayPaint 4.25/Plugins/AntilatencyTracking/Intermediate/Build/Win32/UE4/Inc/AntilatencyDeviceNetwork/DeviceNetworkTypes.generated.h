// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANTILATENCYDEVICENETWORK_DeviceNetworkTypes_generated_h
#error "DeviceNetworkTypes.generated.h already included, missing '#pragma once' in DeviceNetworkTypes.h"
#endif
#define ANTILATENCYDEVICENETWORK_DeviceNetworkTypes_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkTypes_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUsbDeviceType_Statics; \
	ANTILATENCYDEVICENETWORK_API static class UScriptStruct* StaticStruct();


template<> ANTILATENCYDEVICENETWORK_API UScriptStruct* StaticStruct<struct FUsbDeviceType>();

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkTypes_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdnNode_Statics; \
	ANTILATENCYDEVICENETWORK_API static class UScriptStruct* StaticStruct();


template<> ANTILATENCYDEVICENETWORK_API UScriptStruct* StaticStruct<struct FAdnNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyDeviceNetwork_Public_DeviceNetworkTypes_h


#define FOREACH_ENUM_ENODESTATUS(op) \
	op(ENodeStatus::Idle) \
	op(ENodeStatus::TaskRunning) \
	op(ENodeStatus::Invalid) 

enum class ENodeStatus : uint8;
template<> ANTILATENCYDEVICENETWORK_API UEnum* StaticEnum<ENodeStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
