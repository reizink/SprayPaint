// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyDeviceNetwork/Public/DeviceNetworkTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceNetworkTypes() {}
// Cross Module References
	ANTILATENCYDEVICENETWORK_API UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus();
	UPackage* Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUsbDeviceType();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
// End Cross Module References
	static UEnum* ENodeStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus, Z_Construct_UPackage__Script_AntilatencyDeviceNetwork(), TEXT("ENodeStatus"));
		}
		return Singleton;
	}
	template<> ANTILATENCYDEVICENETWORK_API UEnum* StaticEnum<ENodeStatus>()
	{
		return ENodeStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodeStatus(ENodeStatus_StaticEnum, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("ENodeStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus_Hash() { return 2508371301U; }
	UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodeStatus"), 0, Get_Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodeStatus::Idle", (int64)ENodeStatus::Idle },
				{ "ENodeStatus::TaskRunning", (int64)ENodeStatus::TaskRunning },
				{ "ENodeStatus::Invalid", (int64)ENodeStatus::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Antilatency|DeviceNetwork|Node Status" },
				{ "Comment", "/** Defines different node conditions. */" },
				{ "Idle.Comment", "/** The node in connected and no task is currently running on it. Any supported task can be started on it. */" },
				{ "Idle.Name", "ENodeStatus::Idle" },
				{ "Idle.ToolTip", "The node in connected and no task is currently running on it. Any supported task can be started on it." },
				{ "Invalid.Comment", "/** The node in not valid, no tasks can be executed on it. */" },
				{ "Invalid.Name", "ENodeStatus::Invalid" },
				{ "Invalid.ToolTip", "The node in not valid, no tasks can be executed on it." },
				{ "ModuleRelativePath", "Public/DeviceNetworkTypes.h" },
				{ "TaskRunning.Comment", "/** The node in connected and a task is currently running on it. Before running any task on such node, you need to stop the current task first. */" },
				{ "TaskRunning.Name", "ENodeStatus::TaskRunning" },
				{ "TaskRunning.ToolTip", "The node in connected and a task is currently running on it. Before running any task on such node, you need to stop the current task first." },
				{ "ToolTip", "Defines different node conditions." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
				nullptr,
				"ENodeStatus",
				"ENodeStatus",
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
class UScriptStruct* FUsbDeviceType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYDEVICENETWORK_API uint32 Get_Z_Construct_UScriptStruct_FUsbDeviceType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUsbDeviceType, Z_Construct_UPackage__Script_AntilatencyDeviceNetwork(), TEXT("UsbDeviceType"), sizeof(FUsbDeviceType), Get_Z_Construct_UScriptStruct_FUsbDeviceType_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYDEVICENETWORK_API UScriptStruct* StaticStruct<FUsbDeviceType>()
{
	return FUsbDeviceType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUsbDeviceType(FUsbDeviceType::StaticStruct, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("UsbDeviceType"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyDeviceNetwork_StaticRegisterNativesFUsbDeviceType
{
	FScriptStruct_AntilatencyDeviceNetwork_StaticRegisterNativesFUsbDeviceType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UsbDeviceType")),new UScriptStruct::TCppStructOps<FUsbDeviceType>);
	}
} ScriptStruct_AntilatencyDeviceNetwork_StaticRegisterNativesFUsbDeviceType;
	struct Z_Construct_UScriptStruct_FUsbDeviceType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vid_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_vid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsbDeviceType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|DeviceNetwork|USB Device Type" },
		{ "Comment", "/**\n * USB device identifier.\n */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkTypes.h" },
		{ "ToolTip", "USB device identifier." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUsbDeviceType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_pid_MetaData[] = {
		{ "Category", "Antilatency|DeviceNetwork|USB Device Type" },
		{ "Comment", "/** USB device product ID. */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkTypes.h" },
		{ "ToolTip", "USB device product ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_pid = { "pid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsbDeviceType, pid), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_pid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_pid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_vid_MetaData[] = {
		{ "Category", "Antilatency|DeviceNetwork|USB Device Type" },
		{ "Comment", "/** USB device vendor ID. */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkTypes.h" },
		{ "ToolTip", "USB device vendor ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_vid = { "vid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUsbDeviceType, vid), METADATA_PARAMS(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_vid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_vid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUsbDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_pid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUsbDeviceType_Statics::NewProp_vid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUsbDeviceType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
		nullptr,
		&NewStructOps,
		"UsbDeviceType",
		sizeof(FUsbDeviceType),
		alignof(FUsbDeviceType),
		Z_Construct_UScriptStruct_FUsbDeviceType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUsbDeviceType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUsbDeviceType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUsbDeviceType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UsbDeviceType"), sizeof(FUsbDeviceType), Get_Z_Construct_UScriptStruct_FUsbDeviceType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUsbDeviceType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUsbDeviceType_Hash() { return 3326987582U; }
class UScriptStruct* FAdnNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANTILATENCYDEVICENETWORK_API uint32 Get_Z_Construct_UScriptStruct_FAdnNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdnNode, Z_Construct_UPackage__Script_AntilatencyDeviceNetwork(), TEXT("AdnNode"), sizeof(FAdnNode), Get_Z_Construct_UScriptStruct_FAdnNode_Hash());
	}
	return Singleton;
}
template<> ANTILATENCYDEVICENETWORK_API UScriptStruct* StaticStruct<FAdnNode>()
{
	return FAdnNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdnNode(FAdnNode::StaticStruct, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("AdnNode"), false, nullptr, nullptr);
static struct FScriptStruct_AntilatencyDeviceNetwork_StaticRegisterNativesFAdnNode
{
	FScriptStruct_AntilatencyDeviceNetwork_StaticRegisterNativesFAdnNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdnNode")),new UScriptStruct::TCppStructOps<FAdnNode>);
	}
} ScriptStruct_AntilatencyDeviceNetwork_StaticRegisterNativesFAdnNode;
	struct Z_Construct_UScriptStruct_FAdnNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeHandleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NativeHandleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdnNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Antilatency|DeviceNetwork|Library|AdnNode" },
		{ "Comment", "/**\n * The UE wrapper for the Antilatency::DeviceNetwork::NodeHandle. Every time device is connected,\n * the unique handle will be applied to it, so, when device disconnects,\n * ENodeStatus for its node becomes Invalid, after reconnection this devices receives new handle.\n */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkTypes.h" },
		{ "ToolTip", "The UE wrapper for the Antilatency::DeviceNetwork::NodeHandle. Every time device is connected,\nthe unique handle will be applied to it, so, when device disconnects,\nENodeStatus for its node becomes Invalid, after reconnection this devices receives new handle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdnNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdnNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdnNode_Statics::NewProp_NativeHandleValue_MetaData[] = {
		{ "Category", "Antilatency|DeviceNetwork|Library|AdnNode" },
		{ "ModuleRelativePath", "Public/DeviceNetworkTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdnNode_Statics::NewProp_NativeHandleValue = { "NativeHandleValue", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdnNode, NativeHandleValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdnNode_Statics::NewProp_NativeHandleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdnNode_Statics::NewProp_NativeHandleValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdnNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdnNode_Statics::NewProp_NativeHandleValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdnNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
		nullptr,
		&NewStructOps,
		"AdnNode",
		sizeof(FAdnNode),
		alignof(FAdnNode),
		Z_Construct_UScriptStruct_FAdnNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdnNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdnNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdnNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdnNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdnNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdnNode"), sizeof(FAdnNode), Get_Z_Construct_UScriptStruct_FAdnNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdnNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdnNode_Hash() { return 3688888567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
