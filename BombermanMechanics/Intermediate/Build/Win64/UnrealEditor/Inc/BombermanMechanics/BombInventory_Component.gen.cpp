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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBombInventory_Component::execDropBomb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropBomb();
		P_NATIVE_END;
	}
	void UBombInventory_Component::StaticRegisterNativesUBombInventory_Component()
	{
		UClass* Class = UBombInventory_Component::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropBomb", &UBombInventory_Component::execDropBomb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBombInventory_Component_DropBomb_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBombInventory_Component_DropBomb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BombInventory_Component.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBombInventory_Component_DropBomb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBombInventory_Component, nullptr, "DropBomb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBombInventory_Component_DropBomb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBombInventory_Component_DropBomb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBombInventory_Component_DropBomb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBombInventory_Component_DropBomb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBombInventory_Component);
	UClass* Z_Construct_UClass_UBombInventory_Component_NoRegister()
	{
		return UBombInventory_Component::StaticClass();
	}
	struct Z_Construct_UClass_UBombInventory_Component_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombSpawn__MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BombSpawn_;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UBombInventory_Component_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBombInventory_Component_DropBomb, "DropBomb" }, // 1769959
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn_ = { "BombSpawn_", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombInventory_Component, BombSpawn_), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombInventory_Component_Statics::NewProp_BombSpawn__MetaData)) };
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
		FuncInfo,
		Z_Construct_UClass_UBombInventory_Component_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UBombInventory_Component, UBombInventory_Component::StaticClass, TEXT("UBombInventory_Component"), &Z_Registration_Info_UClass_UBombInventory_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBombInventory_Component), 663014391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_1124696231(TEXT("/Script/BombermanMechanics"),
		Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BombermanMechanics_Source_BombermanMechanics_BombInventory_Component_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
