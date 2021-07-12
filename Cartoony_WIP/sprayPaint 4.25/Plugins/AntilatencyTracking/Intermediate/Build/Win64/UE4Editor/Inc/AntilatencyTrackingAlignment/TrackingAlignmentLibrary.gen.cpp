// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTrackingAlignment/Public/TrackingAlignmentLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackingAlignmentLibrary() {}
// Cross Module References
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentLibrary_NoRegister();
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignmentLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyTrackingAlignment();
// End Cross Module References
	void UTrackingAlignmentLibrary::StaticRegisterNativesUTrackingAlignmentLibrary()
	{
	}
	UClass* Z_Construct_UClass_UTrackingAlignmentLibrary_NoRegister()
	{
		return UTrackingAlignmentLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTrackingAlignmentLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyTrackingAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Antilatency::Alt::TrackingAlignment::ILibrary wrapper for UE.\n * Do not instantiate this class directly by calling NewObject<UAltTrackingAlignmentLibrary> method,\n * use UAltTrackingAlignmentLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "TrackingAlignmentLibrary.h" },
		{ "ModuleRelativePath", "Public/TrackingAlignmentLibrary.h" },
		{ "ToolTip", "Antilatency::Alt::TrackingAlignment::ILibrary wrapper for UE.\nDo not instantiate this class directly by calling NewObject<UAltTrackingAlignmentLibrary> method,\nuse UAltTrackingAlignmentLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrackingAlignmentLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::ClassParams = {
		&UTrackingAlignmentLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrackingAlignmentLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrackingAlignmentLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrackingAlignmentLibrary, 1624018866);
	template<> ANTILATENCYTRACKINGALIGNMENT_API UClass* StaticClass<UTrackingAlignmentLibrary>()
	{
		return UTrackingAlignmentLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrackingAlignmentLibrary(Z_Construct_UClass_UTrackingAlignmentLibrary, &UTrackingAlignmentLibrary::StaticClass, TEXT("/Script/AntilatencyTrackingAlignment"), TEXT("UTrackingAlignmentLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackingAlignmentLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
