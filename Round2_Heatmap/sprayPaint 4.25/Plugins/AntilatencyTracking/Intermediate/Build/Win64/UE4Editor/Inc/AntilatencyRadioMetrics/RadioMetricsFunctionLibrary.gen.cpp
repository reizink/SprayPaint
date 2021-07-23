// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyRadioMetrics/Public/RadioMetricsFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioMetricsFunctionLibrary() {}
// Cross Module References
	ANTILATENCYRADIOMETRICS_API UEnum* Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyRadioMetrics();
	ANTILATENCYRADIOMETRICS_API UClass* Z_Construct_UClass_URadioMetricsFunctionLibrary_NoRegister();
	ANTILATENCYRADIOMETRICS_API UClass* Z_Construct_UClass_URadioMetricsFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister();
	ANTILATENCYRADIOMETRICS_API UClass* Z_Construct_UClass_URadioMetricsLibrary_NoRegister();
	ANTILATENCYRADIOMETRICS_API UScriptStruct* Z_Construct_UScriptStruct_FExtendedMetrics();
	ANTILATENCYRADIOMETRICS_API UClass* Z_Construct_UClass_URadioMetricsCotask_NoRegister();
	ANTILATENCYRADIOMETRICS_API UScriptStruct* Z_Construct_UScriptStruct_FRadioMetrics();
