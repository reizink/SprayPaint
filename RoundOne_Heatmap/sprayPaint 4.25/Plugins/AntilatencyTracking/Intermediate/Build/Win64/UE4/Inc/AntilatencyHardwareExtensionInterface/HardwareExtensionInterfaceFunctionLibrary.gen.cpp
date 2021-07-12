// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/HardwareExtensionInterfaceFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareExtensionInterfaceFunctionLibrary() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UAnalogPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UInputPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UOutputPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UPulseCounterPin_NoRegister();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister();
// End Cross Module References
	static UEnum* EHardwareExtensionInterfaceExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface(), TEXT("EHardwareExtensionInterfaceExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* StaticEnum<EHardwareExtensionInterfaceExceptionResult>()
	{
		return EHardwareExtensionInterfaceExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHardwareExtensionInterfaceExceptionResult(EHardwareExtensionInterfaceExceptionResult_StaticEnum, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("EHardwareExtensionInterfaceExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult_Hash() { return 269143829U; }
	UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHardwareExtensionInterfaceExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHardwareExtensionInterfaceExceptionResult::Success", (int64)EHardwareExtensionInterfaceExceptionResult::Success },
				{ "EHardwareExtensionInterfaceExceptionResult::Fail", (int64)EHardwareExtensionInterfaceExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "EHardwareExtensionInterfaceExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EHardwareExtensionInterfaceExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
				nullptr,
				"EHardwareExtensionInterfaceExceptionResult",
				"EHardwareExtensionInterfaceExceptionResult",
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
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsPulseCounterPinValid)
	{
		P_GET_OBJECT(UPulseCounterPin,Z_Param_pin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHardwareExtensionInterfaceFunctionLibrary::IsPulseCounterPinValid(Z_Param_pin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execGetPulseCounterPinValue)
	{
		P_GET_OBJECT(UPulseCounterPin,Z_Param_pin);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::GetPulseCounterPinValue(Z_Param_pin,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsAnalogPinValid)
	{
		P_GET_OBJECT(UAnalogPin,Z_Param_pin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHardwareExtensionInterfaceFunctionLibrary::IsAnalogPinValid(Z_Param_pin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execGetAnalogPinValue)
	{
		P_GET_OBJECT(UAnalogPin,Z_Param_pin);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::GetAnalogPinValue(Z_Param_pin,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsOutputPinValid)
	{
		P_GET_OBJECT(UOutputPin,Z_Param_pin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHardwareExtensionInterfaceFunctionLibrary::IsOutputPinValid(Z_Param_pin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execSetOutputPinState)
	{
		P_GET_OBJECT(UOutputPin,Z_Param_pin);
		P_GET_ENUM_REF(EPinState,Z_Param_Out_state);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::SetOutputPinState(Z_Param_pin,(EPinState&)(Z_Param_Out_state),(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execGetOutputPinState)
	{
		P_GET_OBJECT(UOutputPin,Z_Param_pin);
		P_GET_ENUM_REF(EPinState,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::GetOutputPinState(Z_Param_pin,(EPinState&)(Z_Param_Out_result),(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsInputPinValid)
	{
		P_GET_OBJECT(UInputPin,Z_Param_pin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHardwareExtensionInterfaceFunctionLibrary::IsInputPinValid(Z_Param_pin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execGetInputPinState)
	{
		P_GET_OBJECT(UInputPin,Z_Param_pin);
		P_GET_ENUM_REF(EPinState,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::GetInputPinState(Z_Param_pin,(EPinState&)(Z_Param_Out_result),(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execRun)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::Run(Z_Param_cotask,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execCreatePulseCounterPin)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_GET_ENUM_REF(EPins,Z_Param_Out_pin);
		P_GET_PROPERTY(FByteProperty,Z_Param_refreshIntervalMs);
		P_GET_OBJECT_REF(UPulseCounterPin,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::CreatePulseCounterPin(Z_Param_cotask,(EPins&)(Z_Param_Out_pin),Z_Param_refreshIntervalMs,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execCreateAnalogPin)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_GET_ENUM_REF(EPins,Z_Param_Out_pin);
		P_GET_PROPERTY(FByteProperty,Z_Param_refreshIntervalMs);
		P_GET_OBJECT_REF(UAnalogPin,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::CreateAnalogPin(Z_Param_cotask,(EPins&)(Z_Param_Out_pin),Z_Param_refreshIntervalMs,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execCreateOutputPin)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_GET_ENUM_REF(EPins,Z_Param_Out_pin);
		P_GET_ENUM_REF(EPinState,Z_Param_Out_initialState);
		P_GET_OBJECT_REF(UOutputPin,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::CreateOutputPin(Z_Param_cotask,(EPins&)(Z_Param_Out_pin),(EPinState&)(Z_Param_Out_initialState),Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execCreateInputPin)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_GET_ENUM_REF(EPins,Z_Param_Out_pin);
		P_GET_OBJECT_REF(UInputPin,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::CreateInputPin(Z_Param_cotask,(EPins&)(Z_Param_Out_pin),Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsHardwareExtensionInterfaceTaskValid)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHardwareExtensionInterfaceFunctionLibrary::IsHardwareExtensionInterfaceTaskValid(Z_Param_cotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execStop)
	{
		P_GET_OBJECT_REF(UHardwareExtensionInterfaceCotask,Z_Param_Out_cotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::Stop(Z_Param_Out_cotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsTaskFinished)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceCotask,Z_Param_cotask);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::IsTaskFinished(Z_Param_cotask,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceLibrary,Z_Param_library);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHardwareExtensionInterfaceFunctionLibrary::IsLibraryValid(Z_Param_library);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execFindSupportedNodes)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceLibrary,Z_Param_library);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_TARRAY_REF(FAdnNode,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::FindSupportedNodes(Z_Param_library,Z_Param_network,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execIsSupported)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceLibrary,Z_Param_library);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::IsSupported(Z_Param_library,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execStartHardwareExtensionInterfaceTask)
	{
		P_GET_OBJECT(UHardwareExtensionInterfaceLibrary,Z_Param_library);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_OBJECT_REF(UHardwareExtensionInterfaceCotask,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::StartHardwareExtensionInterfaceTask(Z_Param_library,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHardwareExtensionInterfaceFunctionLibrary::execGetHardwareExtensionInterfaceLibrary)
	{
		P_GET_OBJECT_REF(UHardwareExtensionInterfaceLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(EHardwareExtensionInterfaceExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHardwareExtensionInterfaceFunctionLibrary::GetHardwareExtensionInterfaceLibrary(Z_Param_Out_result,(EHardwareExtensionInterfaceExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void UHardwareExtensionInterfaceFunctionLibrary::StaticRegisterNativesUHardwareExtensionInterfaceFunctionLibrary()
	{
		UClass* Class = UHardwareExtensionInterfaceFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAnalogPin", &UHardwareExtensionInterfaceFunctionLibrary::execCreateAnalogPin },
			{ "CreateInputPin", &UHardwareExtensionInterfaceFunctionLibrary::execCreateInputPin },
			{ "CreateOutputPin", &UHardwareExtensionInterfaceFunctionLibrary::execCreateOutputPin },
			{ "CreatePulseCounterPin", &UHardwareExtensionInterfaceFunctionLibrary::execCreatePulseCounterPin },
			{ "FindSupportedNodes", &UHardwareExtensionInterfaceFunctionLibrary::execFindSupportedNodes },
			{ "GetAnalogPinValue", &UHardwareExtensionInterfaceFunctionLibrary::execGetAnalogPinValue },
			{ "GetHardwareExtensionInterfaceLibrary", &UHardwareExtensionInterfaceFunctionLibrary::execGetHardwareExtensionInterfaceLibrary },
			{ "GetInputPinState", &UHardwareExtensionInterfaceFunctionLibrary::execGetInputPinState },
			{ "GetOutputPinState", &UHardwareExtensionInterfaceFunctionLibrary::execGetOutputPinState },
			{ "GetPulseCounterPinValue", &UHardwareExtensionInterfaceFunctionLibrary::execGetPulseCounterPinValue },
			{ "IsAnalogPinValid", &UHardwareExtensionInterfaceFunctionLibrary::execIsAnalogPinValid },
			{ "IsHardwareExtensionInterfaceTaskValid", &UHardwareExtensionInterfaceFunctionLibrary::execIsHardwareExtensionInterfaceTaskValid },
			{ "IsInputPinValid", &UHardwareExtensionInterfaceFunctionLibrary::execIsInputPinValid },
			{ "IsLibraryValid", &UHardwareExtensionInterfaceFunctionLibrary::execIsLibraryValid },
			{ "IsOutputPinValid", &UHardwareExtensionInterfaceFunctionLibrary::execIsOutputPinValid },
			{ "IsPulseCounterPinValid", &UHardwareExtensionInterfaceFunctionLibrary::execIsPulseCounterPinValid },
			{ "IsSupported", &UHardwareExtensionInterfaceFunctionLibrary::execIsSupported },
			{ "IsTaskFinished", &UHardwareExtensionInterfaceFunctionLibrary::execIsTaskFinished },
			{ "Run", &UHardwareExtensionInterfaceFunctionLibrary::execRun },
			{ "SetOutputPinState", &UHardwareExtensionInterfaceFunctionLibrary::execSetOutputPinState },
			{ "StartHardwareExtensionInterfaceTask", &UHardwareExtensionInterfaceFunctionLibrary::execStartHardwareExtensionInterfaceTask },
			{ "Stop", &UHardwareExtensionInterfaceFunctionLibrary::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			EPins pin;
			uint8 refreshIntervalMs;
			UAnalogPin* result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refreshIntervalMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_refreshIntervalMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pin_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms, result), Z_Construct_UClass_UAnalogPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_refreshIntervalMs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_refreshIntervalMs = { "refreshIntervalMs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms, refreshIntervalMs), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_refreshIntervalMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_refreshIntervalMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms, pin), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_refreshIntervalMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_pin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "CreateAnalogPin", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventCreateAnalogPin_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventCreateInputPin_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			EPins pin;
			UInputPin* result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pin_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateInputPin_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateInputPin_Parms, result), Z_Construct_UClass_UInputPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateInputPin_Parms, pin), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateInputPin_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_pin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "CreateInputPin", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventCreateInputPin_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			EPins pin;
			EPinState initialState;
			UOutputPin* result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_initialState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_initialState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pin_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms, result), Z_Construct_UClass_UOutputPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState = { "initialState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms, initialState), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms, pin), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_initialState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_pin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "CreateOutputPin", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventCreateOutputPin_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			EPins pin;
			uint8 refreshIntervalMs;
			UPulseCounterPin* result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_refreshIntervalMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_refreshIntervalMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pin_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms, result), Z_Construct_UClass_UPulseCounterPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_refreshIntervalMs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_refreshIntervalMs = { "refreshIntervalMs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms, refreshIntervalMs), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_refreshIntervalMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_refreshIntervalMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms, pin), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_refreshIntervalMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_pin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "CreatePulseCounterPin", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventCreatePulseCounterPin_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventFindSupportedNodes_Parms
		{
			const UHardwareExtensionInterfaceLibrary* library;
			const UDeviceNetwork* network;
			TArray<FAdnNode> result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_library_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_library;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventFindSupportedNodes_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventFindSupportedNodes_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventFindSupportedNodes_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_library_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_library = { "library", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventFindSupportedNodes_Parms, library), Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_library_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_library_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::NewProp_library,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Library" },
		{ "Comment", "/**\n     * Get all currently connected nodes that supports Hardware Extension Interface task.\n     * @param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param result An result array of nodes that support the Hardware Extension Interface task.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Get all currently connected nodes that supports Hardware Extension Interface task.\n@param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param result An result array of nodes that support the Hardware Extension Interface task.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "FindSupportedNodes", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventFindSupportedNodes_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventGetAnalogPinValue_Parms
		{
			const UAnalogPin* pin;
			float result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetAnalogPinValue_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetAnalogPinValue_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetAnalogPinValue_Parms, pin), Z_Construct_UClass_UAnalogPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Analog Pin" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "GetAnalogPinValue", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventGetAnalogPinValue_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventGetHardwareExtensionInterfaceLibrary_Parms
		{
			UHardwareExtensionInterfaceLibrary* result;
			EHardwareExtensionInterfaceExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetHardwareExtensionInterfaceLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetHardwareExtensionInterfaceLibrary_Parms, result), Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Library" },
		{ "Comment", "/**\n     * Get the Hardware Extension Interface library object.\n     * @param result The Hardware Extension Interface library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Get the Hardware Extension Interface library object.\n@param result The Hardware Extension Interface library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "GetHardwareExtensionInterfaceLibrary", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventGetHardwareExtensionInterfaceLibrary_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventGetInputPinState_Parms
		{
			const UInputPin* pin;
			EPinState result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetInputPinState_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetInputPinState_Parms, result), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetInputPinState_Parms, pin), Z_Construct_UClass_UInputPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Input Pin" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "GetInputPinState", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventGetInputPinState_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventGetOutputPinState_Parms
		{
			const UOutputPin* pin;
			EPinState result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetOutputPinState_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetOutputPinState_Parms, result), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetOutputPinState_Parms, pin), Z_Construct_UClass_UOutputPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Output Pin" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "GetOutputPinState", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventGetOutputPinState_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventGetPulseCounterPinValue_Parms
		{
			const UPulseCounterPin* pin;
			uint8 result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetPulseCounterPinValue_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetPulseCounterPinValue_Parms, result), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventGetPulseCounterPinValue_Parms, pin), Z_Construct_UClass_UPulseCounterPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Pulse Counter Pin" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "GetPulseCounterPinValue", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventGetPulseCounterPinValue_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsAnalogPinValid_Parms
		{
			const UAnalogPin* pin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsAnalogPinValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsAnalogPinValid_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsAnalogPinValid_Parms, pin), Z_Construct_UClass_UAnalogPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Analog Pin" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsAnalogPinValid", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsAnalogPinValid_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsHardwareExtensionInterfaceTaskValid_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsHardwareExtensionInterfaceTaskValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsHardwareExtensionInterfaceTaskValid_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsHardwareExtensionInterfaceTaskValid_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "Comment", "/**\n     * Check if the cotask wrapper initialized properly.\n     * @param cotask A pointer to the UHardwareExtensionInterfaceCotask object.\n     * @return True if the cotask wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Check if the cotask wrapper initialized properly.\n@param cotask A pointer to the UHardwareExtensionInterfaceCotask object.\n@return True if the cotask wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsHardwareExtensionInterfaceTaskValid", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsHardwareExtensionInterfaceTaskValid_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsInputPinValid_Parms
		{
			const UInputPin* pin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsInputPinValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsInputPinValid_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsInputPinValid_Parms, pin), Z_Construct_UClass_UInputPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Input Pin" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsInputPinValid", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsInputPinValid_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsLibraryValid_Parms
		{
			const UHardwareExtensionInterfaceLibrary* library;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_library_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_library;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_library_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_library = { "library", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsLibraryValid_Parms, library), Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_library_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_library_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::NewProp_library,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Library" },
		{ "Comment", "/**\n     * Check if UHardwareExtensionInterfaceLibrary has been initialized properly (the UHardwareExtensionInterfaceLibrary is not nullptr and the native Antilatency::HardwareExtensionInterface::ILibrary is not nullptr).\n     * @param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Check if UHardwareExtensionInterfaceLibrary has been initialized properly (the UHardwareExtensionInterfaceLibrary is not nullptr and the native Antilatency::HardwareExtensionInterface::ILibrary is not nullptr).\n@param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsOutputPinValid_Parms
		{
			const UOutputPin* pin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsOutputPinValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsOutputPinValid_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsOutputPinValid_Parms, pin), Z_Construct_UClass_UOutputPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Output Pin" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsOutputPinValid", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsOutputPinValid_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsPulseCounterPinValid_Parms
		{
			const UPulseCounterPin* pin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsPulseCounterPinValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsPulseCounterPinValid_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsPulseCounterPinValid_Parms, pin), Z_Construct_UClass_UPulseCounterPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Pulse Counter Pin" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsPulseCounterPinValid", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsPulseCounterPinValid_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms
		{
			const UHardwareExtensionInterfaceLibrary* library;
			const UDeviceNetwork* network;
			FAdnNode node;
			bool result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_library_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_library;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_library_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_library = { "library", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms, library), Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_library_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_library_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::NewProp_library,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Library" },
		{ "Comment", "/**\n     * Is a node supports the Hardware Extension Interface task or not.\n     * @param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to check the Hardware Extension Interface task support.\n     * @param result Is node supports Hardware Extension Interface task or not.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Is a node supports the Hardware Extension Interface task or not.\n@param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to check the Hardware Extension Interface task support.\n@param result Is node supports Hardware Extension Interface task or not.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsSupported", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsSupported_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventIsTaskFinished_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			bool result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsTaskFinished_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit(void* Obj)
	{
		((HardwareExtensionInterfaceFunctionLibrary_eventIsTaskFinished_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsTaskFinished_Parms), &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventIsTaskFinished_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "Comment", "/**\n     * Check if Hardware Extension Interface task is finished.\n     * @param cotask A pointer to the UHardwareExtensionInterfaceCotask object.\n     * @param result True if task finished, otherwise false.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Check if Hardware Extension Interface task is finished.\n@param cotask A pointer to the UHardwareExtensionInterfaceCotask object.\n@param result True if task finished, otherwise false.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "IsTaskFinished", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventIsTaskFinished_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventRun_Parms
		{
			const UHardwareExtensionInterfaceCotask* cotask;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventRun_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_cotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventRun_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_cotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_cotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "Run", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventRun_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventSetOutputPinState_Parms
		{
			const UOutputPin* pin;
			EPinState state;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventSetOutputPinState_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventSetOutputPinState_Parms, state), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_pin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_pin = { "pin", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventSetOutputPinState_Parms, pin), Z_Construct_UClass_UOutputPin_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_pin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_pin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::NewProp_pin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Output Pin" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "SetOutputPinState", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventSetOutputPinState_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms
		{
			const UHardwareExtensionInterfaceLibrary* library;
			const UDeviceNetwork* network;
			FAdnNode node;
			UHardwareExtensionInterfaceCotask* result;
			EHardwareExtensionInterfaceExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_library_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_library;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms, exception), Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EHardwareExtensionInterfaceExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms, result), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_library_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_library = { "library", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms, library), Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_library_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_library_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::NewProp_library,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "Comment", "/**\n     * Create the Hardware Extension Interface task on the node.\n     * @param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to start the radio metrics task on.\n     * @param result A result pointer to the Hardware Extension Interface cotask object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Create the Hardware Extension Interface task on the node.\n@param library A pointer to the UHardwareExtensionInterfaceLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to start the radio metrics task on.\n@param result A result pointer to the Hardware Extension Interface cotask object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "StartHardwareExtensionInterfaceTask", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventStartHardwareExtensionInterfaceTask_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics
	{
		struct HardwareExtensionInterfaceFunctionLibrary_eventStop_Parms
		{
			UHardwareExtensionInterfaceCotask* cotask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::NewProp_cotask = { "cotask", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HardwareExtensionInterfaceFunctionLibrary_eventStop_Parms, cotask), Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::NewProp_cotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Hardware Extension Interface|Cotask" },
		{ "Comment", "/**\n     * Stop Hardware Extension Interface task. Remember to free the target UHardwareExtensionInterfaceCotask object after calling this method because it will be not useful at all after that moment.\n     * The node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\n     * IMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n     * @param cotask A pointer to the UHardwareExtensionInterfaceCotask object.\n     */" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Stop Hardware Extension Interface task. Remember to free the target UHardwareExtensionInterfaceCotask object after calling this method because it will be not useful at all after that moment.\nThe node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\nIMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n@param cotask A pointer to the UHardwareExtensionInterfaceCotask object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, nullptr, "Stop", nullptr, nullptr, sizeof(HardwareExtensionInterfaceFunctionLibrary_eventStop_Parms), Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_NoRegister()
	{
		return UHardwareExtensionInterfaceFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateAnalogPin, "CreateAnalogPin" }, // 2724662714
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateInputPin, "CreateInputPin" }, // 1483777764
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreateOutputPin, "CreateOutputPin" }, // 3122435951
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_CreatePulseCounterPin, "CreatePulseCounterPin" }, // 138940778
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_FindSupportedNodes, "FindSupportedNodes" }, // 1435091472
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetAnalogPinValue, "GetAnalogPinValue" }, // 2847055831
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetHardwareExtensionInterfaceLibrary, "GetHardwareExtensionInterfaceLibrary" }, // 561458732
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetInputPinState, "GetInputPinState" }, // 897509402
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetOutputPinState, "GetOutputPinState" }, // 1749317996
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_GetPulseCounterPinValue, "GetPulseCounterPinValue" }, // 2143693445
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsAnalogPinValid, "IsAnalogPinValid" }, // 484366822
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsHardwareExtensionInterfaceTaskValid, "IsHardwareExtensionInterfaceTaskValid" }, // 3133597586
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsInputPinValid, "IsInputPinValid" }, // 3833471981
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 3734399726
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsOutputPinValid, "IsOutputPinValid" }, // 3066095817
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsPulseCounterPinValid, "IsPulseCounterPinValid" }, // 1201211640
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsSupported, "IsSupported" }, // 1094123023
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_IsTaskFinished, "IsTaskFinished" }, // 1881506960
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Run, "Run" }, // 3158065738
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_SetOutputPinState, "SetOutputPinState" }, // 3874596618
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_StartHardwareExtensionInterfaceTask, "StartHardwareExtensionInterfaceTask" }, // 2105470081
		{ &Z_Construct_UFunction_UHardwareExtensionInterfaceFunctionLibrary_Stop, "Stop" }, // 1881894302
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Hardware Extension Interface module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceFunctionLibrary.h" },
		{ "ToolTip", "Provides Hardware Extension Interface module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardwareExtensionInterfaceFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::ClassParams = {
		&UHardwareExtensionInterfaceFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHardwareExtensionInterfaceFunctionLibrary, 3296121940);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UHardwareExtensionInterfaceFunctionLibrary>()
	{
		return UHardwareExtensionInterfaceFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHardwareExtensionInterfaceFunctionLibrary(Z_Construct_UClass_UHardwareExtensionInterfaceFunctionLibrary, &UHardwareExtensionInterfaceFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UHardwareExtensionInterfaceFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardwareExtensionInterfaceFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
