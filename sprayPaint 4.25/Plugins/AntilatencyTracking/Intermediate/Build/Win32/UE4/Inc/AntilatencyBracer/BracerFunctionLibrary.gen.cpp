// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyBracer/Public/BracerFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBracerFunctionLibrary() {}
// Cross Module References
	ANTILATENCYBRACER_API UEnum* Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyBracer();
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerFunctionLibrary_NoRegister();
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYBRACER_API UScriptStruct* Z_Construct_UScriptStruct_FVibration();
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerCotask_NoRegister();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister();
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerLibrary_NoRegister();
// End Cross Module References
	static UEnum* EBracerExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, Z_Construct_UPackage__Script_AntilatencyBracer(), TEXT("EBracerExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYBRACER_API UEnum* StaticEnum<EBracerExceptionResult>()
	{
		return EBracerExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBracerExceptionResult(EBracerExceptionResult_StaticEnum, TEXT("/Script/AntilatencyBracer"), TEXT("EBracerExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult_Hash() { return 2445277657U; }
	UEnum* Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyBracer();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBracerExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBracerExceptionResult::Success", (int64)EBracerExceptionResult::Success },
				{ "EBracerExceptionResult::Fail", (int64)EBracerExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "EBracerExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EBracerExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyBracer,
				nullptr,
				"EBracerExceptionResult",
				"EBracerExceptionResult",
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
	DEFINE_FUNCTION(UBracerFunctionLibrary::execIsBracerTaskValid)
	{
		P_GET_OBJECT(UBracerCotask,Z_Param_bracerCotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBracerFunctionLibrary::IsBracerTaskValid(Z_Param_bracerCotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execStop)
	{
		P_GET_OBJECT_REF(UBracerCotask,Z_Param_Out_bracerCotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::Stop(Z_Param_Out_bracerCotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execIsTaskFinished)
	{
		P_GET_OBJECT(UBracerCotask,Z_Param_bracerCotask);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::IsTaskFinished(Z_Param_bracerCotask,Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execExecuteVibrationSequence)
	{
		P_GET_OBJECT(UBracerCotask,Z_Param_bracerCotask);
		P_GET_TARRAY_REF(FVibration,Z_Param_Out_vibrationSequence);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::ExecuteVibrationSequence(Z_Param_bracerCotask,Z_Param_Out_vibrationSequence,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execGetTouch)
	{
		P_GET_OBJECT(UBracerCotask,Z_Param_bracerCotask);
		P_GET_PROPERTY(FIntProperty,Z_Param_channel);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::GetTouch(Z_Param_bracerCotask,Z_Param_channel,Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execGetTouchNativeValue)
	{
		P_GET_OBJECT(UBracerCotask,Z_Param_bracerCotask);
		P_GET_PROPERTY(FIntProperty,Z_Param_channel);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::GetTouchNativeValue(Z_Param_bracerCotask,Z_Param_channel,Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(UBracerLibrary,Z_Param_bracerLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBracerFunctionLibrary::IsLibraryValid(Z_Param_bracerLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execFindSupportedNodes)
	{
		P_GET_OBJECT(UBracerLibrary,Z_Param_bracerLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_TARRAY_REF(FAdnNode,Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::FindSupportedNodes(Z_Param_bracerLibrary,Z_Param_network,Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execIsSupported)
	{
		P_GET_OBJECT(UBracerLibrary,Z_Param_bracerLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::IsSupported(Z_Param_bracerLibrary,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execStartBracerTask)
	{
		P_GET_OBJECT(UBracerLibrary,Z_Param_bracerLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_OBJECT_REF(UBracerCotask,Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::StartBracerTask(Z_Param_bracerLibrary,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBracerFunctionLibrary::execGetBracerLibrary)
	{
		P_GET_OBJECT_REF(UBracerLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(EBracerExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBracerFunctionLibrary::GetBracerLibrary(Z_Param_Out_result,(EBracerExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void UBracerFunctionLibrary::StaticRegisterNativesUBracerFunctionLibrary()
	{
		UClass* Class = UBracerFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteVibrationSequence", &UBracerFunctionLibrary::execExecuteVibrationSequence },
			{ "FindSupportedNodes", &UBracerFunctionLibrary::execFindSupportedNodes },
			{ "GetBracerLibrary", &UBracerFunctionLibrary::execGetBracerLibrary },
			{ "GetTouch", &UBracerFunctionLibrary::execGetTouch },
			{ "GetTouchNativeValue", &UBracerFunctionLibrary::execGetTouchNativeValue },
			{ "IsBracerTaskValid", &UBracerFunctionLibrary::execIsBracerTaskValid },
			{ "IsLibraryValid", &UBracerFunctionLibrary::execIsLibraryValid },
			{ "IsSupported", &UBracerFunctionLibrary::execIsSupported },
			{ "IsTaskFinished", &UBracerFunctionLibrary::execIsTaskFinished },
			{ "StartBracerTask", &UBracerFunctionLibrary::execStartBracerTask },
			{ "Stop", &UBracerFunctionLibrary::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics
	{
		struct BracerFunctionLibrary_eventExecuteVibrationSequence_Parms
		{
			const UBracerCotask* bracerCotask;
			TArray<FVibration> vibrationSequence;
			EBracerExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vibrationSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vibrationSequence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vibrationSequence_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventExecuteVibrationSequence_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence = { "vibrationSequence", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventExecuteVibrationSequence_Parms, vibrationSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence_Inner = { "vibrationSequence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVibration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_bracerCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_bracerCotask = { "bracerCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventExecuteVibrationSequence_Parms, bracerCotask), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_bracerCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_bracerCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_vibrationSequence_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::NewProp_bracerCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n     * Execute vibration on the device.\n     * @param bracerCotask A pointer to the UBracerCotask object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Execute vibration on the device.\n@param bracerCotask A pointer to the UBracerCotask object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "ExecuteVibrationSequence", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventExecuteVibrationSequence_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics
	{
		struct BracerFunctionLibrary_eventFindSupportedNodes_Parms
		{
			const UBracerLibrary* bracerLibrary;
			const UDeviceNetwork* network;
			TArray<FAdnNode> result;
			EBracerExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventFindSupportedNodes_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventFindSupportedNodes_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventFindSupportedNodes_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_bracerLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_bracerLibrary = { "bracerLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventFindSupportedNodes_Parms, bracerLibrary), Z_Construct_UClass_UBracerLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_bracerLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_bracerLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::NewProp_bracerLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Library" },
		{ "Comment", "/**\n     * Get all currently connected nodes that supports bracer task.\n     * @param bracerLibrary A pointer to the UBracerLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param result An result array of nodes that support the bracer task.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Get all currently connected nodes that supports bracer task.\n@param bracerLibrary A pointer to the UBracerLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param result An result array of nodes that support the bracer task.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "FindSupportedNodes", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventFindSupportedNodes_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics
	{
		struct BracerFunctionLibrary_eventGetBracerLibrary_Parms
		{
			UBracerLibrary* result;
			EBracerExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetBracerLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetBracerLibrary_Parms, result), Z_Construct_UClass_UBracerLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Library" },
		{ "Comment", "/**\n     * Get the native bracer library object.\n     * @param result The native bracer library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Get the native bracer library object.\n@param result The native bracer library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "GetBracerLibrary", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventGetBracerLibrary_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics
	{
		struct BracerFunctionLibrary_eventGetTouch_Parms
		{
			const UBracerCotask* bracerCotask;
			int32 channel;
			float result;
			EBracerExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouch_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouch_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouch_Parms, channel), METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_bracerCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_bracerCotask = { "bracerCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouch_Parms, bracerCotask), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_bracerCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_bracerCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::NewProp_bracerCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n     * Get the current touchpad value.\n     * @param bracerCotask A pointer to the UBracerCotask object.\n\x09 * @param channel Bracer channel.\n     * @param result The current touchpad value.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Get the current touchpad value.\n@param bracerCotask A pointer to the UBracerCotask object.\n@param channel Bracer channel.\n@param result The current touchpad value.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "GetTouch", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventGetTouch_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics
	{
		struct BracerFunctionLibrary_eventGetTouchNativeValue_Parms
		{
			const UBracerCotask* bracerCotask;
			int32 channel;
			int32 result;
			EBracerExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouchNativeValue_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouchNativeValue_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_channel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouchNativeValue_Parms, channel), METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_bracerCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_bracerCotask = { "bracerCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventGetTouchNativeValue_Parms, bracerCotask), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_bracerCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_bracerCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::NewProp_bracerCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n\x09 * Get the raw touchpad trigger value.\n\x09 * @param bracerCotask A pointer to the UBracerCotask object.\n\x09 * @param channel Bracer channel.\n\x09 * @param result The current touchpad value.\n\x09 * @param exception Method execution result.\n\x09 */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Get the raw touchpad trigger value.\n@param bracerCotask A pointer to the UBracerCotask object.\n@param channel Bracer channel.\n@param result The current touchpad value.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "GetTouchNativeValue", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventGetTouchNativeValue_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics
	{
		struct BracerFunctionLibrary_eventIsBracerTaskValid_Parms
		{
			const UBracerCotask* bracerCotask;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BracerFunctionLibrary_eventIsBracerTaskValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BracerFunctionLibrary_eventIsBracerTaskValid_Parms), &Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_bracerCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_bracerCotask = { "bracerCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsBracerTaskValid_Parms, bracerCotask), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_bracerCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_bracerCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::NewProp_bracerCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n     * Check if the cotask wrapper initialized properly.\n     * @param bracerCotask A pointer to the UBracerCotask object.\n     * @return True if the cotask wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Check if the cotask wrapper initialized properly.\n@param bracerCotask A pointer to the UBracerCotask object.\n@return True if the cotask wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "IsBracerTaskValid", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventIsBracerTaskValid_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics
	{
		struct BracerFunctionLibrary_eventIsLibraryValid_Parms
		{
			const UBracerLibrary* bracerLibrary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BracerFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BracerFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_bracerLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_bracerLibrary = { "bracerLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsLibraryValid_Parms, bracerLibrary), Z_Construct_UClass_UBracerLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_bracerLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_bracerLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::NewProp_bracerLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Library" },
		{ "Comment", "/**\n     * Check if UBracerLibrary has been initialized properly (the UBracerLibrary is not nullptr and the native Antilatency::Bracer::ILibrary is not nullptr).\n     * @param bracerLibrary A pointer to the UBracerLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Check if UBracerLibrary has been initialized properly (the UBracerLibrary is not nullptr and the native Antilatency::Bracer::ILibrary is not nullptr).\n@param bracerLibrary A pointer to the UBracerLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics
	{
		struct BracerFunctionLibrary_eventIsSupported_Parms
		{
			const UBracerLibrary* bracerLibrary;
			const UDeviceNetwork* network;
			FAdnNode node;
			bool result;
			EBracerExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsSupported_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit(void* Obj)
	{
		((BracerFunctionLibrary_eventIsSupported_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BracerFunctionLibrary_eventIsSupported_Parms), &Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsSupported_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsSupported_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_bracerLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_bracerLibrary = { "bracerLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsSupported_Parms, bracerLibrary), Z_Construct_UClass_UBracerLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_bracerLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_bracerLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::NewProp_bracerLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Library" },
		{ "Comment", "/**\n     * Is a node supports the bracer task or not.\n     * @param bracerLibrary A pointer to the UBracerLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to check the bracer task support.\n     * @param result Is node supports bracer task or not.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Is a node supports the bracer task or not.\n@param bracerLibrary A pointer to the UBracerLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to check the bracer task support.\n@param result Is node supports bracer task or not.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "IsSupported", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventIsSupported_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics
	{
		struct BracerFunctionLibrary_eventIsTaskFinished_Parms
		{
			const UBracerCotask* bracerCotask;
			bool result;
			EBracerExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsTaskFinished_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit(void* Obj)
	{
		((BracerFunctionLibrary_eventIsTaskFinished_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BracerFunctionLibrary_eventIsTaskFinished_Parms), &Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_bracerCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_bracerCotask = { "bracerCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventIsTaskFinished_Parms, bracerCotask), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_bracerCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_bracerCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::NewProp_bracerCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n     * Check if bracer task is finished.\n     * @param bracerCotask A pointer to the UBracerCotask object.\n     * @param result True if task finished, otherwise false.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Check if bracer task is finished.\n@param bracerCotask A pointer to the UBracerCotask object.\n@param result True if task finished, otherwise false.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "IsTaskFinished", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventIsTaskFinished_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics
	{
		struct BracerFunctionLibrary_eventStartBracerTask_Parms
		{
			const UBracerLibrary* bracerLibrary;
			const UDeviceNetwork* network;
			FAdnNode node;
			UBracerCotask* result;
			EBracerExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bracerLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventStartBracerTask_Parms, exception), Z_Construct_UEnum_AntilatencyBracer_EBracerExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventStartBracerTask_Parms, result), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventStartBracerTask_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventStartBracerTask_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_bracerLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_bracerLibrary = { "bracerLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventStartBracerTask_Parms, bracerLibrary), Z_Construct_UClass_UBracerLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_bracerLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_bracerLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::NewProp_bracerLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n     * Create the bracer task on the node.\n     * @param bracerLibrary A pointer to the UBracerLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to start the bracer task on.\n     * @param result A result pointer to the bracer cotask.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Create the bracer task on the node.\n@param bracerLibrary A pointer to the UBracerLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to start the bracer task on.\n@param result A result pointer to the bracer cotask.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "StartBracerTask", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventStartBracerTask_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics
	{
		struct BracerFunctionLibrary_eventStop_Parms
		{
			UBracerCotask* bracerCotask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bracerCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::NewProp_bracerCotask = { "bracerCotask", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BracerFunctionLibrary_eventStop_Parms, bracerCotask), Z_Construct_UClass_UBracerCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::NewProp_bracerCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Bracer|Cotask" },
		{ "Comment", "/**\n     * Stop bracer task. Remember to free the target UBracerCotask object after calling this method because it will be not useful at all after that moment.\n     * The node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\n     * IMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n     * @param bracerCotask A pointer to the bracer cotask object.\n     */" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Stop bracer task. Remember to free the target UBracerCotask object after calling this method because it will be not useful at all after that moment.\nThe node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\nIMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n@param bracerCotask A pointer to the bracer cotask object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBracerFunctionLibrary, nullptr, "Stop", nullptr, nullptr, sizeof(BracerFunctionLibrary_eventStop_Parms), Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBracerFunctionLibrary_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBracerFunctionLibrary_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBracerFunctionLibrary_NoRegister()
	{
		return UBracerFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBracerFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBracerFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyBracer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBracerFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_ExecuteVibrationSequence, "ExecuteVibrationSequence" }, // 1859192339
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_FindSupportedNodes, "FindSupportedNodes" }, // 1205942492
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_GetBracerLibrary, "GetBracerLibrary" }, // 3313087970
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_GetTouch, "GetTouch" }, // 1465180387
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_GetTouchNativeValue, "GetTouchNativeValue" }, // 859339557
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_IsBracerTaskValid, "IsBracerTaskValid" }, // 706851907
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 3455552343
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_IsSupported, "IsSupported" }, // 2339077230
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_IsTaskFinished, "IsTaskFinished" }, // 2314634390
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_StartBracerTask, "StartBracerTask" }, // 3082297376
		{ &Z_Construct_UFunction_UBracerFunctionLibrary_Stop, "Stop" }, // 2592927692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBracerFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Bracer module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "BracerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BracerFunctionLibrary.h" },
		{ "ToolTip", "Provides Bracer module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBracerFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBracerFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBracerFunctionLibrary_Statics::ClassParams = {
		&UBracerFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBracerFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBracerFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBracerFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBracerFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBracerFunctionLibrary, 754523303);
	template<> ANTILATENCYBRACER_API UClass* StaticClass<UBracerFunctionLibrary>()
	{
		return UBracerFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBracerFunctionLibrary(Z_Construct_UClass_UBracerFunctionLibrary, &UBracerFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyBracer"), TEXT("UBracerFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBracerFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