// End Cross Module References
	static UEnum* ERadioMetricsExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, Z_Construct_UPackage__Script_AntilatencyRadioMetrics(), TEXT("ERadioMetricsExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYRADIOMETRICS_API UEnum* StaticEnum<ERadioMetricsExceptionResult>()
	{
		return ERadioMetricsExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERadioMetricsExceptionResult(ERadioMetricsExceptionResult_StaticEnum, TEXT("/Script/AntilatencyRadioMetrics"), TEXT("ERadioMetricsExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult_Hash() { return 1600982822U; }
	UEnum* Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyRadioMetrics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERadioMetricsExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERadioMetricsExceptionResult::Success", (int64)ERadioMetricsExceptionResult::Success },
				{ "ERadioMetricsExceptionResult::Fail", (int64)ERadioMetricsExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "ERadioMetricsExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "ERadioMetricsExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyRadioMetrics,
				nullptr,
				"ERadioMetricsExceptionResult",
				"ERadioMetricsExceptionResult",
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
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execGetExtendedMetrics)
	{
		P_GET_OBJECT(URadioMetricsCotask,Z_Param_radioMetricsCotask);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_targetNode);
		P_GET_STRUCT_REF(FExtendedMetrics,Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::GetExtendedMetrics(Z_Param_radioMetricsCotask,Z_Param_Out_targetNode,Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execGetMetrics)
	{
		P_GET_OBJECT(URadioMetricsCotask,Z_Param_radioMetricsCotask);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_targetNode);
		P_GET_STRUCT_REF(FRadioMetrics,Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::GetMetrics(Z_Param_radioMetricsCotask,Z_Param_Out_targetNode,Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execIsRadioMetricsTaskValid)
	{
		P_GET_OBJECT(URadioMetricsCotask,Z_Param_radioMetricsCotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URadioMetricsFunctionLibrary::IsRadioMetricsTaskValid(Z_Param_radioMetricsCotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execStop)
	{
		P_GET_OBJECT_REF(URadioMetricsCotask,Z_Param_Out_radioMetricsCotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::Stop(Z_Param_Out_radioMetricsCotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execIsTaskFinished)
	{
		P_GET_OBJECT(URadioMetricsCotask,Z_Param_radioMetricsCotask);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::IsTaskFinished(Z_Param_radioMetricsCotask,Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(URadioMetricsLibrary,Z_Param_radioMetricsLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URadioMetricsFunctionLibrary::IsLibraryValid(Z_Param_radioMetricsLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execFindSupportedNodes)
	{
		P_GET_OBJECT(URadioMetricsLibrary,Z_Param_radioMetricsLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_TARRAY_REF(FAdnNode,Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::FindSupportedNodes(Z_Param_radioMetricsLibrary,Z_Param_network,Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execIsSupported)
	{
		P_GET_OBJECT(URadioMetricsLibrary,Z_Param_radioMetricsLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::IsSupported(Z_Param_radioMetricsLibrary,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execStartRadioMetricsTask)
	{
		P_GET_OBJECT(URadioMetricsLibrary,Z_Param_radioMetricsLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_OBJECT_REF(URadioMetricsCotask,Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::StartRadioMetricsTask(Z_Param_radioMetricsLibrary,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioMetricsFunctionLibrary::execGetRadioMetricsLibrary)
	{
		P_GET_OBJECT_REF(URadioMetricsLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(ERadioMetricsExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		URadioMetricsFunctionLibrary::GetRadioMetricsLibrary(Z_Param_Out_result,(ERadioMetricsExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void URadioMetricsFunctionLibrary::StaticRegisterNativesURadioMetricsFunctionLibrary()
	{
		UClass* Class = URadioMetricsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSupportedNodes", &URadioMetricsFunctionLibrary::execFindSupportedNodes },
			{ "GetExtendedMetrics", &URadioMetricsFunctionLibrary::execGetExtendedMetrics },
			{ "GetMetrics", &URadioMetricsFunctionLibrary::execGetMetrics },
			{ "GetRadioMetricsLibrary", &URadioMetricsFunctionLibrary::execGetRadioMetricsLibrary },
			{ "IsLibraryValid", &URadioMetricsFunctionLibrary::execIsLibraryValid },
			{ "IsRadioMetricsTaskValid", &URadioMetricsFunctionLibrary::execIsRadioMetricsTaskValid },
			{ "IsSupported", &URadioMetricsFunctionLibrary::execIsSupported },
			{ "IsTaskFinished", &URadioMetricsFunctionLibrary::execIsTaskFinished },
			{ "StartRadioMetricsTask", &URadioMetricsFunctionLibrary::execStartRadioMetricsTask },
			{ "Stop", &URadioMetricsFunctionLibrary::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics
	{
		struct RadioMetricsFunctionLibrary_eventFindSupportedNodes_Parms
		{
			const URadioMetricsLibrary* radioMetricsLibrary;
			const UDeviceNetwork* network;
			TArray<FAdnNode> result;
			ERadioMetricsExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventFindSupportedNodes_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventFindSupportedNodes_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventFindSupportedNodes_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_radioMetricsLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_radioMetricsLibrary = { "radioMetricsLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventFindSupportedNodes_Parms, radioMetricsLibrary), Z_Construct_UClass_URadioMetricsLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_radioMetricsLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_radioMetricsLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::NewProp_radioMetricsLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Library" },
		{ "Comment", "/**\n     * Get all currently connected nodes that supports radio metrics task.\n     * @param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param result An result array of nodes that support the radio metrics task.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Get all currently connected nodes that supports radio metrics task.\n@param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param result An result array of nodes that support the radio metrics task.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "FindSupportedNodes", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventFindSupportedNodes_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics
	{
		struct RadioMetricsFunctionLibrary_eventGetExtendedMetrics_Parms
		{
			const URadioMetricsCotask* radioMetricsCotask;
			FAdnNode targetNode;
			FExtendedMetrics result;
			ERadioMetricsExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetExtendedMetrics_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetExtendedMetrics_Parms, result), Z_Construct_UScriptStruct_FExtendedMetrics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_targetNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_targetNode = { "targetNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetExtendedMetrics_Parms, targetNode), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_targetNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_targetNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_radioMetricsCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_radioMetricsCotask = { "radioMetricsCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetExtendedMetrics_Parms, radioMetricsCotask), Z_Construct_UClass_URadioMetricsCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_radioMetricsCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_radioMetricsCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_targetNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::NewProp_radioMetricsCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Cotask" },
		{ "Comment", "/**\n\x09 * Get extended metrics.\n\x09 * @param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n\x09 * @param targetNode A slave radio node to get metrics.\n\x09 * @param result Resulting simplified metrics.\n\x09 * @param exception Method execution result.\n\x09 */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Get extended metrics.\n@param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n@param targetNode A slave radio node to get metrics.\n@param result Resulting simplified metrics.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "GetExtendedMetrics", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventGetExtendedMetrics_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics
	{
		struct RadioMetricsFunctionLibrary_eventGetMetrics_Parms
		{
			const URadioMetricsCotask* radioMetricsCotask;
			FAdnNode targetNode;
			FRadioMetrics result;
			ERadioMetricsExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetMetrics_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetMetrics_Parms, result), Z_Construct_UScriptStruct_FRadioMetrics, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_targetNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_targetNode = { "targetNode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetMetrics_Parms, targetNode), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_targetNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_targetNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_radioMetricsCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_radioMetricsCotask = { "radioMetricsCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetMetrics_Parms, radioMetricsCotask), Z_Construct_UClass_URadioMetricsCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_radioMetricsCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_radioMetricsCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_targetNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::NewProp_radioMetricsCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Cotask" },
		{ "Comment", "/**\n\x09 * Get simplified metrics.\n\x09 * @param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n\x09 * @param targetNode A slave radio node to get metrics.\n\x09 * @param result Resulting simplified metrics.\n\x09 * @param exception Method execution result.\n\x09 */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Get simplified metrics.\n@param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n@param targetNode A slave radio node to get metrics.\n@param result Resulting simplified metrics.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "GetMetrics", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventGetMetrics_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics
	{
		struct RadioMetricsFunctionLibrary_eventGetRadioMetricsLibrary_Parms
		{
			URadioMetricsLibrary* result;
			ERadioMetricsExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetRadioMetricsLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventGetRadioMetricsLibrary_Parms, result), Z_Construct_UClass_URadioMetricsLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Library" },
		{ "Comment", "/**\n     * Get the native radio metrics library object.\n     * @param result The native radio metrics library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Get the native radio metrics library object.\n@param result The native radio metrics library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "GetRadioMetricsLibrary", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventGetRadioMetricsLibrary_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics
	{
		struct RadioMetricsFunctionLibrary_eventIsLibraryValid_Parms
		{
			const URadioMetricsLibrary* radioMetricsLibrary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RadioMetricsFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioMetricsFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_radioMetricsLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_radioMetricsLibrary = { "radioMetricsLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsLibraryValid_Parms, radioMetricsLibrary), Z_Construct_UClass_URadioMetricsLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_radioMetricsLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_radioMetricsLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::NewProp_radioMetricsLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Library" },
		{ "Comment", "/**\n     * Check if URadioMetricsLibrary has been initialized properly (the URadioMetricsLibrary is not nullptr and the native Antilatency::RadioMetrics::ILibrary is not nullptr).\n     * @param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Check if URadioMetricsLibrary has been initialized properly (the URadioMetricsLibrary is not nullptr and the native Antilatency::RadioMetrics::ILibrary is not nullptr).\n@param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics
	{
		struct RadioMetricsFunctionLibrary_eventIsRadioMetricsTaskValid_Parms
		{
			const URadioMetricsCotask* radioMetricsCotask;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RadioMetricsFunctionLibrary_eventIsRadioMetricsTaskValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioMetricsFunctionLibrary_eventIsRadioMetricsTaskValid_Parms), &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_radioMetricsCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_radioMetricsCotask = { "radioMetricsCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsRadioMetricsTaskValid_Parms, radioMetricsCotask), Z_Construct_UClass_URadioMetricsCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_radioMetricsCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_radioMetricsCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::NewProp_radioMetricsCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Cotask" },
		{ "Comment", "/**\n     * Check if the cotask wrapper initialized properly.\n     * @param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n     * @return True if the cotask wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Check if the cotask wrapper initialized properly.\n@param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n@return True if the cotask wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "IsRadioMetricsTaskValid", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventIsRadioMetricsTaskValid_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics
	{
		struct RadioMetricsFunctionLibrary_eventIsSupported_Parms
		{
			const URadioMetricsLibrary* radioMetricsLibrary;
			const UDeviceNetwork* network;
			FAdnNode node;
			bool result;
			ERadioMetricsExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsSupported_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit(void* Obj)
	{
		((RadioMetricsFunctionLibrary_eventIsSupported_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioMetricsFunctionLibrary_eventIsSupported_Parms), &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsSupported_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsSupported_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_radioMetricsLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_radioMetricsLibrary = { "radioMetricsLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsSupported_Parms, radioMetricsLibrary), Z_Construct_UClass_URadioMetricsLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_radioMetricsLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_radioMetricsLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::NewProp_radioMetricsLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Library" },
		{ "Comment", "/**\n     * Is a node supports the radio metrics task or not.\n     * @param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to check the radio metrics task support.\n     * @param result Is node supports radio metrics task or not.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Is a node supports the radio metrics task or not.\n@param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to check the radio metrics task support.\n@param result Is node supports radio metrics task or not.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "IsSupported", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventIsSupported_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics
	{
		struct RadioMetricsFunctionLibrary_eventIsTaskFinished_Parms
		{
			const URadioMetricsCotask* radioMetricsCotask;
			bool result;
			ERadioMetricsExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsTaskFinished_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit(void* Obj)
	{
		((RadioMetricsFunctionLibrary_eventIsTaskFinished_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioMetricsFunctionLibrary_eventIsTaskFinished_Parms), &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_radioMetricsCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_radioMetricsCotask = { "radioMetricsCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventIsTaskFinished_Parms, radioMetricsCotask), Z_Construct_UClass_URadioMetricsCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_radioMetricsCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_radioMetricsCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::NewProp_radioMetricsCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Cotask" },
		{ "Comment", "/**\n     * Check if radio metrics task is finished.\n     * @param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n     * @param result True if task finished, otherwise false.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Check if radio metrics task is finished.\n@param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n@param result True if task finished, otherwise false.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "IsTaskFinished", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventIsTaskFinished_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics
	{
		struct RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms
		{
			const URadioMetricsLibrary* radioMetricsLibrary;
			const UDeviceNetwork* network;
			FAdnNode node;
			URadioMetricsCotask* result;
			ERadioMetricsExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radioMetricsLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms, exception), Z_Construct_UEnum_AntilatencyRadioMetrics_ERadioMetricsExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms, result), Z_Construct_UClass_URadioMetricsCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_radioMetricsLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_radioMetricsLibrary = { "radioMetricsLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms, radioMetricsLibrary), Z_Construct_UClass_URadioMetricsLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_radioMetricsLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_radioMetricsLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::NewProp_radioMetricsLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Cotask" },
		{ "Comment", "/**\n     * Create the radio metrics task on the node.\n     * @param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to start the radio metrics task on.\n     * @param result A result pointer to the radio metrics cotask.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Create the radio metrics task on the node.\n@param radioMetricsLibrary A pointer to the URadioMetricsLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to start the radio metrics task on.\n@param result A result pointer to the radio metrics cotask.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "StartRadioMetricsTask", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventStartRadioMetricsTask_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics
	{
		struct RadioMetricsFunctionLibrary_eventStop_Parms
		{
			URadioMetricsCotask* radioMetricsCotask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_radioMetricsCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::NewProp_radioMetricsCotask = { "radioMetricsCotask", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioMetricsFunctionLibrary_eventStop_Parms, radioMetricsCotask), Z_Construct_UClass_URadioMetricsCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::NewProp_radioMetricsCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Radio Metrics|Cotask" },
		{ "Comment", "/**\n     * Stop radio metrics task. Remember to free the target URadioMetricsCotask object after calling this method because it will be not useful at all after that moment.\n     * The node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\n     * IMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n     * @param radioMetricsCotask A pointer to the URadioMetricsCotask object.\n     */" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Stop radio metrics task. Remember to free the target URadioMetricsCotask object after calling this method because it will be not useful at all after that moment.\nThe node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\nIMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n@param radioMetricsCotask A pointer to the URadioMetricsCotask object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioMetricsFunctionLibrary, nullptr, "Stop", nullptr, nullptr, sizeof(RadioMetricsFunctionLibrary_eventStop_Parms), Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URadioMetricsFunctionLibrary_NoRegister()
	{
		return URadioMetricsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyRadioMetrics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_FindSupportedNodes, "FindSupportedNodes" }, // 3343382197
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetExtendedMetrics, "GetExtendedMetrics" }, // 3183629751
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetMetrics, "GetMetrics" }, // 3615224950
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_GetRadioMetricsLibrary, "GetRadioMetricsLibrary" }, // 940641600
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 3415357158
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsRadioMetricsTaskValid, "IsRadioMetricsTaskValid" }, // 258374054
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsSupported, "IsSupported" }, // 1355425941
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_IsTaskFinished, "IsTaskFinished" }, // 4105261915
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_StartRadioMetricsTask, "StartRadioMetricsTask" }, // 2446427190
		{ &Z_Construct_UFunction_URadioMetricsFunctionLibrary_Stop, "Stop" }, // 684079584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Radio Metrics module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "RadioMetricsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RadioMetricsFunctionLibrary.h" },
		{ "ToolTip", "Provides Radio Metrics module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioMetricsFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::ClassParams = {
		&URadioMetricsFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadioMetricsFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URadioMetricsFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URadioMetricsFunctionLibrary, 877147454);
	template<> ANTILATENCYRADIOMETRICS_API UClass* StaticClass<URadioMetricsFunctionLibrary>()
	{
		return URadioMetricsFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadioMetricsFunctionLibrary(Z_Construct_UClass_URadioMetricsFunctionLibrary, &URadioMetricsFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyRadioMetrics"), TEXT("URadioMetricsFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadioMetricsFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
