// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANTILATENCYHARDWAREEXTENSIONINTERFACE_HardwareExtensionInterfaceTypes_generated_h
#error "HardwareExtensionInterfaceTypes.generated.h already included, missing '#pragma once' in HardwareExtensionInterfaceTypes.h"
#endif
#define ANTILATENCYHARDWAREEXTENSIONINTERFACE_HardwareExtensionInterfaceTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyHardwareExtensionInterface_Public_HardwareExtensionInterfaceTypes_h


#define FOREACH_ENUM_EPINSTATE(op) \
	op(EPinState::Low) \
	op(EPinState::High) 

enum class EPinState : uint8;
template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* StaticEnum<EPinState>();

#define FOREACH_ENUM_EPINS(op) \
	op(EPins::IO1) \
	op(EPins::IO2) \
	op(EPins::IOA3) \
	op(EPins::IOA4) \
	op(EPins::IO5) \
	op(EPins::IO6) \
	op(EPins::IO7) \
	op(EPins::IO8) 

enum class EPins : uint8;
template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* StaticEnum<EPins>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
