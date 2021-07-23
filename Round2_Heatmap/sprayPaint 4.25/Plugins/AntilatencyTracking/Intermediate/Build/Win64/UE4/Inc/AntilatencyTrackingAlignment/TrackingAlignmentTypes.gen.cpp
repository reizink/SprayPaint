// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTrackingAlignment/Public/TrackingAlignmentTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackingAlignmentTypes() {}
// Cross Module References
	ANTILATENCYTRACKINGALIGNMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingAlignmentState();
	UPackage* Z_Construct_UPackage__Script_AntilatencyTrackingAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
class UScriptStruct* FTrackingAlignmentState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYTRACKINGALIGNMENT_API uint32 Get_Z_Construct_UScriptStruct_FTrackingAlignmentState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackingAlignmentState, Z_Construct_UPackage__Script_AntilatencyTrackingAlignment(), TEXT("TrackingAlignmentState"), sizeof(FTrackingAlignmentState), Get_Z_Construct_UScriptStruct_FTrackingAlignmentState_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYTRACKINGALIGNMENT_API UScriptStruct* StaticStruct<FTrackingAlignmentState>()
{
	return FTrackingAlignmentState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackingAlignmentState(FTrackingAlignmentState::StaticStruct, TEXT("/Script/AntilatencyTrackingAlignment"), TEXT("TrackingAlignmentState"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyTrackingAlignment_StaticRegisterNativesFTrackingAlignmentState
{
	FScriptStruct_AntilatencyTrackingAlignment_StaticRegisterNativesFTrackingAlignmentState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackingAlignmentState")),new UScriptStruct::TCppStructOps<FTrackingAlignmentState>);
	}
} ScriptStruct_AntilatencyTrackingAlignment_StaticRegisterNativesFTrackingAlignmentState;
	struct Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBAheadOfA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBAheadOfA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationBSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationBSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationARelativeToB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationARelativeToB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Tracking Alignment" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackingAlignmentState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_TimeBAheadOfA_MetaData[] = {
		{ "Category", "Antilatency|Tracking Alignment|Tracking Alignment State" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_TimeBAheadOfA = { "TimeBAheadOfA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingAlignmentState, TimeBAheadOfA), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_TimeBAheadOfA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_TimeBAheadOfA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationBSpace_MetaData[] = {
		{ "Category", "Antilatency|Tracking Alignment|Tracking Alignment State" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationBSpace = { "RotationBSpace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingAlignmentState, RotationBSpace), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationBSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationBSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationARelativeToB_MetaData[] = {
		{ "Category", "Antilatency|Tracking Alignment|Tracking Alignment State" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationARelativeToB = { "RotationARelativeToB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackingAlignmentState, RotationARelativeToB), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationARelativeToB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationARelativeToB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_TimeBAheadOfA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationBSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::NewProp_RotationARelativeToB,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyTrackingAlignment,
		nullptr,
		&NewStructOps,
		"TrackingAlignmentState",
		sizeof(FTrackingAlignmentState),
		alignof(FTrackingAlignmentState),
		Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackingAlignmentState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackingAlignmentState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyTrackingAlignment();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackingAlignmentState"), sizeof(FTrackingAlignmentState), Get_Z_Construct_UScriptStruct_FTrackingAlignmentState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackingAlignmentState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackingAlignmentState_Hash() { return 2470284961U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
