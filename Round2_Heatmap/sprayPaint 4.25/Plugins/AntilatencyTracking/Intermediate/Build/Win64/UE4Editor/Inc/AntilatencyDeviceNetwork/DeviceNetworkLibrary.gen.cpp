// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyDeviceNetwork/Public/DeviceNetworkLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceNetworkLibrary() {}
// Cross Module References
	ANTILATENCYDEVICENETWORK_API UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel();
	UPackage* Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetworkLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EDeviceNetworkLogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel, Z_Construct_UPackage__Script_AntilatencyDeviceNetwork(), TEXT("EDeviceNetworkLogLevel"));
		}
		return Singleton;
	}
	template<> ANTILATENCYDEVICENETWORK_API UEnum* StaticEnum<EDeviceNetworkLogLevel>()
	{
		return EDeviceNetworkLogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDeviceNetworkLogLevel(EDeviceNetworkLogLevel_StaticEnum, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("EDeviceNetworkLogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel_Hash() { return 3307938317U; }
	UEnum* Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDeviceNetworkLogLevel"), 0, Get_Z_Construct_UEnum_AntilatencyDeviceNetwork_EDeviceNetworkLogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDeviceNetworkLogLevel::Trace", (int64)EDeviceNetworkLogLevel::Trace },
				{ "EDeviceNetworkLogLevel::Debug", (int64)EDeviceNetworkLogLevel::Debug },
				{ "EDeviceNetworkLogLevel::Info", (int64)EDeviceNetworkLogLevel::Info },
				{ "EDeviceNetworkLogLevel::Warning", (int64)EDeviceNetworkLogLevel::Warning },
				{ "EDeviceNetworkLogLevel::Error", (int64)EDeviceNetworkLogLevel::Error },
				{ "EDeviceNetworkLogLevel::Critical", (int64)EDeviceNetworkLogLevel::Critical },
				{ "EDeviceNetworkLogLevel::Off", (int64)EDeviceNetworkLogLevel::Off },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Antilatency Device Network library Log Level\n */" },
				{ "Critical.Name", "EDeviceNetworkLogLevel::Critical" },
				{ "Debug.Name", "EDeviceNetworkLogLevel::Debug" },
				{ "Error.Name", "EDeviceNetworkLogLevel::Error" },
				{ "Info.Name", "EDeviceNetworkLogLevel::Info" },
				{ "ModuleRelativePath", "Public/DeviceNetworkLibrary.h" },
				{ "Off.Name", "EDeviceNetworkLogLevel::Off" },
				{ "ToolTip", "Antilatency Device Network library Log Level" },
				{ "Trace.Name", "EDeviceNetworkLogLevel::Trace" },
				{ "Warning.Name", "EDeviceNetworkLogLevel::Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
				nullptr,
				"EDeviceNetworkLogLevel",
				"EDeviceNetworkLogLevel",
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
	void UDeviceNetworkLibrary::StaticRegisterNativesUDeviceNetworkLibrary()
	{
	}
	UClass* Z_Construct_UClass_UDeviceNetworkLibrary_NoRegister()
	{
		return UDeviceNetworkLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceNetworkLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceNetworkLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceNetworkLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides methods to work with Device Network library.\n * Do not instantiate this class directly by calling NewObject<UDeviceNetworkLibrary> method,\n * use UDeviceNetworkLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "DeviceNetworkLibrary.h" },
		{ "ModuleRelativePath", "Public/DeviceNetworkLibrary.h" },
		{ "ToolTip", "Provides methods to work with Device Network library.\nDo not instantiate this class directly by calling NewObject<UDeviceNetworkLibrary> method,\nuse UDeviceNetworkLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceNetworkLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceNetworkLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceNetworkLibrary_Statics::ClassParams = {
		&UDeviceNetworkLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceNetworkLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceNetworkLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceNetworkLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceNetworkLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceNetworkLibrary, 630656465);
	template<> ANTILATENCYDEVICENETWORK_API UClass* StaticClass<UDeviceNetworkLibrary>()
	{
		return UDeviceNetworkLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceNetworkLibrary(Z_Construct_UClass_UDeviceNetworkLibrary, &UDeviceNetworkLibrary::StaticClass, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("UDeviceNetworkLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceNetworkLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
