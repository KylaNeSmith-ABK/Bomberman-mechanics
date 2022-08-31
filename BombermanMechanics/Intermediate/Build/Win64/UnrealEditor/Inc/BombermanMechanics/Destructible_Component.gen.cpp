// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BombermanMechanics/Destructible_Component.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructible_Component() {}
// Cross Module References
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_UDestructible_Component_NoRegister();
	BOMBERMANMECHANICS_API UClass* Z_Construct_UClass_UDestructible_Component();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BombermanMechanics();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDestructible_Component::execDestroyViaBomb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyViaBomb();
		P_NATIVE_END;
	}
	void UDestructible_Component::StaticRegisterNativesUDestructible_Component()
	{
		UClass* Class = UDestructible_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyViaBomb", &UDestructible_Component::execDestroyViaBomb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destructible_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructible_Component, nullptr, "DestroyViaBomb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructible_Component);
	UClass* Z_Construct_UClass_UDestructible_Component_NoRegister()
	{
		return UDestructible_Component::StaticClass();
	}
	struct Z_Construct_UClass_UDestructible_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocationOffset__MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocationOffset_;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToMove__MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToMove_;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructible_Component_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BombermanMechanics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestructible_Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestructible_Component_DestroyViaBomb, "DestroyViaBomb" }, // 1295640425
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructible_Component_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Destructible_Component.h" },
		{ "ModuleRelativePath", "Destructible_Component.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructible_Component_Statics::NewProp_EndLocationOffset__MetaData[] = {
		{ "Category", "Destructible_Component" },
		{ "ModuleRelativePath", "Destructible_Component.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructible_Component_Statics::NewProp_EndLocationOffset_ = { "EndLocationOffset_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestructible_Component, EndLocationOffset_), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDestructible_Component_Statics::NewProp_EndLocationOffset__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructible_Component_Statics::NewProp_EndLocationOffset__MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructible_Component_Statics::NewProp_TimeToMove__MetaData[] = {
		{ "Category", "Destructible_Component" },
		{ "ModuleRelativePath", "Destructible_Component.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDestructible_Component_Statics::NewProp_TimeToMove_ = { "TimeToMove_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDestructible_Component, TimeToMove_), METADATA_PARAMS(Z_Construct_UClass_UDestructible_Component_Statics::NewProp_TimeToMove__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructible_Component_Statics::NewProp_TimeToMove__MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestructible_Component_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructible_Component_Statics::NewProp_EndLocationOffset_,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructible_Component_Statics::NewProp_TimeToMove_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructible_Component_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestructible_Component>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructible_Component_Statics::ClassParams = {
		&UDestructible_Component::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestructible_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestructible_Component_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDestructible_Component_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructible_Component_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructible_Component()
	{
		if (!Z_Registration_Info_UClass_UDestructible_Component.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructible_Component.OuterSingleton, Z_Construct_UClass_UDestructible_Component_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestructible_Component.OuterSingleton;
	}
	template<> BOMBERMANMECHANICS_API UClass* StaticClass<UDestructible_Component>()
	{
		return UDestructible_Component::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructible_Component);
	struct Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Destructible_Component_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Destructible_Component_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestructible_Component, UDestructible_Component::StaticClass, TEXT("UDestructible_Component"), &Z_Registration_Info_UClass_UDestructible_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructible_Component), 909373165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Destructible_Component_h_3718139501(TEXT("/Script/BombermanMechanics"),
		Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Destructible_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_Destructible_Component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
