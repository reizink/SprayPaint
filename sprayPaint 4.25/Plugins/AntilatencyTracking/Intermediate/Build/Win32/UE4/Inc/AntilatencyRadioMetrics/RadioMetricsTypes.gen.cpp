// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyRadioMetrics/Public/RadioMetricsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioMetricsTypes() {}
// Cross Module References
	ANTILATENCYRADIOMETRICS_API UScriptStruct* Z_Construct_UScriptStruct_FExtendedMetrics();
	UPackage* Z_Construct_UPackage__Script_AntilatencyRadioMetrics();
	ANTILATENCYRADIOMETRICS_API UScriptStruct* Z_Construct_UScriptStruct_FRadioMetrics();
// End Cross Module References
class UScriptStruct* FExtendedMetrics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYRADIOMETRICS_API uint32 Get_Z_Construct_UScriptStruct_FExtendedMetrics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExtendedMetrics, Z_Construct_UPackage__Script_AntilatencyRadioMetrics(), TEXT("ExtendedMetrics"), sizeof(FExtendedMetrics), Get_Z_Construct_UScriptStruct_FExtendedMetrics_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYRADIOMETRICS_API UScriptStruct* StaticStruct<FExtendedMetrics>()
{
	return FExtendedMetrics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExtendedMetrics(FExtendedMetrics::StaticStruct, TEXT("/Script/AntilatencyRadioMetrics"), TEXT("ExtendedMetrics"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyRadioMetrics_StaticRegisterNativesFExtendedMetrics
{
	FScriptStruct_AntilatencyRadioMetrics_StaticRegisterNativesFExtendedMetrics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExtendedMetrics")),new UScriptStruct::TCppStructOps<FExtendedMetrics>);
	}
} ScriptStruct_AntilatencyRadioMetrics_StaticRegisterNativesFExtendedMetrics;
	struct Z_Construct_UScriptStruct_FExtendedMetrics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedPacketsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FailedPacketsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MissedPacketsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MissedPacketsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRssi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRssi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRssi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinRssi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageRssi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AverageRssi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlowCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FlowCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RxPacketsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RxPacketsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RxBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RxBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TxPacketsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TxPacketsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TxBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TxBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/**\n * The UE wrapper for the Antilatency::RadioMetrics::Interop::ExtendedMetrics - an extended metrics.\n */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The UE wrapper for the Antilatency::RadioMetrics::Interop::ExtendedMetrics - an extended metrics." },
	};
#endif
	void* Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExtendedMetrics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FailedPacketsCount_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** The number of packets that were corrupted */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of packets that were corrupted" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FailedPacketsCount = { "FailedPacketsCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, FailedPacketsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FailedPacketsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FailedPacketsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MissedPacketsCount_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** The number of lost packets without a response */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of lost packets without a response" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MissedPacketsCount = { "MissedPacketsCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, MissedPacketsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MissedPacketsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MissedPacketsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MaxRssi_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** Max RSSI value in dBm.(best) */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "Max RSSI value in dBm.(best)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MaxRssi = { "MaxRssi", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, MaxRssi), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MaxRssi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MaxRssi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MinRssi_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** Min RSSI value in dBm.(worse) */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "Min RSSI value in dBm.(worse)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MinRssi = { "MinRssi", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, MinRssi), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MinRssi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MinRssi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_AverageRssi_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** Averaged RSSI value in dBm. */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "Averaged RSSI value in dBm." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_AverageRssi = { "AverageRssi", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, AverageRssi), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_AverageRssi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_AverageRssi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FlowCount_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** \n\x09 * The number of packets without data that were received from targetNode, \n\x09 * since there was not enough buffer space on the wired socket. \n\x09 * In a normal situation, it is always 0, otherwise, there are problems with USB \n\x09 */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of packets without data that were received from targetNode,\nsince there was not enough buffer space on the wired socket.\nIn a normal situation, it is always 0, otherwise, there are problems with USB" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FlowCount = { "FlowCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, FlowCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FlowCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FlowCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxPacketsCount_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** The number of radio packets that were received from targetNode */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of radio packets that were received from targetNode" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxPacketsCount = { "RxPacketsCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, RxPacketsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxPacketsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxPacketsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxBytes_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** The number of bytes that were received from targetNode */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of bytes that were received from targetNode" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxBytes = { "RxBytes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, RxBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxPacketsCount_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** The number of radio packets that were sent to targetNode */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of radio packets that were sent to targetNode" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxPacketsCount = { "TxPacketsCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, TxPacketsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxPacketsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxPacketsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxBytes_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Extended Metrics" },
		{ "Comment", "/** The number of bytes that were sent to targetNode */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The number of bytes that were sent to targetNode" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxBytes = { "TxBytes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExtendedMetrics, TxBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxBytes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExtendedMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FailedPacketsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MissedPacketsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MaxRssi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_MinRssi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_AverageRssi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_FlowCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxPacketsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_RxBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxPacketsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExtendedMetrics_Statics::NewProp_TxBytes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExtendedMetrics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyRadioMetrics,
		nullptr,
		&NewStructOps,
		"ExtendedMetrics",
		sizeof(FExtendedMetrics),
		alignof(FExtendedMetrics),
		Z_Construct_UScriptStruct_FExtendedMetrics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExtendedMetrics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExtendedMetrics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExtendedMetrics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyRadioMetrics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExtendedMetrics"), sizeof(FExtendedMetrics), Get_Z_Construct_UScriptStruct_FExtendedMetrics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExtendedMetrics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExtendedMetrics_Hash() { return 3695257403U; }
class UScriptStruct* FRadioMetrics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYRADIOMETRICS_API uint32 Get_Z_Construct_UScriptStruct_FRadioMetrics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadioMetrics, Z_Construct_UPackage__Script_AntilatencyRadioMetrics(), TEXT("RadioMetrics"), sizeof(FRadioMetrics), Get_Z_Construct_UScriptStruct_FRadioMetrics_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYRADIOMETRICS_API UScriptStruct* StaticStruct<FRadioMetrics>()
{
	return FRadioMetrics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRadioMetrics(FRadioMetrics::StaticStruct, TEXT("/Script/AntilatencyRadioMetrics"), TEXT("RadioMetrics"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyRadioMetrics_StaticRegisterNativesFRadioMetrics
{
	FScriptStruct_AntilatencyRadioMetrics_StaticRegisterNativesFRadioMetrics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RadioMetrics")),new UScriptStruct::TCppStructOps<FRadioMetrics>);
	}
} ScriptStruct_AntilatencyRadioMetrics_StaticRegisterNativesFRadioMetrics;
	struct Z_Construct_UScriptStruct_FRadioMetrics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PacketLossRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PacketLossRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageRssi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AverageRssi;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadioMetrics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|Radio Metrics|Types|Metrics" },
		{ "Comment", "/**\n * The UE wrapper for the Antilatency::RadioMetrics::Metrics - a simplified metrics.\n */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "The UE wrapper for the Antilatency::RadioMetrics::Metrics - a simplified metrics." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadioMetrics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_PacketLossRate_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Metrics" },
		{ "Comment", "/** Packet loss rate in range 0..1. Value 0 - no lost packets. */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "Packet loss rate in range 0..1. Value 0 - no lost packets." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_PacketLossRate = { "PacketLossRate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRadioMetrics, PacketLossRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_PacketLossRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_PacketLossRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_AverageRssi_MetaData[] = {
		{ "Category", "Antilatency|Radio Metrics|Types|Metrics" },
		{ "Comment", "/** Average rssi value in dBm between two call URadioMetricsCotask::GetMetrics(). */" },
		{ "ModuleRelativePath", "Public/RadioMetricsTypes.h" },
		{ "ToolTip", "Average rssi value in dBm between two call URadioMetricsCotask::GetMetrics()." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_AverageRssi = { "AverageRssi", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRadioMetrics, AverageRssi), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_AverageRssi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_AverageRssi_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadioMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_PacketLossRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadioMetrics_Statics::NewProp_AverageRssi,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadioMetrics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyRadioMetrics,
		nullptr,
		&NewStructOps,
		"RadioMetrics",
		sizeof(FRadioMetrics),
		alignof(FRadioMetrics),
		Z_Construct_UScriptStruct_FRadioMetrics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioMetrics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadioMetrics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioMetrics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadioMetrics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRadioMetrics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyRadioMetrics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RadioMetrics"), sizeof(FRadioMetrics), Get_Z_Construct_UScriptStruct_FRadioMetrics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRadioMetrics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRadioMetrics_Hash() { return 4244611484U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
