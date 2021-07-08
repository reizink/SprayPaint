// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyStorageClient/Public/StorageClientFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageClientFunctionLibrary() {}
// Cross Module References
	ANTILATENCYSTORAGECLIENT_API UEnum* Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult();
	UPackage* Z_Construct_UPackage__Script_AntilatencyStorageClient();
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorageClientFunctionLibrary_NoRegister();
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorageClientFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorage_NoRegister();
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorageClientLibrary_NoRegister();
// End Cross Module References
	static UEnum* EStorageClientExceptionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, Z_Construct_UPackage__Script_AntilatencyStorageClient(), TEXT("EStorageClientExceptionResult"));
		}
		return Singleton;
	}
	template<> ANTILATENCYSTORAGECLIENT_API UEnum* StaticEnum<EStorageClientExceptionResult>()
	{
		return EStorageClientExceptionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStorageClientExceptionResult(EStorageClientExceptionResult_StaticEnum, TEXT("/Script/AntilatencyStorageClient"), TEXT("EStorageClientExceptionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult_Hash() { return 1460970714U; }
	UEnum* Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyStorageClient();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStorageClientExceptionResult"), 0, Get_Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStorageClientExceptionResult::Success", (int64)EStorageClientExceptionResult::Success },
				{ "EStorageClientExceptionResult::Fail", (int64)EStorageClientExceptionResult::Fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not. */" },
				{ "Fail.Comment", "/** The method execution failed with some exception. */" },
				{ "Fail.DisplayName", "Fail" },
				{ "Fail.Name", "EStorageClientExceptionResult::Fail" },
				{ "Fail.ToolTip", "The method execution failed with some exception." },
				{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
				{ "Success.Comment", "/** The method executed successfully. */" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EStorageClientExceptionResult::Success" },
				{ "Success.ToolTip", "The method executed successfully." },
				{ "ToolTip", "An additional enum that is used by the blueprint methods to allow user to check if called method has been executed successfully or not." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyStorageClient,
				nullptr,
				"EStorageClientExceptionResult",
				"EStorageClientExceptionResult",
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
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execIsStorageValid)
	{
		P_GET_OBJECT(UStorage,Z_Param_storage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStorageClientFunctionLibrary::IsStorageValid(Z_Param_storage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execNext)
	{
		P_GET_OBJECT(UStorage,Z_Param_storage);
		P_GET_PROPERTY(FStrProperty,Z_Param_group);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::Next(Z_Param_storage,Z_Param_group,Z_Param_key,Z_Param_Out_result,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execRemove)
	{
		P_GET_OBJECT(UStorage,Z_Param_storage);
		P_GET_PROPERTY(FStrProperty,Z_Param_group);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::Remove(Z_Param_storage,Z_Param_group,Z_Param_key,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execWrite)
	{
		P_GET_OBJECT(UStorage,Z_Param_storage);
		P_GET_PROPERTY(FStrProperty,Z_Param_group);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::Write(Z_Param_storage,Z_Param_group,Z_Param_key,Z_Param_data,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execRead)
	{
		P_GET_OBJECT(UStorage,Z_Param_storage);
		P_GET_PROPERTY(FStrProperty,Z_Param_group);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::Read(Z_Param_storage,Z_Param_group,Z_Param_key,Z_Param_Out_result,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execIsLibraryValid)
	{
		P_GET_OBJECT(UStorageClientLibrary,Z_Param_storageClientLibrary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStorageClientFunctionLibrary::IsLibraryValid(Z_Param_storageClientLibrary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execGetLocalStorage)
	{
		P_GET_OBJECT(UStorageClientLibrary,Z_Param_storageClientLibrary);
		P_GET_OBJECT_REF(UStorage,Z_Param_Out_result);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::GetLocalStorage(Z_Param_storageClientLibrary,Z_Param_Out_result,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execGetRemoteStorage)
	{
		P_GET_OBJECT(UStorageClientLibrary,Z_Param_storageClientLibrary);
		P_GET_PROPERTY(FStrProperty,Z_Param_ipAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_OBJECT_REF(UStorage,Z_Param_Out_result);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::GetRemoteStorage(Z_Param_storageClientLibrary,Z_Param_ipAddress,Z_Param_port,Z_Param_Out_result,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorageClientFunctionLibrary::execGetStorageClientLibrary)
	{
		P_GET_OBJECT_REF(UStorageClientLibrary,Z_Param_Out_result);
		P_GET_ENUM_REF(EStorageClientExceptionResult,Z_Param_Out_exception);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStorageClientFunctionLibrary::GetStorageClientLibrary(Z_Param_Out_result,(EStorageClientExceptionResult&)(Z_Param_Out_exception));
		P_NATIVE_END;
	}
	void UStorageClientFunctionLibrary::StaticRegisterNativesUStorageClientFunctionLibrary()
	{
		UClass* Class = UStorageClientFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalStorage", &UStorageClientFunctionLibrary::execGetLocalStorage },
			{ "GetRemoteStorage", &UStorageClientFunctionLibrary::execGetRemoteStorage },
			{ "GetStorageClientLibrary", &UStorageClientFunctionLibrary::execGetStorageClientLibrary },
			{ "IsLibraryValid", &UStorageClientFunctionLibrary::execIsLibraryValid },
			{ "IsStorageValid", &UStorageClientFunctionLibrary::execIsStorageValid },
			{ "Next", &UStorageClientFunctionLibrary::execNext },
			{ "Read", &UStorageClientFunctionLibrary::execRead },
			{ "Remove", &UStorageClientFunctionLibrary::execRemove },
			{ "Write", &UStorageClientFunctionLibrary::execWrite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics
	{
		struct StorageClientFunctionLibrary_eventGetLocalStorage_Parms
		{
			const UStorageClientLibrary* storageClientLibrary;
			UStorage* result;
			EStorageClientExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storageClientLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storageClientLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetLocalStorage_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetLocalStorage_Parms, result), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_storageClientLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_storageClientLibrary = { "storageClientLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetLocalStorage_Parms, storageClientLibrary), Z_Construct_UClass_UStorageClientLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_storageClientLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_storageClientLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::NewProp_storageClientLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Library" },
		{ "Comment", "/**\n     * Get the local storage client.\n     * @param storageClientLibrary A pointer to the UStorageClientLibrary object.\n     * @param result The result storage client wrapper to work with the local storage.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Get the local storage client.\n@param storageClientLibrary A pointer to the UStorageClientLibrary object.\n@param result The result storage client wrapper to work with the local storage.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "GetLocalStorage", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventGetLocalStorage_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics
	{
		struct StorageClientFunctionLibrary_eventGetRemoteStorage_Parms
		{
			const UStorageClientLibrary* storageClientLibrary;
			FString ipAddress;
			int32 port;
			UStorage* result;
			EStorageClientExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ipAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ipAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storageClientLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storageClientLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetRemoteStorage_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetRemoteStorage_Parms, result), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetRemoteStorage_Parms, port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_ipAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_ipAddress = { "ipAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetRemoteStorage_Parms, ipAddress), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_ipAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_ipAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_storageClientLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_storageClientLibrary = { "storageClientLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetRemoteStorage_Parms, storageClientLibrary), Z_Construct_UClass_UStorageClientLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_storageClientLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_storageClientLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_ipAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::NewProp_storageClientLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Library" },
		{ "Comment", "/**\n     * Get the remote storage.\n     * @param storageClientLibrary A pointer to the UStorageClientLibrary object.\n     * @param ipAddress IP address of the remote storage client.\n     * @param port Port of the remote storage client.\n     * @param result The result storage client wrapper to work with the remote storage.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Get the remote storage.\n@param storageClientLibrary A pointer to the UStorageClientLibrary object.\n@param ipAddress IP address of the remote storage client.\n@param port Port of the remote storage client.\n@param result The result storage client wrapper to work with the remote storage.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "GetRemoteStorage", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventGetRemoteStorage_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics
	{
		struct StorageClientFunctionLibrary_eventGetStorageClientLibrary_Parms
		{
			UStorageClientLibrary* result;
			EStorageClientExceptionResult exception;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetStorageClientLibrary_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventGetStorageClientLibrary_Parms, result), Z_Construct_UClass_UStorageClientLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Library" },
		{ "Comment", "/**\n     * Get the native storage client library object.\n     * @param result The native storage client library object.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Get the native storage client library object.\n@param result The native storage client library object.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "GetStorageClientLibrary", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventGetStorageClientLibrary_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics
	{
		struct StorageClientFunctionLibrary_eventIsLibraryValid_Parms
		{
			const UStorageClientLibrary* storageClientLibrary;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storageClientLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storageClientLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StorageClientFunctionLibrary_eventIsLibraryValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StorageClientFunctionLibrary_eventIsLibraryValid_Parms), &Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_storageClientLibrary_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_storageClientLibrary = { "storageClientLibrary", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventIsLibraryValid_Parms, storageClientLibrary), Z_Construct_UClass_UStorageClientLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_storageClientLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_storageClientLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::NewProp_storageClientLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Library" },
		{ "Comment", "/**\n     * Check if UStorageClientLibrary has been initialized properly (the UStorageClientLibrary is not nullptr and the native Antilatency::StorageClient::ILibrary is not nullptr).\n     * @param storageClientLibrary A pointer to the UStorageClientLibrary object.\n     * @return True if object is initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Check if UStorageClientLibrary has been initialized properly (the UStorageClientLibrary is not nullptr and the native Antilatency::StorageClient::ILibrary is not nullptr).\n@param storageClientLibrary A pointer to the UStorageClientLibrary object.\n@return True if object is initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "IsLibraryValid", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventIsLibraryValid_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics
	{
		struct StorageClientFunctionLibrary_eventIsStorageValid_Parms
		{
			const UStorage* storage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StorageClientFunctionLibrary_eventIsStorageValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StorageClientFunctionLibrary_eventIsStorageValid_Parms), &Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_storage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventIsStorageValid_Parms, storage), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_storage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::NewProp_storage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Storage" },
		{ "Comment", "/**\n     * Check if the storage wrapper initialized properly.\n     * @param storage A pointer to the UStorage object.\n     * @return True if the storage wrapper initialized properly, otherwise false.\n     */" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Check if the storage wrapper initialized properly.\n@param storage A pointer to the UStorage object.\n@return True if the storage wrapper initialized properly, otherwise false." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "IsStorageValid", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventIsStorageValid_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics
	{
		struct StorageClientFunctionLibrary_eventNext_Parms
		{
			const UStorage* storage;
			FString group;
			FString key;
			FString result;
			EStorageClientExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventNext_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventNext_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventNext_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_group_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_group = { "group", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventNext_Parms, group), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_group_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_storage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventNext_Parms, storage), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_storage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::NewProp_storage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Storage" },
		{ "Comment", "/**\n     * Get the next element name from the Antilatency Storage.\n     * @param storage A pointer to the UStorage object.\n     * @param group Element group name, \"environment\" or \"placement\" values can be used now.\n     * @param key Current element name, empty string to get the first element name.\n     * @param result The next element name, empty string if the element with provided name is last element in this group.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Get the next element name from the Antilatency Storage.\n@param storage A pointer to the UStorage object.\n@param group Element group name, \"environment\" or \"placement\" values can be used now.\n@param key Current element name, empty string to get the first element name.\n@param result The next element name, empty string if the element with provided name is last element in this group.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "Next", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventNext_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics
	{
		struct StorageClientFunctionLibrary_eventRead_Parms
		{
			const UStorage* storage;
			FString group;
			FString key;
			FString result;
			EStorageClientExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRead_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRead_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRead_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_group_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_group = { "group", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRead_Parms, group), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_group_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_storage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRead_Parms, storage), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_storage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::NewProp_storage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Storage" },
		{ "Comment", "/**\n     * Read the code (serialized value) from the Antilatency Storage.\n     * @param storage A pointer to the UStorage object.\n     * @param group Element group name, \"environment\" or \"placement\" values can be used now.\n     * @param key Element key - name of the required environment or placement.\n                  You can use \"default\" value to get the value of element that is marked as default in Antilatency Service,\n                  \".default\" value will return the name of element that is marked as default in Antilatency Service.\n     * @param result The element code, or default element name if the \".default\" key has been used.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Read the code (serialized value) from the Antilatency Storage.\n@param storage A pointer to the UStorage object.\n@param group Element group name, \"environment\" or \"placement\" values can be used now.\n@param key Element key - name of the required environment or placement.\n                  You can use \"default\" value to get the value of element that is marked as default in Antilatency Service,\n                  \".default\" value will return the name of element that is marked as default in Antilatency Service.\n@param result The element code, or default element name if the \".default\" key has been used.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "Read", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventRead_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_Read()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_Read_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics
	{
		struct StorageClientFunctionLibrary_eventRemove_Parms
		{
			const UStorage* storage;
			FString group;
			FString key;
			EStorageClientExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRemove_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRemove_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_group_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_group = { "group", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRemove_Parms, group), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_group_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_storage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventRemove_Parms, storage), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_storage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::NewProp_storage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Storage" },
		{ "Comment", "/**\n     * Remove element from the Antilatency Storage.\n     * @param storage A pointer to the UStorage object.\n     * @param group Element group name, \"environment\" or \"placement\" values can be used now.\n     * @param key Element key - name of the required environment or placement.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Remove element from the Antilatency Storage.\n@param storage A pointer to the UStorage object.\n@param group Element group name, \"environment\" or \"placement\" values can be used now.\n@param key Element key - name of the required environment or placement.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "Remove", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventRemove_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics
	{
		struct StorageClientFunctionLibrary_eventWrite_Parms
		{
			const UStorage* storage;
			FString group;
			FString key;
			FString data;
			EStorageClientExceptionResult exception;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_exception;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_exception_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_storage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_storage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_exception = { "exception", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventWrite_Parms, exception), Z_Construct_UEnum_AntilatencyStorageClient_EStorageClientExceptionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_exception_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventWrite_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventWrite_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_group_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_group = { "group", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventWrite_Parms, group), METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_group_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_storage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_storage = { "storage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StorageClientFunctionLibrary_eventWrite_Parms, storage), Z_Construct_UClass_UStorage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_storage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_exception,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_exception_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::NewProp_storage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::Function_MetaDataParams[] = {
		{ "Category", "Antilatency|StorageClient|Storage" },
		{ "Comment", "/**\n     * Set the code (serialized value) to the Antilatency Storage.\n     * @param storage A pointer to the UStorage object.\n     * @param group Element group name, \"environment\" or \"placement\" values can be used now.\n     * @param key Element key - name of the required environment or placement.\n     * @param data Serialized value to set.\n     * @param exception Method execution result.\n     */" },
		{ "ExpandEnumAsExecs", "exception" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Set the code (serialized value) to the Antilatency Storage.\n@param storage A pointer to the UStorage object.\n@param group Element group name, \"environment\" or \"placement\" values can be used now.\n@param key Element key - name of the required environment or placement.\n@param data Serialized value to set.\n@param exception Method execution result." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorageClientFunctionLibrary, nullptr, "Write", nullptr, nullptr, sizeof(StorageClientFunctionLibrary_eventWrite_Parms), Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorageClientFunctionLibrary_Write()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStorageClientFunctionLibrary_Write_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStorageClientFunctionLibrary_NoRegister()
	{
		return UStorageClientFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStorageClientFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyStorageClient,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_GetLocalStorage, "GetLocalStorage" }, // 2548017921
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_GetRemoteStorage, "GetRemoteStorage" }, // 723012988
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_GetStorageClientLibrary, "GetStorageClientLibrary" }, // 24415754
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_IsLibraryValid, "IsLibraryValid" }, // 1510101515
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_IsStorageValid, "IsStorageValid" }, // 1475639529
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_Next, "Next" }, // 3187528412
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_Read, "Read" }, // 3911276237
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_Remove, "Remove" }, // 944608909
		{ &Z_Construct_UFunction_UStorageClientFunctionLibrary_Write, "Write" }, // 345960462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides Storage Client module's methods wrappers for the UE blueprint system.\n */" },
		{ "IncludePath", "StorageClientFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/StorageClientFunctionLibrary.h" },
		{ "ToolTip", "Provides Storage Client module's methods wrappers for the UE blueprint system." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorageClientFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::ClassParams = {
		&UStorageClientFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorageClientFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStorageClientFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStorageClientFunctionLibrary, 2514604150);
	template<> ANTILATENCYSTORAGECLIENT_API UClass* StaticClass<UStorageClientFunctionLibrary>()
	{
		return UStorageClientFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStorageClientFunctionLibrary(Z_Construct_UClass_UStorageClientFunctionLibrary, &UStorageClientFunctionLibrary::StaticClass, TEXT("/Script/AntilatencyStorageClient"), TEXT("UStorageClientFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorageClientFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
