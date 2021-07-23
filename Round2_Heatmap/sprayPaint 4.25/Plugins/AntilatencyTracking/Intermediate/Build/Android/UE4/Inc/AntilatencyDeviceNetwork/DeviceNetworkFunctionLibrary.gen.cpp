// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyDeviceNetwork/Public/DeviceNetworkFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceNetworkFunctionLibrary() {}
// Cross Module References
	ANTILATENCYDEVICENETWORK_API UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkFunctionLibrary_NoRegister();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUsbDeviceType();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
	ANTILATENCYDEVICENETWORK_API UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ANTILATENCYDEVICENETWORK_API UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel();
// End Cross Module References
	static UEnum* EDeviceNetworkExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, Z_Construct_UPackage__Script_AntilatencyDeviceNetwork(), TEXT("EDeviceNetworkExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYDEVICENETWORK_API UEnum* StaticEnum<EDeviceNetworkExceptionResult>()
	{
		return EDeviceNetworkExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDeviceNetworkExceptionResult(EDeviceNetworkExceptionResult_StaticEnum, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("EDeviceNetworkExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult_Hash() { return 3852236616U; }
	UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDeviceNetworkExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDeviceNetworkExceptionResult::Success", (int64)EDeviceNetworkExceptionResult::Success },
				{ "EDeviceNetworkExceptionResult::Fail", (int64)EDeviceNetworkExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "EDeviceNetworkExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EDeviceNetworkExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
				nullptr,
				"EDeviceNetworkExceptionResult",
				"EDeviceNetworkExceptionResult",
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
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNotEqual_FAdnNodeFAdnNode)
	{
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_arg1);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_arg2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDeviceNetworkFunctionLibrary::NotEqual_FAdnNodeFAdnNode(Z_Param_Out_arg1,Z_Param_Out_arg2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execEqualEqual_FAdnNodeFAdnNode)
	{
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_arg1);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_arg2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDeviceNetworkFunctionLibrary::EqualEqual_FAdnNodeFAdnNode(Z_Param_Out_arg1,Z_Param_Out_arg2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execIsNetworkValid)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDeviceNetworkFunctionLibrary::IsNetworkValid(Z_Param_network);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNodeSetStringProperty)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::NodeSetStringProperty(Z_Param_network,Z_Param_Out_node,Z_Param_key,Z_Param_value,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNodeGetStringProperty)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::NodeGetStringProperty(Z_Param_network,Z_Param_Out_node,Z_Param_key,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNodeGetPhysicalPath)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::NodeGetPhysicalPath(Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNodeGetParent)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::NodeGetParent(Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNodeIsTaskSupported)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_interfaceId);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::NodeIsTaskSupported(Z_Param_network,Z_Param_Out_node,Z_Param_Out_interfaceId,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execNodeGetStatus)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_ENUM_REF(ENodeStatus,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::NodeGetStatus(Z_Param_network,Z_Param_Out_node,(ENodeStatus&)(Z_Param_Out_result),(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execGetNodes)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_TARRAY_REF(FAdnNode,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::GetNodes(Z_Param_network,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execGetDevicesTypes)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_TARRAY_REF(FUsbDeviceType,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::GetDevicesTypes(Z_Param_network,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execGetUpdateId)
	{
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::GetUpdateId(Z_Param_network,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(UDeviceNetworkLibrary,Z_Param_deviceNetworkLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDeviceNetworkFunctionLibrary::IsLibraryValid(Z_Param_deviceNetworkLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execSetLogLevel)
	{
		P_GET_OBJECT(UDeviceNetworkLibrary,Z_Param_deviceNetworkLibrary);
		P_GET_ENUM_REF(EDeviceNetworkLogLevel,Z_Param_Out_level);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::SetLogLevel(Z_Param_deviceNetworkLibrary,(EDeviceNetworkLogLevel&)(Z_Param_Out_level),(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execGetVersion)
	{
		P_GET_OBJECT(UDeviceNetworkLibrary,Z_Param_deviceNetworkLibrary);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::GetVersion(Z_Param_deviceNetworkLibrary,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execCreateNetwork)
	{
		P_GET_OBJECT(UDeviceNetworkLibrary,Z_Param_deviceNetworkLibrary);
		P_GET_TARRAY_REF(FUsbDeviceType,Z_Param_Out_usbDeviceTypes);
		P_GET_OBJECT_REF(UDeviceNetwork,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::CreateNetwork(Z_Param_deviceNetworkLibrary,Z_Param_Out_usbDeviceTypes,Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkFunctionLibrary::execGetDeviceNetworkLibrary)
	{
		P_GET_OBJECT_REF(UDeviceNetworkLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(EDeviceNetworkExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDeviceNetworkFunctionLibrary::GetDeviceNetworkLibrary(Z_Param_Out_result,(EDeviceNetworkExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void UDeviceNetworkFunctionLibrary::StaticRegisterNativesUDeviceNetworkFunctionLibrary()
	{
		UClass* Class = UDeviceNetworkFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNetwork", &UDeviceNetworkFunctionLibrary::execCreateNetwork },
			{ "EqualEqual_FAdnNodeFAdnNode", &UDeviceNetworkFunctionLibrary::execEqualEqual_FAdnNodeFAdnNode },
			{ "GetDeviceNetworkLibrary", &UDeviceNetworkFunctionLibrary::execGetDeviceNetworkLibrary },
			{ "GetDevicesTypes", &UDeviceNetworkFunctionLibrary::execGetDevicesTypes },
			{ "GetNodes", &UDeviceNetworkFunctionLibrary::execGetNodes },
			{ "GetUpdateId", &UDeviceNetworkFunctionLibrary::execGetUpdateId },
			{ "GetVersion", &UDeviceNetworkFunctionLibrary::execGetVersion },
			{ "IsLibraryValid", &UDeviceNetworkFunctionLibrary::execIsLibraryValid },
			{ "IsNetworkValid", &UDeviceNetworkFunctionLibrary::execIsNetworkValid },
			{ "NodeGetParent", &UDeviceNetworkFunctionLibrary::execNodeGetParent },
			{ "NodeGetPhysicalPath", &UDeviceNetworkFunctionLibrary::execNodeGetPhysicalPath },
			{ "NodeGetStatus", &UDeviceNetworkFunctionLibrary::execNodeGetStatus },
			{ "NodeGetStringProperty", &UDeviceNetworkFunctionLibrary::execNodeGetStringProperty },
			{ "NodeIsTaskSupported", &UDeviceNetworkFunctionLibrary::execNodeIsTaskSupported },
			{ "NodeSetStringProperty", &UDeviceNetworkFunctionLibrary::execNodeSetStringProperty },
			{ "NotEqual_FAdnNodeFAdnNode", &UDeviceNetworkFunctionLibrary::execNotEqual_FAdnNodeFAdnNode },
			{ "SetLogLevel", &UDeviceNetworkFunctionLibrary::execSetLogLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventCreateNetwork_Parms
		{
			const UDeviceNetworkLibrary* deviceNetworkLibrary;
			TArray<FUsbDeviceType> usbDeviceTypes;
			UDeviceNetwork* result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_usbDeviceTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_usbDeviceTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_usbDeviceTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceNetworkLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deviceNetworkLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventCreateNetwork_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventCreateNetwork_Parms, result), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes = { "usbDeviceTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventCreateNetwork_Parms, usbDeviceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes_Inner = { "usbDeviceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUsbDeviceType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_deviceNetworkLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_deviceNetworkLibrary = { "deviceNetworkLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventCreateNetwork_Parms, deviceNetworkLibrary), Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_deviceNetworkLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_deviceNetworkLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_usbDeviceTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::NewProp_deviceNetworkLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Create the device network to work with Antilatency devices.\n     * @param deviceNetworkLibrary The pointer to the UDeviceNetworkLibrary object.\n     * @param usbDeviceTypes The array of the USB devices identifiers that will be used by network.\n     * @param result The pointer to the created UDeviceNetwork instance.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Create the device network to work with Antilatency devices.\n@param deviceNetworkLibrary The pointer to the UDeviceNetworkLibrary object.\n@param usbDeviceTypes The array of the USB devices identifiers that will be used by network.\n@param result The pointer to the created UDeviceNetwork instance.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "CreateNetwork", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventCreateNetwork_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventEqualEqual_FAdnNodeFAdnNode_Parms
		{
			FAdnNode arg1;
			FAdnNode arg2;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arg2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arg2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arg1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arg1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeviceNetworkFunctionLibrary_eventEqualEqual_FAdnNodeFAdnNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeviceNetworkFunctionLibrary_eventEqualEqual_FAdnNodeFAdnNode_Parms), &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2 = { "arg2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventEqualEqual_FAdnNodeFAdnNode_Parms, arg2), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1 = { "arg1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventEqualEqual_FAdnNodeFAdnNode_Parms, arg1), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n\x09* Check if two FAdnNodes are equal.\n\x09* @param arg1 The first FAdnNode to compare.\n\x09* @param arg2 The second FAdnNode to compare.\n\x09* @return True if nodes are equal, otherwise false.\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal FAdnNode" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Check if two FAdnNodes are equal.\n@param arg1 The first FAdnNode to compare.\n@param arg2 The second FAdnNode to compare.\n@return True if nodes are equal, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "EqualEqual_FAdnNodeFAdnNode", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventEqualEqual_FAdnNodeFAdnNode_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventGetDeviceNetworkLibrary_Parms
		{
			UDeviceNetworkLibrary* result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetDeviceNetworkLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetDeviceNetworkLibrary_Parms, result), Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Library" },
		{ "Comment", "/**\n     * Get the native device network library object.\n     * @param result The native device network library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get the native device network library object.\n@param result The native device network library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "GetDeviceNetworkLibrary", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventGetDeviceNetworkLibrary_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventGetDevicesTypes_Parms
		{
			const UDeviceNetwork* network;
			TArray<FUsbDeviceType> result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetDevicesTypes_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetDevicesTypes_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUsbDeviceType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetDevicesTypes_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Get USB device types selected to work with this network instance.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param result The array of FUsbDeviceType, that describes the list of USB devices which is used by this Device Network instance to work with.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get USB device types selected to work with this network instance.\n@param network The pointer to the UDeviceNetwork object.\n@param result The array of FUsbDeviceType, that describes the list of USB devices which is used by this Device Network instance to work with.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "GetDevicesTypes", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventGetDevicesTypes_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventGetNodes_Parms
		{
			const UDeviceNetwork* network;
			TArray<FAdnNode> result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetNodes_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetNodes_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetNodes_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Get all currently connected nodes.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param result The array of currently connected devices.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get all currently connected nodes.\n@param network The pointer to the UDeviceNetwork object.\n@param result The array of currently connected devices.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "GetNodes", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventGetNodes_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventGetUpdateId_Parms
		{
			const UDeviceNetwork* network;
			int32 result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetUpdateId_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetUpdateId_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetUpdateId_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Every time any supported device is connected or disconnected, update ID will be incremented. You can use this method to check if there are any changes in ADN.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param result Current Device Network update ID.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Every time any supported device is connected or disconnected, update ID will be incremented. You can use this method to check if there are any changes in ADN.\n@param network The pointer to the UDeviceNetwork object.\n@param result Current Device Network update ID.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "GetUpdateId", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventGetUpdateId_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventGetVersion_Parms
		{
			const UDeviceNetworkLibrary* deviceNetworkLibrary;
			FString result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceNetworkLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deviceNetworkLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetVersion_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetVersion_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_deviceNetworkLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_deviceNetworkLibrary = { "deviceNetworkLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventGetVersion_Parms, deviceNetworkLibrary), Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_deviceNetworkLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_deviceNetworkLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::NewProp_deviceNetworkLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Library" },
		{ "Comment", "/**\n     * Get the Antilatency Device Network library version.\n     * @param deviceNetworkLibrary The pointer to the UDeviceNetworkLibrary object.\n     * @param result The Antilatency Device Network library version.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get the Antilatency Device Network library version.\n@param deviceNetworkLibrary The pointer to the UDeviceNetworkLibrary object.\n@param result The Antilatency Device Network library version.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "GetVersion", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventGetVersion_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventIsLibraryValid_Parms
		{
			const UDeviceNetworkLibrary* deviceNetworkLibrary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceNetworkLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deviceNetworkLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeviceNetworkFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeviceNetworkFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_deviceNetworkLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_deviceNetworkLibrary = { "deviceNetworkLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventIsLibraryValid_Parms, deviceNetworkLibrary), Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_deviceNetworkLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_deviceNetworkLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::NewProp_deviceNetworkLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Library" },
		{ "Comment", "/**\n     * Check if UDeviceNetworkLibrary has been initialized properly (the UDeviceNetworkLibrary is not nullptr and the native Antilatency::DeviceNetwork::ILibrary is not nullptr).\n     * @param deviceNetworkLibrary A pointer to the UDeviceNetworkLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Check if UDeviceNetworkLibrary has been initialized properly (the UDeviceNetworkLibrary is not nullptr and the native Antilatency::DeviceNetwork::ILibrary is not nullptr).\n@param deviceNetworkLibrary A pointer to the UDeviceNetworkLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventIsNetworkValid_Parms
		{
			const UDeviceNetwork* network;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeviceNetworkFunctionLibrary_eventIsNetworkValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeviceNetworkFunctionLibrary_eventIsNetworkValid_Parms), &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventIsNetworkValid_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Check if the Device Network wrapper initialized properly.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @return True if the Device Network wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Check if the Device Network wrapper initialized properly.\n@param network The pointer to the UDeviceNetwork object.\n@return True if the Device Network wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "IsNetworkValid", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventIsNetworkValid_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNodeGetParent_Parms
		{
			const UDeviceNetwork* network;
			FAdnNode node;
			FAdnNode result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetParent_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetParent_Parms, result), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetParent_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetParent_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Get the parent node.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param node The node to get it's parent.\n     * @param result The node's parent. If node is USB node, parent will be Null node.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get the parent node.\n@param network The pointer to the UDeviceNetwork object.\n@param node The node to get it's parent.\n@param result The node's parent. If node is USB node, parent will be Null node.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NodeGetParent", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNodeGetParent_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNodeGetPhysicalPath_Parms
		{
			const UDeviceNetwork* network;
			FAdnNode node;
			FString result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetPhysicalPath_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetPhysicalPath_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetPhysicalPath_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetPhysicalPath_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * The physical address path to the first level device that contains this node in the network tree.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param node The node to get physical path.\n     * @param result The USB node physical path.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "The physical address path to the first level device that contains this node in the network tree.\n@param network The pointer to the UDeviceNetwork object.\n@param node The node to get physical path.\n@param result The USB node physical path.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NodeGetPhysicalPath", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNodeGetPhysicalPath_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNodeGetStatus_Parms
		{
			const UDeviceNetwork* network;
			FAdnNode node;
			ENodeStatus result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStatus_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStatus_Parms, result), Z_Construct_UEnum_AntilatencyDeviceNetwork_ENodeStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStatus_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStatus_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Get current node status.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param node The node to get status.\n     * @param result Current node status.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get current node status.\n@param network The pointer to the UDeviceNetwork object.\n@param node The node to get status.\n@param result Current node status.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NodeGetStatus", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNodeGetStatus_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms
		{
			const UDeviceNetwork* network;
			FAdnNode node;
			FString key;
			FString result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Get the node string property value.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param node The node to get property from.\n     * @param key The property name to get value for.\n     * @param result The property value.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Get the node string property value.\n@param network The pointer to the UDeviceNetwork object.\n@param node The node to get property from.\n@param key The property name to get value for.\n@param result The property value.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NodeGetStringProperty", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNodeGetStringProperty_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms
		{
			const UDeviceNetwork* network;
			FAdnNode node;
			FGuid interfaceId;
			bool result;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interfaceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interfaceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_result_SetBit(void* Obj)
	{
		((DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms), &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_interfaceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_interfaceId = { "interfaceId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms, interfaceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_interfaceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_interfaceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_interfaceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Checks if task is supported by node.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param node The node top check the task support.\n     * @param interfaceId The guid of task.\n     * @param result True if the node supports the task, otherwise false.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Checks if task is supported by node.\n@param network The pointer to the UDeviceNetwork object.\n@param node The node top check the task support.\n@param interfaceId The guid of task.\n@param result True if the node supports the task, otherwise false.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NodeIsTaskSupported", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNodeIsTaskSupported_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms
		{
			const UDeviceNetwork* network;
			FAdnNode node;
			FString key;
			FString value;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_network_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::NewProp_network,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Network" },
		{ "Comment", "/**\n     * Set the node string property value.\n     * @param network The pointer to the UDeviceNetwork object.\n     * @param node The node to set property on.\n     * @param key The property name.\n     * @param value The property value to set.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Set the node string property value.\n@param network The pointer to the UDeviceNetwork object.\n@param node The node to set property on.\n@param key The property name.\n@param value The property value to set.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NodeSetStringProperty", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNodeSetStringProperty_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventNotEqual_FAdnNodeFAdnNode_Parms
		{
			FAdnNode arg1;
			FAdnNode arg2;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arg2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arg2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arg1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arg1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DeviceNetworkFunctionLibrary_eventNotEqual_FAdnNodeFAdnNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DeviceNetworkFunctionLibrary_eventNotEqual_FAdnNodeFAdnNode_Parms), &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2 = { "arg2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNotEqual_FAdnNodeFAdnNode_Parms, arg2), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1 = { "arg1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventNotEqual_FAdnNodeFAdnNode_Parms, arg1), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::NewProp_arg1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n\x09 * Check if two FAdnNodes are not equal.\n\x09 * @param arg1 The first FAdnNode to compare.\n\x09 * @param arg2 The second FAdnNode to compare.\n\x09 * @return True if nodes are not equal, otherwise false.\n\x09 */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal FAdnNode" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Check if two FAdnNodes are not equal.\n@param arg1 The first FAdnNode to compare.\n@param arg2 The second FAdnNode to compare.\n@return True if nodes are not equal, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "NotEqual_FAdnNodeFAdnNode", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventNotEqual_FAdnNodeFAdnNode_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics
	{
		struct DeviceNetworkFunctionLibrary_eventSetLogLevel_Parms
		{
			const UDeviceNetworkLibrary* deviceNetworkLibrary;
			EDeviceNetworkLogLevel level;
			EDeviceNetworkExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceNetworkLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deviceNetworkLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventSetLogLevel_Parms, exception), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventSetLogLevel_Parms, level), Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_deviceNetworkLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_deviceNetworkLibrary = { "deviceNetworkLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkFunctionLibrary_eventSetLogLevel_Parms, deviceNetworkLibrary), Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_deviceNetworkLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_deviceNetworkLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_level_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::NewProp_deviceNetworkLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Library" },
		{ "Comment", "/** \n     * Set the log verbosity level for Antilatency Device Network library. \n     * @param deviceNetworkLibrary The pointer to the UDeviceNetworkLibrary object.\n     * @param level The verbosity level to set.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Set the log verbosity level for Antilatency Device Network library.\n@param deviceNetworkLibrary The pointer to the UDeviceNetworkLibrary object.\n@param level The verbosity level to set.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkFunctionLibrary, nullptr, "SetLogLevel", nullptr, nullptr, sizeof(DeviceNetworkFunctionLibrary_eventSetLogLevel_Parms), Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeviceNetworkFunctionLibrary_NoRegister()
	{
		return UDeviceNetworkFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_CreateNetwork, "CreateNetwork" }, // 10004614
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_EqualEqual_FAdnNodeFAdnNode, "EqualEqual_FAdnNodeFAdnNode" }, // 2008430707
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDeviceNetworkLibrary, "GetDeviceNetworkLibrary" }, // 476624618
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetDevicesTypes, "GetDevicesTypes" }, // 297096149
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetNodes, "GetNodes" }, // 3199099864
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetUpdateId, "GetUpdateId" }, // 168166422
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_GetVersion, "GetVersion" }, // 2767616351
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 3936445220
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_IsNetworkValid, "IsNetworkValid" }, // 1045314863
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetParent, "NodeGetParent" }, // 3033834149
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetPhysicalPath, "NodeGetPhysicalPath" }, // 3516984352
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStatus, "NodeGetStatus" }, // 2116799348
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeGetStringProperty, "NodeGetStringProperty" }, // 1037274454
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeIsTaskSupported, "NodeIsTaskSupported" }, // 4002181769
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NodeSetStringProperty, "NodeSetStringProperty" }, // 1842448286
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_NotEqual_FAdnNodeFAdnNode, "NotEqual_FAdnNodeFAdnNode" }, // 3968027443
		{ &Z_Construct_UFunction_UDeviceNetworkFunctionLibrary_SetLogLevel, "SetLogLevel" }, // 4189598553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Device Network module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "DeviceNetworkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/DeviceNetworkFunctionLibrary.h" },
		{ "ToolTip", "Provides Device Network module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceNetworkFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::ClassParams = {
		&UDeviceNetworkFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceNetworkFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceNetworkFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceNetworkFunctionLibrary, 1445289148);
	template<> ANTILATENCYDEVICENETWORK_API UClass* StaticClass<UDeviceNetworkFunctionLibrary>()
	{
		return UDeviceNetworkFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceNetworkFunctionLibrary(Z_Construct_UClass_UDeviceNetworkFunctionLibrary, &UDeviceNetworkFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("UDeviceNetworkFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceNetworkFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
