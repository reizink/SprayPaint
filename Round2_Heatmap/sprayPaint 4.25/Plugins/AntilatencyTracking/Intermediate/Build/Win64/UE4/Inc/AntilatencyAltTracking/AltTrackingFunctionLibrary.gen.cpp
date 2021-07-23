// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTracking/Public/AltTrackingFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAltTrackingFunctionLibrary() {}
// Cross Module References
	ANTILATENCYALTTRACKING_API UEnum* Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyAltTracking();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingFunctionLibrary_NoRegister();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltEnvironment_NoRegister();
	ANTILATENCYALTTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FAltPose();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingLibrary_NoRegister();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingCotask_NoRegister();
	ANTILATENCYDEVICENETWORK_API UScriptStruct* Z_Construct_UScriptStruct_FAdnNode();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister();
	ANTILATENCYALTTRACKING_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EAltTrackingExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, Z_Construct_UPackage__Script_AntilatencyAltTracking(), TEXT("EAltTrackingExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYALTTRACKING_API UEnum* StaticEnum<EAltTrackingExceptionResult>()
	{
		return EAltTrackingExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAltTrackingExceptionResult(EAltTrackingExceptionResult_StaticEnum, TEXT("/Script/AntilatencyAltTracking"), TEXT("EAltTrackingExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult_Hash() { return 1636685625U; }
	UEnum* Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyAltTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAltTrackingExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAltTrackingExceptionResult::Success", (int64)EAltTrackingExceptionResult::Success },
				{ "EAltTrackingExceptionResult::Fail", (int64)EAltTrackingExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "EAltTrackingExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EAltTrackingExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
				nullptr,
				"EAltTrackingExceptionResult",
				"EAltTrackingExceptionResult",
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
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execIsEnvironmentValid)
	{
		P_GET_OBJECT(UAltEnvironment,Z_Param_environment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAltTrackingFunctionLibrary::IsEnvironmentValid(Z_Param_environment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execGetUpdateId)
	{
		P_GET_OBJECT(UAltEnvironment,Z_Param_environment);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::GetUpdateId(Z_Param_environment,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execIsMutable)
	{
		P_GET_OBJECT(UAltEnvironment,Z_Param_environment);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::IsMutable(Z_Param_environment,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execGetMarkers)
	{
		P_GET_OBJECT(UAltEnvironment,Z_Param_environment);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::GetMarkers(Z_Param_environment,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execCreateEnvironmentUsingName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_OBJECT_REF(UAltEnvironment,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::CreateEnvironmentUsingName(Z_Param_name,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execCreateEnvironmentUsingCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_OBJECT_REF(UAltEnvironment,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::CreateEnvironmentUsingCode(Z_Param_code,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execCreateEnvironment)
	{
		P_GET_OBJECT_REF(UAltEnvironment,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::CreateEnvironment(Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execIsTrackingTaskValid)
	{
		P_GET_OBJECT(UAltTrackingCotask,Z_Param_trackingCotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAltTrackingFunctionLibrary::IsTrackingTaskValid(Z_Param_trackingCotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execStop)
	{
		P_GET_OBJECT_REF(UAltTrackingCotask,Z_Param_Out_trackingCotask);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::Stop(Z_Param_Out_trackingCotask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execIsTaskFinished)
	{
		P_GET_OBJECT(UAltTrackingCotask,Z_Param_trackingCotask);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::IsTaskFinished(Z_Param_trackingCotask,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execGetExtrapolatedState)
	{
		P_GET_OBJECT(UAltTrackingCotask,Z_Param_trackingCotask);
		P_GET_STRUCT_REF(FAltPose,Z_Param_Out_placement);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_GET_STRUCT_REF(FTrackingState,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::GetExtrapolatedState(Z_Param_trackingCotask,Z_Param_Out_placement,Z_Param_deltaTime,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execGetState)
	{
		P_GET_OBJECT(UAltTrackingCotask,Z_Param_trackingCotask);
		P_GET_STRUCT_REF(FTrackingState,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::GetState(Z_Param_trackingCotask,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(UAltTrackingLibrary,Z_Param_altTrackingLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAltTrackingFunctionLibrary::IsLibraryValid(Z_Param_altTrackingLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execFindSupportedNodes)
	{
		P_GET_OBJECT(UAltTrackingLibrary,Z_Param_altTrackingLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_TARRAY_REF(FAdnNode,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::FindSupportedNodes(Z_Param_altTrackingLibrary,Z_Param_network,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execIsSupported)
	{
		P_GET_OBJECT(UAltTrackingLibrary,Z_Param_altTrackingLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::IsSupported(Z_Param_altTrackingLibrary,Z_Param_network,Z_Param_Out_node,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execEncodePlacement)
	{
		P_GET_OBJECT(UAltTrackingLibrary,Z_Param_altTrackingLibrary);
		P_GET_STRUCT_REF(FAltPose,Z_Param_Out_placement);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::EncodePlacement(Z_Param_altTrackingLibrary,Z_Param_Out_placement,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execCreateTracking)
	{
		P_GET_OBJECT(UAltTrackingLibrary,Z_Param_altTrackingLibrary);
		P_GET_OBJECT(UDeviceNetwork,Z_Param_network);
		P_GET_STRUCT_REF(FAdnNode,Z_Param_Out_node);
		P_GET_OBJECT(UAltEnvironment,Z_Param_environment);
		P_GET_OBJECT_REF(UAltTrackingCotask,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::CreateTracking(Z_Param_altTrackingLibrary,Z_Param_network,Z_Param_Out_node,Z_Param_environment,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execCreatePlacement)
	{
		P_GET_OBJECT(UAltTrackingLibrary,Z_Param_altTrackingLibrary);
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_STRUCT_REF(FAltPose,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::CreatePlacement(Z_Param_altTrackingLibrary,Z_Param_code,Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAltTrackingFunctionLibrary::execGetTrackingLibrary)
	{
		P_GET_OBJECT_REF(UAltTrackingLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(EAltTrackingExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAltTrackingFunctionLibrary::GetTrackingLibrary(Z_Param_Out_result,(EAltTrackingExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void UAltTrackingFunctionLibrary::StaticRegisterNativesUAltTrackingFunctionLibrary()
	{
		UClass* Class = UAltTrackingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEnvironment", &UAltTrackingFunctionLibrary::execCreateEnvironment },
			{ "CreateEnvironmentUsingCode", &UAltTrackingFunctionLibrary::execCreateEnvironmentUsingCode },
			{ "CreateEnvironmentUsingName", &UAltTrackingFunctionLibrary::execCreateEnvironmentUsingName },
			{ "CreatePlacement", &UAltTrackingFunctionLibrary::execCreatePlacement },
			{ "CreateTracking", &UAltTrackingFunctionLibrary::execCreateTracking },
			{ "EncodePlacement", &UAltTrackingFunctionLibrary::execEncodePlacement },
			{ "FindSupportedNodes", &UAltTrackingFunctionLibrary::execFindSupportedNodes },
			{ "GetExtrapolatedState", &UAltTrackingFunctionLibrary::execGetExtrapolatedState },
			{ "GetMarkers", &UAltTrackingFunctionLibrary::execGetMarkers },
			{ "GetState", &UAltTrackingFunctionLibrary::execGetState },
			{ "GetTrackingLibrary", &UAltTrackingFunctionLibrary::execGetTrackingLibrary },
			{ "GetUpdateId", &UAltTrackingFunctionLibrary::execGetUpdateId },
			{ "IsEnvironmentValid", &UAltTrackingFunctionLibrary::execIsEnvironmentValid },
			{ "IsLibraryValid", &UAltTrackingFunctionLibrary::execIsLibraryValid },
			{ "IsMutable", &UAltTrackingFunctionLibrary::execIsMutable },
			{ "IsSupported", &UAltTrackingFunctionLibrary::execIsSupported },
			{ "IsTaskFinished", &UAltTrackingFunctionLibrary::execIsTaskFinished },
			{ "IsTrackingTaskValid", &UAltTrackingFunctionLibrary::execIsTrackingTaskValid },
			{ "Stop", &UAltTrackingFunctionLibrary::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics
	{
		struct AltTrackingFunctionLibrary_eventCreateEnvironment_Parms
		{
			UAltEnvironment* result;
			EAltTrackingExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironment_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironment_Parms, result), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/**\n     * Initialize the native Antilatency::Alt::Tracking::IEnvironment object using a environment from the Antilatency Service that is marked as default.\n     * @param result A pointer to the created UAltEnvironment instance.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Initialize the native Antilatency::Alt::Tracking::IEnvironment object using a environment from the Antilatency Service that is marked as default.\n@param result A pointer to the created UAltEnvironment instance.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "CreateEnvironment", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventCreateEnvironment_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics
	{
		struct AltTrackingFunctionLibrary_eventCreateEnvironmentUsingCode_Parms
		{
			FString code;
			UAltEnvironment* result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingCode_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingCode_Parms, result), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingCode_Parms, code), METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_code_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::NewProp_code,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/**\n     * Initialize the native Antilatency::Alt::Tracking::IEnvironment object using the environment code.\n     * @param code The environment code (serialized value).\n     * @param result A pointer to the created UAltEnvironment instance.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Initialize the native Antilatency::Alt::Tracking::IEnvironment object using the environment code.\n@param code The environment code (serialized value).\n@param result A pointer to the created UAltEnvironment instance.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "CreateEnvironmentUsingCode", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingCode_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics
	{
		struct AltTrackingFunctionLibrary_eventCreateEnvironmentUsingName_Parms
		{
			FString name;
			UAltEnvironment* result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingName_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingName_Parms, result), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/**\n     * Initialize the native Antilatency::Alt::Tracking::IEnvironment object using a environment from the Antilatency Service with provided name.\n     * @param name The name of the environment.\n     * @param result A pointer to the created UAltEnvironment instance.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Initialize the native Antilatency::Alt::Tracking::IEnvironment object using a environment from the Antilatency Service with provided name.\n@param name The name of the environment.\n@param result A pointer to the created UAltEnvironment instance.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "CreateEnvironmentUsingName", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventCreateEnvironmentUsingName_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics
	{
		struct AltTrackingFunctionLibrary_eventCreatePlacement_Parms
		{
			const UAltTrackingLibrary* altTrackingLibrary;
			FString code;
			FAltPose result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_code_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altTrackingLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_altTrackingLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreatePlacement_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreatePlacement_Parms, result), Z_Construct_UScriptStruct_FAltPose, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreatePlacement_Parms, code), METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_code_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_altTrackingLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_altTrackingLibrary = { "altTrackingLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreatePlacement_Parms, altTrackingLibrary), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_altTrackingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_altTrackingLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::NewProp_altTrackingLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Library" },
		{ "Comment", "/** \n     * Create a placement pose from the code.\n     * @param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n     * @param code Placement serialized value.\n     * @param result Result placement pose.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Create a placement pose from the code.\n@param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n@param code Placement serialized value.\n@param result Result placement pose.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "CreatePlacement", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventCreatePlacement_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics
	{
		struct AltTrackingFunctionLibrary_eventCreateTracking_Parms
		{
			const UAltTrackingLibrary* altTrackingLibrary;
			const UDeviceNetwork* network;
			FAdnNode node;
			const UAltEnvironment* environment;
			UAltTrackingCotask* result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_environment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_network_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_network;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altTrackingLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_altTrackingLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateTracking_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateTracking_Parms, result), Z_Construct_UClass_UAltTrackingCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_environment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_environment = { "environment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateTracking_Parms, environment), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_environment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateTracking_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateTracking_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_altTrackingLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_altTrackingLibrary = { "altTrackingLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventCreateTracking_Parms, altTrackingLibrary), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_altTrackingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_altTrackingLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_environment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::NewProp_altTrackingLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Cotask" },
		{ "Comment", "/** \n     * Create the tracking task on the node.\n     * @param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to start the tracking task on.\n     * @param environment A pointer to AAltEnvironment object.\n     * @param result A result pointer to the tracking cotask.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Create the tracking task on the node.\n@param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to start the tracking task on.\n@param environment A pointer to AAltEnvironment object.\n@param result A result pointer to the tracking cotask.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "CreateTracking", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventCreateTracking_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics
	{
		struct AltTrackingFunctionLibrary_eventEncodePlacement_Parms
		{
			const UAltTrackingLibrary* altTrackingLibrary;
			FAltPose placement;
			FString result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_placement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_placement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altTrackingLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_altTrackingLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventEncodePlacement_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventEncodePlacement_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_placement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_placement = { "placement", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventEncodePlacement_Parms, placement), Z_Construct_UScriptStruct_FAltPose, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_placement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_altTrackingLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_altTrackingLibrary = { "altTrackingLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventEncodePlacement_Parms, altTrackingLibrary), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_altTrackingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_altTrackingLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_placement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::NewProp_altTrackingLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Library" },
		{ "Comment", "/**\n     * Creates placement code from FAltPose.\n     * @param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n     * @param placement A source placement pose.\n     * @param result The result placement code (pose serialized value).\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Creates placement code from FAltPose.\n@param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n@param placement A source placement pose.\n@param result The result placement code (pose serialized value).\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "EncodePlacement", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventEncodePlacement_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics
	{
		struct AltTrackingFunctionLibrary_eventFindSupportedNodes_Parms
		{
			const UAltTrackingLibrary* altTrackingLibrary;
			const UDeviceNetwork* network;
			TArray<FAdnNode> result;
			EAltTrackingExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altTrackingLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_altTrackingLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventFindSupportedNodes_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventFindSupportedNodes_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventFindSupportedNodes_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_altTrackingLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_altTrackingLibrary = { "altTrackingLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventFindSupportedNodes_Parms, altTrackingLibrary), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_altTrackingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_altTrackingLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::NewProp_altTrackingLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Library" },
		{ "Comment", "/**\n     * Get all currently connected nodes that supports tracking task.\n     * @param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param result An result array of nodes that support the tracking task.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get all currently connected nodes that supports tracking task.\n@param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param result An result array of nodes that support the tracking task.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "FindSupportedNodes", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventFindSupportedNodes_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics
	{
		struct AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms
		{
			const UAltTrackingCotask* trackingCotask;
			FAltPose placement;
			float deltaTime;
			FTrackingState result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_placement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_placement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms, result), Z_Construct_UScriptStruct_FTrackingState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_deltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms, deltaTime), METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_deltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_deltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_placement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_placement = { "placement", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms, placement), Z_Construct_UScriptStruct_FAltPose, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_placement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_trackingCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_trackingCotask = { "trackingCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms, trackingCotask), Z_Construct_UClass_UAltTrackingCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_trackingCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_trackingCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_deltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_placement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::NewProp_trackingCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Cotask" },
		{ "Comment", "/**\n     * Get tracking state with placement and extrapolation corrections applied.\n     * @param trackingCotask A pointer to the UAltTrackingCotask object.\n     * @param placement A placement pose that will be used for the tracking pose correction.\n     * @param deltaTime An tracking extrapolation time.\n     * @param result Result tracking state.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get tracking state with placement and extrapolation corrections applied.\n@param trackingCotask A pointer to the UAltTrackingCotask object.\n@param placement A placement pose that will be used for the tracking pose correction.\n@param deltaTime An tracking extrapolation time.\n@param result Result tracking state.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "GetExtrapolatedState", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventGetExtrapolatedState_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics
	{
		struct AltTrackingFunctionLibrary_eventGetMarkers_Parms
		{
			const UAltEnvironment* environment;
			TArray<FVector> result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_environment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetMarkers_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetMarkers_Parms, result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_result_Inner = { "result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_environment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_environment = { "environment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetMarkers_Parms, environment), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_environment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::NewProp_environment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/** \n     * Get environment's markers coordinates.\n     * @param environment A pointer to the environment object.\n     * @param result The result array of FVector coordinates that represents environment IR markers positions.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get environment's markers coordinates.\n@param environment A pointer to the environment object.\n@param result The result array of FVector coordinates that represents environment IR markers positions.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "GetMarkers", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventGetMarkers_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics
	{
		struct AltTrackingFunctionLibrary_eventGetState_Parms
		{
			const UAltTrackingCotask* trackingCotask;
			FTrackingState result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetState_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetState_Parms, result), Z_Construct_UScriptStruct_FTrackingState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_trackingCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_trackingCotask = { "trackingCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetState_Parms, trackingCotask), Z_Construct_UClass_UAltTrackingCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_trackingCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_trackingCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::NewProp_trackingCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Cotask" },
		{ "Comment", "/**\n     * Get raw tracking state without extrapolation and placement applied.\n     * @param trackingCotask A pointer to the UAltTrackingCotask object.\n     * @param result Result raw tracking state.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get raw tracking state without extrapolation and placement applied.\n@param trackingCotask A pointer to the UAltTrackingCotask object.\n@param result Result raw tracking state.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "GetState", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventGetState_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics
	{
		struct AltTrackingFunctionLibrary_eventGetTrackingLibrary_Parms
		{
			UAltTrackingLibrary* result;
			EAltTrackingExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetTrackingLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetTrackingLibrary_Parms, result), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Library" },
		{ "Comment", "/**\n     * Get the native tracking library object.\n     * @param result The native tracking library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get the native tracking library object.\n@param result The native tracking library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "GetTrackingLibrary", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventGetTrackingLibrary_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics
	{
		struct AltTrackingFunctionLibrary_eventGetUpdateId_Parms
		{
			const UAltEnvironment* environment;
			int32 result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_environment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetUpdateId_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetUpdateId_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_environment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_environment = { "environment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventGetUpdateId_Parms, environment), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_environment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::NewProp_environment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/** \n     * Get mutable environment update id: every time when the tracking corrects markers positions, the environment update id will be incremented.\n     * @param environment A pointer to the environment object.\n     * @param result Current mutable environment update id.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get mutable environment update id: every time when the tracking corrects markers positions, the environment update id will be incremented.\n@param environment A pointer to the environment object.\n@param result Current mutable environment update id.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "GetUpdateId", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventGetUpdateId_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics
	{
		struct AltTrackingFunctionLibrary_eventIsEnvironmentValid_Parms
		{
			const UAltEnvironment* environment;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_environment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AltTrackingFunctionLibrary_eventIsEnvironmentValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AltTrackingFunctionLibrary_eventIsEnvironmentValid_Parms), &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_environment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_environment = { "environment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsEnvironmentValid_Parms, environment), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_environment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::NewProp_environment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/** \n     * Check if environment initialized properly.\n     * @return true if environment initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Check if environment initialized properly.\n@return true if environment initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "IsEnvironmentValid", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventIsEnvironmentValid_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics
	{
		struct AltTrackingFunctionLibrary_eventIsLibraryValid_Parms
		{
			const UAltTrackingLibrary* altTrackingLibrary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altTrackingLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_altTrackingLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AltTrackingFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AltTrackingFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_altTrackingLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_altTrackingLibrary = { "altTrackingLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsLibraryValid_Parms, altTrackingLibrary), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_altTrackingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_altTrackingLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::NewProp_altTrackingLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Library" },
		{ "Comment", "/**\n     * Check if UAltTrackingLibrary has been initialized properly (the UAltTrackingLibrary is not nullptr and the native Antilatency::Alt::Tracking::ILibrary is not nullptr).\n     * @param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Check if UAltTrackingLibrary has been initialized properly (the UAltTrackingLibrary is not nullptr and the native Antilatency::Alt::Tracking::ILibrary is not nullptr).\n@param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics
	{
		struct AltTrackingFunctionLibrary_eventIsMutable_Parms
		{
			const UAltEnvironment* environment;
			bool result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_environment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_environment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsMutable_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_result_SetBit(void* Obj)
	{
		((AltTrackingFunctionLibrary_eventIsMutable_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AltTrackingFunctionLibrary_eventIsMutable_Parms), &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_environment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_environment = { "environment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsMutable_Parms, environment), Z_Construct_UClass_UAltEnvironment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_environment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_environment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::NewProp_environment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Environment" },
		{ "Comment", "/**\n     * Is current environment is mutable (IR markers pattern is not constantly defined).\n     * @param environment A pointer to the environment object.\n     * @param result True if environment is mutable, otherwise false.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Is current environment is mutable (IR markers pattern is not constantly defined).\n@param environment A pointer to the environment object.\n@param result True if environment is mutable, otherwise false.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "IsMutable", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventIsMutable_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics
	{
		struct AltTrackingFunctionLibrary_eventIsSupported_Parms
		{
			const UAltTrackingLibrary* altTrackingLibrary;
			const UDeviceNetwork* network;
			FAdnNode node;
			bool result;
			EAltTrackingExceptionResult exception;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_altTrackingLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_altTrackingLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsSupported_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit(void* Obj)
	{
		((AltTrackingFunctionLibrary_eventIsSupported_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AltTrackingFunctionLibrary_eventIsSupported_Parms), &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_node = { "node", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsSupported_Parms, node), Z_Construct_UScriptStruct_FAdnNode, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_network = { "network", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsSupported_Parms, network), Z_Construct_UClass_UDeviceNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_network_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_altTrackingLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_altTrackingLibrary = { "altTrackingLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsSupported_Parms, altTrackingLibrary), Z_Construct_UClass_UAltTrackingLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_altTrackingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_altTrackingLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_network,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::NewProp_altTrackingLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Library" },
		{ "Comment", "/**\n     * Is a node supports the tracking task or not.\n     * @param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n     * @param network A pointer to the UDeviceNetwork object.\n     * @param node A node to check the tracking task support.\n     * @param result Is node supports tracking task or not.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Is a node supports the tracking task or not.\n@param altTrackingLibrary A pointer to the UAltTrackingLibrary object.\n@param network A pointer to the UDeviceNetwork object.\n@param node A node to check the tracking task support.\n@param result Is node supports tracking task or not.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "IsSupported", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventIsSupported_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics
	{
		struct AltTrackingFunctionLibrary_eventIsTaskFinished_Parms
		{
			const UAltTrackingCotask* trackingCotask;
			bool result;
			EAltTrackingExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsTaskFinished_Parms, exception), Z_Construct_UEnum_AntilatencyAltTracking_EAltTrackingExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit(void* Obj)
	{
		((AltTrackingFunctionLibrary_eventIsTaskFinished_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AltTrackingFunctionLibrary_eventIsTaskFinished_Parms), &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_trackingCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_trackingCotask = { "trackingCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsTaskFinished_Parms, trackingCotask), Z_Construct_UClass_UAltTrackingCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_trackingCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_trackingCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::NewProp_trackingCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Cotask" },
		{ "Comment", "/**\n     * Check if the task is finished on node.\n     * @param trackingCotask A pointer to the UAltTrackingCotask object.\n     * @param result True if task finished, otherwise false.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Check if the task is finished on node.\n@param trackingCotask A pointer to the UAltTrackingCotask object.\n@param result True if task finished, otherwise false.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "IsTaskFinished", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventIsTaskFinished_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics
	{
		struct AltTrackingFunctionLibrary_eventIsTrackingTaskValid_Parms
		{
			const UAltTrackingCotask* trackingCotask;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingCotask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AltTrackingFunctionLibrary_eventIsTrackingTaskValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AltTrackingFunctionLibrary_eventIsTrackingTaskValid_Parms), &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_trackingCotask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_trackingCotask = { "trackingCotask", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventIsTrackingTaskValid_Parms, trackingCotask), Z_Construct_UClass_UAltTrackingCotask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_trackingCotask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_trackingCotask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::NewProp_trackingCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Cotask" },
		{ "Comment", "/** \n     * Check if the cotask wrapper initialized properly.\n     * @param trackingCotask A pointer to the UAltTrackingCotask object.\n     * @return True if the cotask wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Check if the cotask wrapper initialized properly.\n@param trackingCotask A pointer to the UAltTrackingCotask object.\n@return True if the cotask wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "IsTrackingTaskValid", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventIsTrackingTaskValid_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics
	{
		struct AltTrackingFunctionLibrary_eventStop_Parms
		{
			UAltTrackingCotask* trackingCotask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingCotask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::NewProp_trackingCotask = { "trackingCotask", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AltTrackingFunctionLibrary_eventStop_Parms, trackingCotask), Z_Construct_UClass_UAltTrackingCotask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::NewProp_trackingCotask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Alt Tracking|Cotask" },
		{ "Comment", "/**\n     * Stop tracking task. Remember to free the target UAltTrackingCotask object after calling this method because it will be not useful at all after that moment.\n     * The node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\n     * IMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n     * @param trackingCotask A pointer to the UAltTrackingCotask object.\n     */" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Stop tracking task. Remember to free the target UAltTrackingCotask object after calling this method because it will be not useful at all after that moment.\nThe node which is used by that task will become free (FNodeStatus::Idle) after calling this method, so you can run another task on it.\nIMPORTANT: there is no guarantee that this node changes status immediately after calling this method, this may take some time.\n@param trackingCotask A pointer to the UAltTrackingCotask object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAltTrackingFunctionLibrary, nullptr, "Stop", nullptr, nullptr, sizeof(AltTrackingFunctionLibrary_eventStop_Parms), Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAltTrackingFunctionLibrary_NoRegister()
	{
		return UAltTrackingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironment, "CreateEnvironment" }, // 1381939988
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingCode, "CreateEnvironmentUsingCode" }, // 3513334911
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateEnvironmentUsingName, "CreateEnvironmentUsingName" }, // 1852469622
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreatePlacement, "CreatePlacement" }, // 3592826946
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_CreateTracking, "CreateTracking" }, // 871372916
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_EncodePlacement, "EncodePlacement" }, // 926360672
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_FindSupportedNodes, "FindSupportedNodes" }, // 1149238517
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetExtrapolatedState, "GetExtrapolatedState" }, // 488388589
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetMarkers, "GetMarkers" }, // 114500531
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetState, "GetState" }, // 4184108894
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetTrackingLibrary, "GetTrackingLibrary" }, // 680603740
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_GetUpdateId, "GetUpdateId" }, // 3128632696
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsEnvironmentValid, "IsEnvironmentValid" }, // 1534930813
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 838220991
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsMutable, "IsMutable" }, // 4215856058
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsSupported, "IsSupported" }, // 3699906709
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTaskFinished, "IsTaskFinished" }, // 2230919887
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_IsTrackingTaskValid, "IsTrackingTaskValid" }, // 1789850299
		{ &Z_Construct_UFunction_UAltTrackingFunctionLibrary_Stop, "Stop" }, // 1825318895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Alt Tracking module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "AltTrackingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AltTrackingFunctionLibrary.h" },
		{ "ToolTip", "Provides Alt Tracking module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAltTrackingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::ClassParams = {
		&UAltTrackingFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAltTrackingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAltTrackingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAltTrackingFunctionLibrary, 3835085466);
	template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<UAltTrackingFunctionLibrary>()
	{
		return UAltTrackingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAltTrackingFunctionLibrary(Z_Construct_UClass_UAltTrackingFunctionLibrary, &UAltTrackingFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyAltTracking"), TEXT("UAltTrackingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAltTrackingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
