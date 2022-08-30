// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BombermanMechanics/BombermanMechanicsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanMechanicsGameMode() {}
// Cross Module References
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_ABombermanMechanicsGameMode_NoRegister();
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_ABombermanMechanicsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BombermanMechanics();
// End Cross Module References
	void ABombermanMechanicsGameMode::StaticRegisterNativesABombermanMechanicsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABombermanMechanicsGameMode);
	UClass* Z_Construct_UClass_ABombermanMechanicsGameMode_NoRegister()
	{
		return ABombermanMechanicsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABombermanMechanicsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BombermanMechanics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BombermanMechanicsGameMode.h" },
		{ "ModuleRelativePath", "BombermanMechanicsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombermanMechanicsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::ClassParams = {
		&ABombermanMechanicsGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombermanMechanicsGameMode()
	{
		if (!Z_Registration_Info_UClass_ABombermanMechanicsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABombermanMechanicsGameMode.OuterSingleton, Z_Construct_UClass_ABombermanMechanicsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABombermanMechanicsGameMode.OuterSingleton;
	}
	template<> BOMBERMANMECHANICS_API UClass* StaticClass<ABombermanMechanicsGameMode>()
	{
		return ABombermanMechanicsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanMechanicsGameMode);
	struct Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombermanMechanicsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombermanMechanicsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABombermanMechanicsGameMode, ABombermanMechanicsGameMode::StaticClass, TEXT("ABombermanMechanicsGameMode"), &Z_Registration_Info_UClass_ABombermanMechanicsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABombermanMechanicsGameMode), 3101992837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombermanMechanicsGameMode_h_1380706075(TEXT("/Script/BombermanMechanics"),
		Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombermanMechanicsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombermanMechanicsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
