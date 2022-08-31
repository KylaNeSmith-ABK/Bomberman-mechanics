// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BombermanMechanics/Bomb_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomb_Component() {}
// Cross Module References
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_UBomb_Component_NoRegister();
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_UBomb_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BombermanMechanics();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(UBomb_Component::execOnExplode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExplode();
		P_NATIVE_END;
	}
	void UBomb_Component::StaticRegisterNativesUBomb_Component()
	{
		UClass* Class = UBomb_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExplode", &UBomb_Component::execOnExplode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBomb_Component_OnExplode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBomb_Component_OnExplode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bomb_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBomb_Component_OnExplode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBomb_Component, nullptr, "OnExplode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBomb_Component_OnExplode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBomb_Component_OnExplode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBomb_Component_OnExplode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBomb_Component_OnExplode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBomb_Component);
	UClass* Z_Construct_UClass_UBomb_Component_NoRegister()
	{
		return UBomb_Component::StaticClass();
	}
	struct Z_Construct_UClass_UBomb_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionAOESphere__MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionAOESphere_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDelayTime__MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDelayTime_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTimerHandle__MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DelayTimerHandle_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBomb_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BombermanMechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBomb_Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBomb_Component_OnExplode, "OnExplode" }, // 4224379353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomb_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Bomb_Component.h" },
		{ "ModuleRelativePath", "Bomb_Component.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionAOESphere__MetaData[] = {
		{ "Category", "Bomb_Component" },
		{ "Comment", "/*UPROPERTY(EditAnywhere)\n\x09""float ExplosionRadius_ = 250.0f;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomb_Component.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\n       float ExplosionRadius_ = 250.0f;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionAOESphere_ = { "ExplosionAOESphere_", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBomb_Component, ExplosionAOESphere_), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionAOESphere__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionAOESphere__MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionDelayTime__MetaData[] = {
		{ "Category", "Bomb_Component" },
		{ "ModuleRelativePath", "Bomb_Component.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionDelayTime_ = { "ExplosionDelayTime_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBomb_Component, ExplosionDelayTime_), METADATA_PARAMS(Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionDelayTime__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionDelayTime__MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBomb_Component_Statics::NewProp_DelayTimerHandle__MetaData[] = {
		{ "ModuleRelativePath", "Bomb_Component.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBomb_Component_Statics::NewProp_DelayTimerHandle_ = { "DelayTimerHandle_", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBomb_Component, DelayTimerHandle_), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UBomb_Component_Statics::NewProp_DelayTimerHandle__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBomb_Component_Statics::NewProp_DelayTimerHandle__MetaData)) }; // 589591453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBomb_Component_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionAOESphere_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomb_Component_Statics::NewProp_ExplosionDelayTime_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBomb_Component_Statics::NewProp_DelayTimerHandle_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBomb_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBomb_Component>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBomb_Component_Statics::ClassParams = {
		&UBomb_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBomb_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBomb_Component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBomb_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBomb_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBomb_Component()
	{
		if (!Z_Registration_Info_UClass_UBomb_Component.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBomb_Component.OuterSingleton, Z_Construct_UClass_UBomb_Component_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBomb_Component.OuterSingleton;
	}
	template<> BOMBERMANMECHANICS_API UClass* StaticClass<UBomb_Component>()
	{
		return UBomb_Component::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBomb_Component);
	struct Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Bomb_Component_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Bomb_Component_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBomb_Component, UBomb_Component::StaticClass, TEXT("UBomb_Component"), &Z_Registration_Info_UClass_UBomb_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBomb_Component), 1429345225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Bomb_Component_h_629874531(TEXT("/Script/BombermanMechanics"),
		Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Bomb_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Bomb_Component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
