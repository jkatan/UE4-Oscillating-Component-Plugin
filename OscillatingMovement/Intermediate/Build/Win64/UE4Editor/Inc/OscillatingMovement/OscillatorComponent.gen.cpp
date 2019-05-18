// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OscillatingMovement/Public/OscillatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscillatorComponent() {}
// Cross Module References
	OSCILLATINGMOVEMENT_API UEnum* Z_Construct_UEnum_OscillatingMovement_EOscillationMode();
	UPackage* Z_Construct_UPackage__Script_OscillatingMovement();
	OSCILLATINGMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOscillatingWave();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OSCILLATINGMOVEMENT_API UClass* Z_Construct_UClass_UOscillatorComponent_NoRegister();
	OSCILLATINGMOVEMENT_API UClass* Z_Construct_UClass_UOscillatorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EOscillationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OscillatingMovement_EOscillationMode, Z_Construct_UPackage__Script_OscillatingMovement(), TEXT("EOscillationMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOscillationMode(EOscillationMode_StaticEnum, TEXT("/Script/OscillatingMovement"), TEXT("EOscillationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OscillatingMovement_EOscillationMode_CRC() { return 4290542664U; }
	UEnum* Z_Construct_UEnum_OscillatingMovement_EOscillationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OscillatingMovement();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOscillationMode"), 0, Get_Z_Construct_UEnum_OscillatingMovement_EOscillationMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOscillationMode::Random", (int64)EOscillationMode::Random },
				{ "EOscillationMode::Sequential", (int64)EOscillationMode::Sequential },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OscillatingMovement,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOscillationMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EOscillationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOscillatingWave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSCILLATINGMOVEMENT_API uint32 Get_Z_Construct_UScriptStruct_FOscillatingWave_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscillatingWave, Z_Construct_UPackage__Script_OscillatingMovement(), TEXT("OscillatingWave"), sizeof(FOscillatingWave), Get_Z_Construct_UScriptStruct_FOscillatingWave_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOscillatingWave(FOscillatingWave::StaticStruct, TEXT("/Script/OscillatingMovement"), TEXT("OscillatingWave"), false, nullptr, nullptr);
static struct FScriptStruct_OscillatingMovement_StaticRegisterNativesFOscillatingWave
{
	FScriptStruct_OscillatingMovement_StaticRegisterNativesFOscillatingWave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OscillatingWave")),new UScriptStruct::TCppStructOps<FOscillatingWave>);
	}
} ScriptStruct_OscillatingMovement_StaticRegisterNativesFOscillatingWave;
	struct Z_Construct_UScriptStruct_FOscillatingWave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WavePeriod_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WavePeriod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveAmplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscillatingWave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscillatingWave>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WavePeriod_MetaData[] = {
		{ "Category", "OscillatingWave" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WavePeriod = { UE4CodeGen_Private::EPropertyClass::Float, "WavePeriod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FOscillatingWave, WavePeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WavePeriod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WavePeriod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveAmplitude_MetaData[] = {
		{ "Category", "OscillatingWave" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveAmplitude = { UE4CodeGen_Private::EPropertyClass::Float, "WaveAmplitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FOscillatingWave, WaveAmplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveAmplitude_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveDirection_MetaData[] = {
		{ "Category", "OscillatingWave" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WaveDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FOscillatingWave, WaveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveDirection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscillatingWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WavePeriod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveAmplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscillatingWave_Statics::NewProp_WaveDirection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscillatingWave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscillatingMovement,
		nullptr,
		&NewStructOps,
		"OscillatingWave",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FOscillatingWave),
		alignof(FOscillatingWave),
		Z_Construct_UScriptStruct_FOscillatingWave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FOscillatingWave_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOscillatingWave_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOscillatingWave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOscillatingWave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOscillatingWave_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OscillatingMovement();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OscillatingWave"), sizeof(FOscillatingWave), Get_Z_Construct_UScriptStruct_FOscillatingWave_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOscillatingWave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOscillatingWave_CRC() { return 4186434097U; }
	void UOscillatorComponent::StaticRegisterNativesUOscillatorComponent()
	{
	}
	UClass* Z_Construct_UClass_UOscillatorComponent_NoRegister()
	{
		return UOscillatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOscillatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OscillationTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebuggingEnabled_MetaData[];
#endif
		static void NewProp_bDebuggingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebuggingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationWaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OscillationWaves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OscillationWaves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OscillationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OscillationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OscillationMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscillatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OscillatingMovement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscillatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "OscillatingMovement" },
		{ "IncludePath", "OscillatorComponent.h" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationTarget = { UE4CodeGen_Private::EPropertyClass::Object, "OscillationTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UOscillatorComponent, OscillationTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Debugging Setup" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled_SetBit(void* Obj)
	{
		((UOscillatorComponent*)Obj)->bDebuggingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebuggingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOscillatorComponent), &Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oscillation Setup" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves = { UE4CodeGen_Private::EPropertyClass::Array, "OscillationWaves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOscillatorComponent, OscillationWaves), METADATA_PARAMS(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OscillationWaves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscillatingWave, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Oscillation Setup" },
		{ "ModuleRelativePath", "Public/OscillatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "OscillationMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UOscillatorComponent, OscillationMode), Z_Construct_UEnum_OscillatingMovement_EOscillationMode, METADATA_PARAMS(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscillatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_bDebuggingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationWaves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscillatorComponent_Statics::NewProp_OscillationMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscillatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscillatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOscillatorComponent_Statics::ClassParams = {
		&UOscillatorComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A0u,
		nullptr, 0,
		Z_Construct_UClass_UOscillatorComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOscillatorComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOscillatorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOscillatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOscillatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOscillatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscillatorComponent, 3959795641);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscillatorComponent(Z_Construct_UClass_UOscillatorComponent, &UOscillatorComponent::StaticClass, TEXT("/Script/OscillatingMovement"), TEXT("UOscillatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOscillatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
