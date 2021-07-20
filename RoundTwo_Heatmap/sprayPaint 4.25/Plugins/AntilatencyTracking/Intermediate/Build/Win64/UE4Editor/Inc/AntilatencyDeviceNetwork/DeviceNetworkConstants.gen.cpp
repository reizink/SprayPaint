// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyDeviceNetwork/Public/DeviceNetworkConstants.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceNetworkConstants() {}
// Cross Module References
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkConstantsLibrary_NoRegister();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkConstantsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUsbDeviceType();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
// End Cross Module References
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execTagKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDeviceNetworkConstantsLibrary::TagKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execHardwareSerialNumberKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDeviceNetworkConstantsLibrary::HardwareSerialNumberKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execFirmwareNameKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDeviceNetworkConstantsLibrary::FirmwareNameKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execFirmwareVersionKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDeviceNetworkConstantsLibrary::FirmwareVersionKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execHardwareNameKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDeviceNetworkConstantsLibrary::HardwareNameKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execHardwareVersionKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDeviceNetworkConstantsLibrary::HardwareVersionKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execNullNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAdnNode*)Z_Param__Result=UDeviceNetworkConstantsLibrary::NullNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execAntilatencyUsbDeviceTypeLegacy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUsbDeviceType*)Z_Param__Result=UDeviceNetworkConstantsLibrary::AntilatencyUsbDeviceTypeLegacy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeviceNetworkConstantsLibrary::execAntilatencyUsbDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUsbDeviceType*)Z_Param__Result=UDeviceNetworkConstantsLibrary::AntilatencyUsbDeviceType();
		P_NATIVE_END;
	}
	void UDeviceNetworkConstantsLibrary::StaticRegisterNativesUDeviceNetworkConstantsLibrary()
	{
		UClass* Class = UDeviceNetworkConstantsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AntilatencyUsbDeviceType", &UDeviceNetworkConstantsLibrary::execAntilatencyUsbDeviceType },
			{ "AntilatencyUsbDeviceTypeLegacy", &UDeviceNetworkConstantsLibrary::execAntilatencyUsbDeviceTypeLegacy },
			{ "FirmwareNameKey", &UDeviceNetworkConstantsLibrary::execFirmwareNameKey },
			{ "FirmwareVersionKey", &UDeviceNetworkConstantsLibrary::execFirmwareVersionKey },
			{ "HardwareNameKey", &UDeviceNetworkConstantsLibrary::execHardwareNameKey },
			{ "HardwareSerialNumberKey", &UDeviceNetworkConstantsLibrary::execHardwareSerialNumberKey },
			{ "HardwareVersionKey", &UDeviceNetworkConstantsLibrary::execHardwareVersionKey },
			{ "NullNode", &UDeviceNetworkConstantsLibrary::execNullNode },
			{ "TagKey", &UDeviceNetworkConstantsLibrary::execTagKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventAntilatencyUsbDeviceType_Parms
		{
			FUsbDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventAntilatencyUsbDeviceType_Parms, ReturnValue), Z_Construct_UScriptStruct_FUsbDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|USB Device Type" },
		{ "Comment", "/**\n     * @return The predefined FUsbDeviceType structure that matches all Antilatency devices.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "@return The predefined FUsbDeviceType structure that matches all Antilatency devices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "AntilatencyUsbDeviceType", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventAntilatencyUsbDeviceType_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventAntilatencyUsbDeviceTypeLegacy_Parms
		{
			FUsbDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventAntilatencyUsbDeviceTypeLegacy_Parms, ReturnValue), Z_Construct_UScriptStruct_FUsbDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|USB Device Type" },
		{ "Comment", "/**\n     * @return The predefined FUsbDeviceType structure that matches all Antilatency devices with legacy vendor ID.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "@return The predefined FUsbDeviceType structure that matches all Antilatency devices with legacy vendor ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "AntilatencyUsbDeviceTypeLegacy", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventAntilatencyUsbDeviceTypeLegacy_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventFirmwareNameKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventFirmwareNameKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Property Key" },
		{ "Comment", "/**\n     * The predefined key to get the hardware version property value from the node.\n     * @return The hardware version property key.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "The predefined key to get the hardware version property value from the node.\n@return The hardware version property key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "FirmwareNameKey", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventFirmwareNameKey_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventFirmwareVersionKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventFirmwareVersionKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Property Key" },
		{ "Comment", "/**\n     * The predefined key to get the software version property value from the node.\n     * @return The software version property key.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "The predefined key to get the software version property value from the node.\n@return The software version property key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "FirmwareVersionKey", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventFirmwareVersionKey_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventHardwareNameKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventHardwareNameKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Property Key" },
		{ "Comment", "/**\n     * The predefined key to get the hardware name property value from the node.\n     * @return The hardware name property key.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "The predefined key to get the hardware name property value from the node.\n@return The hardware name property key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "HardwareNameKey", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventHardwareNameKey_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventHardwareSerialNumberKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventHardwareSerialNumberKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Property Key" },
		{ "Comment", "/**\n     * The predefined key to get the hardware serial number property value from the node.\n     * @return The hardware serial number property key.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "The predefined key to get the hardware serial number property value from the node.\n@return The hardware serial number property key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "HardwareSerialNumberKey", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventHardwareSerialNumberKey_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventHardwareVersionKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventHardwareVersionKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Property Key" },
		{ "Comment", "/**\n     * The predefined key to get the hardware version property value from the node.\n     * @return The hardware version property key.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "The predefined key to get the hardware version property value from the node.\n@return The hardware version property key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "HardwareVersionKey", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventHardwareVersionKey_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventNullNode_Parms
		{
			FAdnNode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventNullNode_Parms, ReturnValue), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Node" },
		{ "Comment", "/**\n     * Get the null node, that can be used as invalid node. Also, calling nodeGetParent on USB node will return null node.\n     * @return The null node.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "Get the null node, that can be used as invalid node. Also, calling nodeGetParent on USB node will return null node.\n@return The null node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "NullNode", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventNullNode_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics
	{
		struct DeviceNetworkConstantsLibrary_eventTagKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DeviceNetworkConstantsLibrary_eventTagKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|DeviceNetwork|Constants|Property Key" },
		{ "Comment", "/**\n     * The predefined key to get the tag property value from the node.\n     * @return The tag property key.\n     */" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
		{ "ToolTip", "The predefined key to get the tag property value from the node.\n@return The tag property key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeviceNetworkConstantsLibrary, nullptr, "TagKey", nullptr, nullptr, sizeof(DeviceNetworkConstantsLibrary_eventTagKey_Parms), Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDeviceNetworkConstantsLibrary_NoRegister()
	{
		return UDeviceNetworkConstantsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceType, "AntilatencyUsbDeviceType" }, // 3052388623
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_AntilatencyUsbDeviceTypeLegacy, "AntilatencyUsbDeviceTypeLegacy" }, // 3863808805
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareNameKey, "FirmwareNameKey" }, // 667952867
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_FirmwareVersionKey, "FirmwareVersionKey" }, // 2614059381
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareNameKey, "HardwareNameKey" }, // 3791352948
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareSerialNumberKey, "HardwareSerialNumberKey" }, // 1885217820
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_HardwareVersionKey, "HardwareVersionKey" }, // 2601483631
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_NullNode, "NullNode" }, // 1189986424
		{ &Z_Construct_UFunction_UDeviceNetworkConstantsLibrary_TagKey, "TagKey" }, // 3347740405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DeviceNetworkConstants.h" },
		{ "ModuleRelativePath", "Public/DeviceNetworkConstants.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceNetworkConstantsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::ClassParams = {
		&UDeviceNetworkConstantsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceNetworkConstantsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceNetworkConstantsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceNetworkConstantsLibrary, 2648276329);
	template<> ANTILATENCYDEVICENETWORK_API UClass* StaticClass<UDeviceNetworkConstantsLibrary>()
	{
		return UDeviceNetworkConstantsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceNetworkConstantsLibrary(Z_Construct_UClass_UDeviceNetworkConstantsLibrary, &UDeviceNetworkConstantsLibrary::StaticClass, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("UDeviceNetworkConstantsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceNetworkConstantsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
