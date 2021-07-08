// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/HardwareExtensionInterfaceTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareExtensionInterfaceTypes() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins();
// End Cross Module References
	static UEnum* EPinState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState, Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface(), TEXT("EPinState"));
		}
		return Singleton;
	}
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* StaticEnum<EPinState>()
	{
		return EPinState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPinState(EPinState_StaticEnum, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("EPinState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState_Hash() { return 1343278621U; }
	UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPinState"), 0, Get_Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPinState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPinState::Low", (int64)EPinState::Low },
				{ "EPinState::High", (int64)EPinState::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Antilatency|Hardware Extension Interface|Types" },
				{ "High.Name", "EPinState::High" },
				{ "Low.Name", "EPinState::Low" },
				{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
				nullptr,
				"EPinState",
				"EPinState",
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
	static UEnum* EPins_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins, Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface(), TEXT("EPins"));
		}
		return Singleton;
	}
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UEnum* StaticEnum<EPins>()
	{
		return EPins_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPins(EPins_StaticEnum, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("EPins"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins_Hash() { return 3254567306U; }
	UEnum* Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPins"), 0, Get_Z_Construct_UEnum_AntilatencyHardwareExtensionInterface_EPins_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPins::IO1", (int64)EPins::IO1 },
				{ "EPins::IO2", (int64)EPins::IO2 },
				{ "EPins::IOA3", (int64)EPins::IOA3 },
				{ "EPins::IOA4", (int64)EPins::IOA4 },
				{ "EPins::IO5", (int64)EPins::IO5 },
				{ "EPins::IO6", (int64)EPins::IO6 },
				{ "EPins::IO7", (int64)EPins::IO7 },
				{ "EPins::IO8", (int64)EPins::IO8 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Antilatency|Hardware Extension Interface|Types" },
				{ "IO1.Name", "EPins::IO1" },
				{ "IO2.Name", "EPins::IO2" },
				{ "IO5.Name", "EPins::IO5" },
				{ "IO6.Name", "EPins::IO6" },
				{ "IO7.Name", "EPins::IO7" },
				{ "IO8.Name", "EPins::IO8" },
				{ "IOA3.Name", "EPins::IOA3" },
				{ "IOA4.Name", "EPins::IOA4" },
				{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
				nullptr,
				"EPins",
				"EPins",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
