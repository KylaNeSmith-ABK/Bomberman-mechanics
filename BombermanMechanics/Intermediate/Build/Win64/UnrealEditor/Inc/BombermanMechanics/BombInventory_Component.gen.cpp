// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BombermanMechanics/BombInventory_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombInventory_Component() {}
// Cross Module References
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_UBombInventory_Component_NoRegister();
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_UBombInventory_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BombermanMechanics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBombInventory_Component::StaticRegisterNativesUBombInventory_Component()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBombInventory_Component);
	UClass* Z_Construct_UClass_UBombInventory_Component_NoRegister()
	{
		return UBombInventory_Component::StaticClass();
	}
	struct Z_Construct_UClass_UBombInventory_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombSpawn__MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BombSpawn_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBomb__MetaData[];
#endif
		static void NewProp_bHasBomb__SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBomb_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBombInventory_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BombermanMechanics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombInventory_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BombInventory_Component.h" },
		{ "ModuleRelativePath", "BombInventory_Component.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn__MetaData[] = {
		{ "Category", "BombInventory_Component" },
		{ "ModuleRelativePath", "BombInventory_Component.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn_ = { "BombSpawn_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombInventory_Component, BombSpawn_), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn__MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb__MetaData[] = {
		{ "Category", "BombInventory_Component" },
		{ "ModuleRelativePath", "BombInventory_Component.h" },
	};
#endif
	void Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb__SetBit(void* Obj)
	{
		((UBombInventory_Component*)Obj)->bHasBomb_ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb_ = { "bHasBomb_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBombInventory_Component), &Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb__SetBit, METADATA_PARAMS(Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb__MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBombInventory_Component_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_bHasBomb_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBombInventory_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBombInventory_Component>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBombInventory_Component_Statics::ClassParams = {
		&UBombInventory_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBombInventory_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBombInventory_Component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBombInventory_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBombInventory_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBombInventory_Component()
	{
		if (!Z_Registration_Info_UClass_UBombInventory_Component.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBombInventory_Component.OuterSingleton, Z_Construct_UClass_UBombInventory_Component_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBombInventory_Component.OuterSingleton;
	}
	template<> BOMBERMANMECHANICS_API UClass* StaticClass<UBombInventory_Component>()
	{
		return UBombInventory_Component::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombInventory_Component);
	struct Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBombInventory_Component, UBombInventory_Component::StaticClass, TEXT("UBombInventory_Component"), &Z_Registration_Info_UClass_UBombInventory_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBombInventory_Component), 371258037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_3878128902(TEXT("/Script/BombermanMechanics"),
		Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
