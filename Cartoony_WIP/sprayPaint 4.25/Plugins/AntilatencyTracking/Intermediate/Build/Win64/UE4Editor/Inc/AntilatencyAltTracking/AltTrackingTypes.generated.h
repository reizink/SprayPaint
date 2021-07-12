// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANTILATENCYALTTRACKING_AltTrackingTypes_generated_h
#error "AltTrackingTypes.generated.h already included, missing '#pragma once' in AltTrackingTypes.h"
#endif
#define ANTILATENCYALTTRACKING_AltTrackingTypes_generated_h

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingTypes_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackingState_Statics; \
	ANTILATENCYALTTRACKING_API static class UScriptStruct* StaticStruct();


template<> ANTILATENCYALTTRACKING_API UScriptStruct* StaticStruct<struct FTrackingState>();

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackingStability_Statics; \
	ANTILATENCYALTTRACKING_API static class UScriptStruct* StaticStruct();


template<> ANTILATENCYALTTRACKING_API UScriptStruct* StaticStruct<struct FTrackingStability>();

#define HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAltPose_Statics; \
	ANTILATENCYALTTRACKING_API static class UScriptStruct* StaticStruct();


template<> ANTILATENCYALTTRACKING_API UScriptStruct* StaticStruct<struct FAltPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AntilatencyTracking_Source_AntilatencyAltTracking_Public_AltTrackingTypes_h


#define FOREACH_ENUM_ETRACKINGSTAGE(op) \
	op(ETrackingStage::InertialDataInitialization) \
	op(ETrackingStage::Tracking3Dof) \
	op(ETrackingStage::Tracking6Dof) \
	op(ETrackingStage::TrackingBlind6Dof) 

enum class ETrackingStage : uint8;
template<> ANTILATENCYALTTRACKING_API UEnum* StaticEnum<ETrackingStage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
