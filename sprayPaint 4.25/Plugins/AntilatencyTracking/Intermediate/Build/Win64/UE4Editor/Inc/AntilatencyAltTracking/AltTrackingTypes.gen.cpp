// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTracking/Public/AltTrackingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAltTrackingTypes() {}
// Cross Module References
	ANTILATENCYALTTRACKING_API UEnum* Z_Construct_UEnum_AntilatencyAltTracking_ETrackingStage();
	UPackage* Z_Construct_UPackage__Script_AntilatencyAltTracking();
	ANTILATENCYALTTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingState();
	ANTILATENCYALTTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingStability();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ANTILATENCYALTTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAltPose();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* ETrackingStage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyAltTracking_ETrackingStage, Z_Construct_UPackage__Script_AntilatencyAltTracking(), TEXT("ETrackingStage"));
		}
		return Singleton;
	}
	template<> ANTILATENCYALTTRACKING_API UEnum* StaticEnum<ETrackingStage>()
	{
		return ETrackingStage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingStage(ETrackingStage_StaticEnum, TEXT("/Script/AntilatencyAltTracking"), TEXT("ETrackingStage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyAltTracking_ETrackingStage_Hash() { return 3622040878U; }
	UEnum* Z_Construct_UEnum_AntilatencyAltTracking_ETrackingStage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyAltTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingStage"), 0, Get_Z_Construct_UEnum_AntilatencyAltTracking_ETrackingStage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingStage::InertialDataInitialization", (int64)ETrackingStage::InertialDataInitialization },
				{ "ETrackingStage::Tracking3Dof", (int64)ETrackingStage::Tracking3Dof },
				{ "ETrackingStage::Tracking6Dof", (int64)ETrackingStage::Tracking6Dof },
				{ "ETrackingStage::TrackingBlind6Dof", (int64)ETrackingStage::TrackingBlind6Dof },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Antilatency|Alt Tracking|Tracking Stage" },
				{ "Comment", "/** Describes the current tracking stage. */" },
				{ "InertialDataInitialization.Comment", "/** Tracker collects the accelerometer data to find the upright orientation. No tracking data is valid in this stage. */" },
				{ "InertialDataInitialization.Name", "ETrackingStage::InertialDataInitialization" },
				{ "InertialDataInitialization.ToolTip", "Tracker collects the accelerometer data to find the upright orientation. No tracking data is valid in this stage." },
				{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
				{ "ToolTip", "Describes the current tracking stage." },
				{ "Tracking3Dof.Comment", "/** Only the rotation part is valid in this stage. The rotation around the vertical axis may drifts. */" },
				{ "Tracking3Dof.Name", "ETrackingStage::Tracking3Dof" },
				{ "Tracking3Dof.ToolTip", "Only the rotation part is valid in this stage. The rotation around the vertical axis may drifts." },
				{ "Tracking6Dof.Comment", "/** A full 6 DoF tracking, corrected by the optics. */" },
				{ "Tracking6Dof.Name", "ETrackingStage::Tracking6Dof" },
				{ "Tracking6Dof.ToolTip", "A full 6 DoF tracking, corrected by the optics." },
				{ "TrackingBlind6Dof.Comment", "/** Inertial only 6 DoF tracking, without optical corrections. */" },
				{ "TrackingBlind6Dof.Name", "ETrackingStage::TrackingBlind6Dof" },
				{ "TrackingBlind6Dof.ToolTip", "Inertial only 6 DoF tracking, without optical corrections." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
				nullptr,
				"ETrackingStage",
				"ETrackingStage",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTrackingState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYALTTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FTrackingState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackingState, Z_Construct_UPackage__Script_AntilatencyAltTracking(), TEXT("TrackingState"), sizeof(FTrackingState), Get_Z_Construct_UScriptStruct_FTrackingState_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYALTTRACKING_API UScriptStruct* StaticStruct<FTrackingState>()
{
	return FTrackingState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackingState(FTrackingState::StaticStruct, TEXT("/Script/AntilatencyAltTracking"), TEXT("TrackingState"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFTrackingState
{
	FScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFTrackingState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackingState")),new UScriptStruct::TCppStructOps<FTrackingState>);
	}
} ScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFTrackingState;
	struct Z_Construct_UScriptStruct_FTrackingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stability_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Alt Tracking|Tracking State" },
		{ "Comment", "/** Describes the current tracking state. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Describes the current tracking state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackingState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Stability_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Tracking State" },
		{ "Comment", "/** Current tracking stability. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Current tracking stability." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Stability = { "Stability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingState, Stability), Z_Construct_UScriptStruct_FTrackingStability, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Stability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Stability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_LocalAngularVelocity_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Tracking State" },
		{ "Comment", "/** Tracker local angular velocity. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Tracker local angular velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_LocalAngularVelocity = { "LocalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingState, LocalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_LocalAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_LocalAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Tracking State" },
		{ "Comment", "/** Tracker velocity. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Tracker velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Tracking State" },
		{ "Comment", "/** Tracker position and rotation. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Tracker position and rotation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingState, Pose), Z_Construct_UScriptStruct_FAltPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Pose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Stability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_LocalAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingState_Statics::NewProp_Pose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
		nullptr,
		&NewStructOps,
		"TrackingState",
		sizeof(FTrackingState),
		alignof(FTrackingState),
		Z_Construct_UScriptStruct_FTrackingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackingState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackingState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyAltTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackingState"), sizeof(FTrackingState), Get_Z_Construct_UScriptStruct_FTrackingState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackingState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackingState_Hash() { return 2969402105U; }
class UScriptStruct* FTrackingStability::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYALTTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FTrackingStability_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackingStability, Z_Construct_UPackage__Script_AntilatencyAltTracking(), TEXT("TrackingStability"), sizeof(FTrackingStability), Get_Z_Construct_UScriptStruct_FTrackingStability_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYALTTRACKING_API UScriptStruct* StaticStruct<FTrackingStability>()
{
	return FTrackingStability::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackingStability(FTrackingStability::StaticStruct, TEXT("/Script/AntilatencyAltTracking"), TEXT("TrackingStability"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFTrackingStability
{
	FScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFTrackingStability()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackingStability")),new UScriptStruct::TCppStructOps<FTrackingStability>);
	}
} ScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFTrackingStability;
	struct Z_Construct_UScriptStruct_FTrackingStability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stage_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingStability_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Alt Tracking|Tracking Stability" },
		{ "Comment", "/** Describes the current tracking stability. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Describes the current tracking stability." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackingStability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackingStability>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Tracking Stability" },
		{ "Comment", "/**\n     * Describes the current stability value.\n     * If the tracking stage is InertialDataInitialization or Tracking3Dof, stability value will be always 0.\n     * If the tracking stage is Tracking6Dof, this value represents how stable the solution is. Since this value depends on many factors, there is no units for it. This value may be used for debug purposes.\n     * If the tracking stage is TrackingBlind6Dof, this value is a fraction of time left before switch to Tracking3Dof - it is useful to notify the user about the oncoming loss of tracking.\n     */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Describes the current stability value.\nIf the tracking stage is InertialDataInitialization or Tracking3Dof, stability value will be always 0.\nIf the tracking stage is Tracking6Dof, this value represents how stable the solution is. Since this value depends on many factors, there is no units for it. This value may be used for debug purposes.\nIf the tracking stage is TrackingBlind6Dof, this value is a fraction of time left before switch to Tracking3Dof - it is useful to notify the user about the oncoming loss of tracking." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingStability, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Tracking Stability" },
		{ "Comment", "/** Current tracking stage. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Current tracking stage." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage = { "Stage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingStability, Stage), Z_Construct_UEnum_AntilatencyAltTracking_ETrackingStage, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackingStability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingStability_Statics::NewProp_Stage_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackingStability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
		nullptr,
		&NewStructOps,
		"TrackingStability",
		sizeof(FTrackingStability),
		alignof(FTrackingStability),
		Z_Construct_UScriptStruct_FTrackingStability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingStability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingStability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingStability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackingStability()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackingStability_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyAltTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackingStability"), sizeof(FTrackingStability), Get_Z_Construct_UScriptStruct_FTrackingStability_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackingStability_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackingStability_Hash() { return 291895322U; }
class UScriptStruct* FAltPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYALTTRACKING_API uint32 Get_Z_Construct_UScriptStruct_FAltPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAltPose, Z_Construct_UPackage__Script_AntilatencyAltTracking(), TEXT("AltPose"), sizeof(FAltPose), Get_Z_Construct_UScriptStruct_FAltPose_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYALTTRACKING_API UScriptStruct* StaticStruct<FAltPose>()
{
	return FAltPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAltPose(FAltPose::StaticStruct, TEXT("/Script/AntilatencyAltTracking"), TEXT("AltPose"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFAltPose
{
	FScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFAltPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AltPose")),new UScriptStruct::TCppStructOps<FAltPose>);
	}
} ScriptStruct_AntilatencyAltTracking_StaticRegisterNativesFAltPose;
	struct Z_Construct_UScriptStruct_FAltPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAltPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Alt Tracking|Alt Pose" },
		{ "Comment", "/** Describes the tracker position and rotation, also used as a placement representation. */" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
		{ "ToolTip", "Describes the tracker position and rotation, also used as a placement representation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAltPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAltPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Alt Pose" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAltPose, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Antilatency|Alt Tracking|Alt Pose" },
		{ "ModuleRelativePath", "Public/AltTrackingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAltPose, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAltPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAltPose_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAltPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
		nullptr,
		&NewStructOps,
		"AltPose",
		sizeof(FAltPose),
		alignof(FAltPose),
		Z_Construct_UScriptStruct_FAltPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAltPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAltPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAltPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAltPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAltPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyAltTracking();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AltPose"), sizeof(FAltPose), Get_Z_Construct_UScriptStruct_FAltPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAltPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAltPose_Hash() { return 2917132453U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
