// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonHorror/FirstPersonHorrorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonHorrorGameModeBase() {}
// Cross Module References
	FIRSTPERSONHORROR_API UClass* Z_Construct_UClass_AFirstPersonHorrorGameModeBase_NoRegister();
	FIRSTPERSONHORROR_API UClass* Z_Construct_UClass_AFirstPersonHorrorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstPersonHorror();
// End Cross Module References
	void AFirstPersonHorrorGameModeBase::StaticRegisterNativesAFirstPersonHorrorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFirstPersonHorrorGameModeBase_NoRegister()
	{
		return AFirstPersonHorrorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonHorror,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstPersonHorrorGameModeBase.h" },
		{ "ModuleRelativePath", "FirstPersonHorrorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonHorrorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::ClassParams = {
		&AFirstPersonHorrorGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonHorrorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonHorrorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonHorrorGameModeBase, 2455351065);
	template<> FIRSTPERSONHORROR_API UClass* StaticClass<AFirstPersonHorrorGameModeBase>()
	{
		return AFirstPersonHorrorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonHorrorGameModeBase(Z_Construct_UClass_AFirstPersonHorrorGameModeBase, &AFirstPersonHorrorGameModeBase::StaticClass, TEXT("/Script/FirstPersonHorror"), TEXT("AFirstPersonHorrorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonHorrorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
