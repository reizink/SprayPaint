// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyBracer/Public/BracerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBracerTypes() {}
// Cross Module References
	ANTILATENCYBRACER_API UScriptStruct* Z_Construct_UScriptStruct_FVibration();
	UPackage* Z_Construct_UPackage__Script_AntilatencyBracer();
// End Cross Module References
class UScriptStruct* FVibration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYBRACER_API uint32 Get_Z_Construct_UScriptStruct_FVibration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVibration, Z_Construct_UPackage__Script_AntilatencyBracer(), TEXT("Vibration"), sizeof(FVibration), Get_Z_Construct_UScriptStruct_FVibration_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYBRACER_API UScriptStruct* StaticStruct<FVibration>()
{
	return FVibration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVibration(FVibration::StaticStruct, TEXT("/Script/AntilatencyBracer"), TEXT("Vibration"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyBracer_StaticRegisterNativesFVibration
{
	FScriptStruct_AntilatencyBracer_StaticRegisterNativesFVibration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Vibration")),new UScriptStruct::TCppStructOps<FVibration>);
	}
} ScriptStruct_AntilatencyBracer_StaticRegisterNativesFVibration;
	struct Z_Construct_UScriptStruct_FVibration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVibration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Bracer|Vibration" },
		{ "Comment", "/**\n * The UE wrapper for the Antilatency::Bracer::Vibration.\n */" },
		{ "ModuleRelativePath", "Public/BracerTypes.h" },
		{ "ToolTip", "The UE wrapper for the Antilatency::Bracer::Vibration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVibration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVibration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Antilatency|Bracer|Vibration" },
		{ "ModuleRelativePath", "Public/BracerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVibration, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Antilatency|Bracer|Vibration" },
		{ "ModuleRelativePath", "Public/BracerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVibration, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVibration_Statics::NewProp_Intensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVibration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyBracer,
		nullptr,
		&NewStructOps,
		"Vibration",
		sizeof(FVibration),
		alignof(FVibration),
		Z_Construct_UScriptStruct_FVibration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVibration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVibration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVibration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVibration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVibration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyBracer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Vibration"), sizeof(FVibration), Get_Z_Construct_UScriptStruct_FVibration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVibration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVibration_Hash() { return 2835178857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
