// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTrackingAlignment/Public/TrackingAlignmentFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackingAlignmentFunctionLibrary() {}
// Cross Module References
	ANTILATENCYTRACKINGALIGNMENT_API UEnum* Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyTrackingAlignment();
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister();
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignment_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentLibrary_NoRegister();
	ANTILATENCYTRACKINGALIGNMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackingAlignmentState();
// End Cross Module References
	static UEnum* ETrackingAlignmentExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult, Z_Construct_UPackage__Script_AntilatencyTrackingAlignment(), TEXT("ETrackingAlignmentExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYTRACKINGALIGNMENT_API UEnum* StaticEnum<ETrackingAlignmentExceptionResult>()
	{
		return ETrackingAlignmentExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingAlignmentExceptionResult(ETrackingAlignmentExceptionResult_StaticEnum, TEXT("/Script/AntilatencyTrackingAlignment"), TEXT("ETrackingAlignmentExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult_Hash() { return 1234331836U; }
	UEnum* Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyTrackingAlignment();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingAlignmentExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingAlignmentExceptionResult::Success", (int64)ETrackingAlignmentExceptionResult::Success },
				{ "ETrackingAlignmentExceptionResult::Fail", (int64)ETrackingAlignmentExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "ETrackingAlignmentExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "ETrackingAlignmentExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyTrackingAlignment,
				nullptr,
				"ETrackingAlignmentExceptionResult",
				"ETrackingAlignmentExceptionResult",
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
	DEFINE_FUNCTION(UTrackingAlignmentFunctionLibrary::execIsTrackingAlignmentValid)
	{
		P_GET_OBJECT(UTrackingAlignment,Z_Param_trackingAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTrackingAlignmentFunctionLibrary::IsTrackingAlignmentValid(Z_Param_trackingAlignment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackingAlignmentFunctionLibrary::execUpdate)
	{
		P_GET_OBJECT(UTrackingAlignment,Z_Param_trackingAlignment);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_a);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_b);
		P_GET_PROPERTY(FFloatProperty,Z_Param_time);
		P_GET_STRUCT_REF(FTrackingAlignmentState,Z_Param_Out_result);
		P_GET_ENUM_REF(ETrackingAlignmentExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTrackingAlignmentFunctionLibrary::Update(Z_Param_trackingAlignment,Z_Param_Out_a,Z_Param_Out_b,Z_Param_time,Z_Param_Out_result,(ETrackingAlignmentExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackingAlignmentFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(UTrackingAlignmentLibrary,Z_Param_trackingAlignmentLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTrackingAlignmentFunctionLibrary::IsLibraryValid(Z_Param_trackingAlignmentLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackingAlignmentFunctionLibrary::execCreateTrackingAlignment)
	{
		P_GET_OBJECT(UTrackingAlignmentLibrary,Z_Param_trackingAlignmentLibrary);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_initialARelativeToB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_initialTimeBAheadOfA);
		P_GET_OBJECT_REF(UTrackingAlignment,Z_Param_Out_result);
		P_GET_ENUM_REF(ETrackingAlignmentExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTrackingAlignmentFunctionLibrary::CreateTrackingAlignment(Z_Param_trackingAlignmentLibrary,Z_Param_Out_initialARelativeToB,Z_Param_initialTimeBAheadOfA,Z_Param_Out_result,(ETrackingAlignmentExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTrackingAlignmentFunctionLibrary::execGetTrackingAlignmentLibrary)
	{
		P_GET_OBJECT_REF(UTrackingAlignmentLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(ETrackingAlignmentExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTrackingAlignmentFunctionLibrary::GetTrackingAlignmentLibrary(Z_Param_Out_result,(ETrackingAlignmentExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void UTrackingAlignmentFunctionLibrary::StaticRegisterNativesUTrackingAlignmentFunctionLibrary()
	{
		UClass* Class = UTrackingAlignmentFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTrackingAlignment", &UTrackingAlignmentFunctionLibrary::execCreateTrackingAlignment },
			{ "GetTrackingAlignmentLibrary", &UTrackingAlignmentFunctionLibrary::execGetTrackingAlignmentLibrary },
			{ "IsLibraryValid", &UTrackingAlignmentFunctionLibrary::execIsLibraryValid },
			{ "IsTrackingAlignmentValid", &UTrackingAlignmentFunctionLibrary::execIsTrackingAlignmentValid },
			{ "Update", &UTrackingAlignmentFunctionLibrary::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics
	{
		struct TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms
		{
			const UTrackingAlignmentLibrary* trackingAlignmentLibrary;
			FQuat initialARelativeToB;
			float initialTimeBAheadOfA;
			UTrackingAlignment* result;
			ETrackingAlignmentExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialTimeBAheadOfA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialTimeBAheadOfA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialARelativeToB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_initialARelativeToB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingAlignmentLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingAlignmentLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms, exception), Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms, result), Z_Construct_UClass_UTrackingAlignment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialTimeBAheadOfA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialTimeBAheadOfA = { "initialTimeBAheadOfA", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms, initialTimeBAheadOfA), METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialTimeBAheadOfA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialTimeBAheadOfA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialARelativeToB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialARelativeToB = { "initialARelativeToB", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms, initialARelativeToB), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialARelativeToB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialARelativeToB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_trackingAlignmentLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_trackingAlignmentLibrary = { "trackingAlignmentLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms, trackingAlignmentLibrary), Z_Construct_UClass_UTrackingAlignmentLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_trackingAlignmentLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_trackingAlignmentLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialTimeBAheadOfA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_initialARelativeToB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::NewProp_trackingAlignmentLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Tracking Alignment|Alignment" },
		{ "Comment", "/** \n     * Create the tracking alignment.\n     * @param trackingAlignmentLibrary A pointer to the UTrackingAlignmentLibrary object.\n     * @param result A result pointer to the tracking alignment.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
		{ "ToolTip", "Create the tracking alignment.\n@param trackingAlignmentLibrary A pointer to the UTrackingAlignmentLibrary object.\n@param result A result pointer to the tracking alignment.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackingAlignmentFunctionLibrary, nullptr, "CreateTrackingAlignment", nullptr, nullptr, sizeof(TrackingAlignmentFunctionLibrary_eventCreateTrackingAlignment_Parms), Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics
	{
		struct TrackingAlignmentFunctionLibrary_eventGetTrackingAlignmentLibrary_Parms
		{
			UTrackingAlignmentLibrary* result;
			ETrackingAlignmentExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventGetTrackingAlignmentLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventGetTrackingAlignmentLibrary_Parms, result), Z_Construct_UClass_UTrackingAlignmentLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Tracking Alignment|Library" },
		{ "Comment", "/**\n     * Get the native tracking alignment library object.\n     * @param result The native tracking alignment library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
		{ "ToolTip", "Get the native tracking alignment library object.\n@param result The native tracking alignment library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackingAlignmentFunctionLibrary, nullptr, "GetTrackingAlignmentLibrary", nullptr, nullptr, sizeof(TrackingAlignmentFunctionLibrary_eventGetTrackingAlignmentLibrary_Parms), Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics
	{
		struct TrackingAlignmentFunctionLibrary_eventIsLibraryValid_Parms
		{
			const UTrackingAlignmentLibrary* trackingAlignmentLibrary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingAlignmentLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingAlignmentLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrackingAlignmentFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TrackingAlignmentFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_trackingAlignmentLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_trackingAlignmentLibrary = { "trackingAlignmentLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventIsLibraryValid_Parms, trackingAlignmentLibrary), Z_Construct_UClass_UTrackingAlignmentLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_trackingAlignmentLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_trackingAlignmentLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::NewProp_trackingAlignmentLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Tracking Alignment|Library" },
		{ "Comment", "/**\n     * Check if UTrackingAlignmentLibrary has been initialized properly (the UTrackingAlignmentLibrary is not nullptr and the native Antilatency::TrackingAlignment::ILibrary is not nullptr).\n     * @param trackingAlignmentLibrary A pointer to the UTrackingAlignmentLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
		{ "ToolTip", "Check if UTrackingAlignmentLibrary has been initialized properly (the UTrackingAlignmentLibrary is not nullptr and the native Antilatency::TrackingAlignment::ILibrary is not nullptr).\n@param trackingAlignmentLibrary A pointer to the UTrackingAlignmentLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackingAlignmentFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(TrackingAlignmentFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics
	{
		struct TrackingAlignmentFunctionLibrary_eventIsTrackingAlignmentValid_Parms
		{
			const UTrackingAlignment* trackingAlignment;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TrackingAlignmentFunctionLibrary_eventIsTrackingAlignmentValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TrackingAlignmentFunctionLibrary_eventIsTrackingAlignmentValid_Parms), &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_trackingAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_trackingAlignment = { "trackingAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventIsTrackingAlignmentValid_Parms, trackingAlignment), Z_Construct_UClass_UTrackingAlignment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_trackingAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_trackingAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::NewProp_trackingAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Tracking Alignment" },
		{ "Comment", "/** \n     * Check if the Antilatency::Alt::TrackingAlignment::ITrackingAlignment wrapper initialized properly.\n     * @param trackingCotask A pointer to the UAltTrackingCotask object.\n     * @return True if the cotask wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
		{ "ToolTip", "Check if the Antilatency::Alt::TrackingAlignment::ITrackingAlignment wrapper initialized properly.\n@param trackingCotask A pointer to the UAltTrackingCotask object.\n@return True if the cotask wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackingAlignmentFunctionLibrary, nullptr, "IsTrackingAlignmentValid", nullptr, nullptr, sizeof(TrackingAlignmentFunctionLibrary_eventIsTrackingAlignmentValid_Parms), Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics
	{
		struct TrackingAlignmentFunctionLibrary_eventUpdate_Parms
		{
			const UTrackingAlignment* trackingAlignment;
			FQuat a;
			FQuat b;
			float time;
			FTrackingAlignmentState result;
			ETrackingAlignmentExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trackingAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trackingAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventUpdate_Parms, exception), Z_Construct_UEnum_AntilatencyTrackingAlignment_ETrackingAlignmentExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventUpdate_Parms, result), Z_Construct_UScriptStruct_FTrackingAlignmentState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventUpdate_Parms, time), METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventUpdate_Parms, b), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_b_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_b_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_a_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventUpdate_Parms, a), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_a_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_a_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_trackingAlignment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_trackingAlignment = { "trackingAlignment", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TrackingAlignmentFunctionLibrary_eventUpdate_Parms, trackingAlignment), Z_Construct_UClass_UTrackingAlignment_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_trackingAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_trackingAlignment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::NewProp_trackingAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|Tracking Alignment" },
		{ "Comment", "/**\n     * @param a Alt rotation without extrapolation.\n\x09 * @param b Third-party tracker's rotation as is.\n\x09 * @param time Application's time since startup in seconds.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
		{ "ToolTip", "@param a Alt rotation without extrapolation.\n@param b Third-party tracker's rotation as is.\n@param time Application's time since startup in seconds.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackingAlignmentFunctionLibrary, nullptr, "Update", nullptr, nullptr, sizeof(TrackingAlignmentFunctionLibrary_eventUpdate_Parms), Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister()
	{
		return UTrackingAlignmentFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyTrackingAlignment,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_CreateTrackingAlignment, "CreateTrackingAlignment" }, // 3839183732
		{ &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetTrackingAlignmentLibrary, "GetTrackingAlignmentLibrary" }, // 1131840463
		{ &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 2490725084
		{ &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_IsTrackingAlignmentValid, "IsTrackingAlignmentValid" }, // 2762652138
		{ &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_Update, "Update" }, // 3138536159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Alt Tracking Alignment module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "TrackingAlignmentFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentFunctionLibrary.h" },
		{ "ToolTip", "Provides Alt Tracking Alignment module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrackingAlignmentFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::ClassParams = {
		&UTrackingAlignmentFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrackingAlignmentFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrackingAlignmentFunctionLibrary, 980017725);
	template<> ANTILATENCYTRACKINGALIGNMENT_API UClass* StaticClass<UTrackingAlignmentFunctionLibrary>()
	{
		return UTrackingAlignmentFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrackingAlignmentFunctionLibrary(Z_Construct_UClass_UTrackingAlignmentFunctionLibrary, &UTrackingAlignmentFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyTrackingAlignment"), TEXT("UTrackingAlignmentFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackingAlignmentFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
