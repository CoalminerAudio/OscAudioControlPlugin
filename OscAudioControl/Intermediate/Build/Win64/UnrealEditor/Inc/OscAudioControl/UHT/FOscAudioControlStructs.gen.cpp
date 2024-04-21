// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OscAudioControl/Public/FOscAudioControlStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFOscAudioControlStructs() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	OSCAUDIOCONTROL_API UClass* Z_Construct_UClass_UOscAudioControlMixerLayout();
	OSCAUDIOCONTROL_API UClass* Z_Construct_UClass_UOscAudioControlMixerLayout_NoRegister();
	OSCAUDIOCONTROL_API UClass* Z_Construct_UClass_UOscAudioControlUserInfo();
	OSCAUDIOCONTROL_API UClass* Z_Construct_UClass_UOscAudioControlUserInfo_NoRegister();
	OSCAUDIOCONTROL_API UEnum* Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection();
	OSCAUDIOCONTROL_API UEnum* Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlControlBusMix();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlFaderInformation();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlTriggers();
	OSCAUDIOCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlUsers();
	UPackage* Z_Construct_UPackage__Script_OscAudioControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOscAudioControlActorSelection;
	static UEnum* EOscAudioControlActorSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOscAudioControlActorSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOscAudioControlActorSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("EOscAudioControlActorSelection"));
		}
		return Z_Registration_Info_UEnum_EOscAudioControlActorSelection.OuterSingleton;
	}
	template<> OSCAUDIOCONTROL_API UEnum* StaticEnum<EOscAudioControlActorSelection>()
	{
		return EOscAudioControlActorSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::Enumerators[] = {
		{ "ActorOne", (int64)ActorOne },
		{ "ActorTwo", (int64)ActorTwo },
		{ "ActorThree", (int64)ActorThree },
		{ "ActorFour", (int64)ActorFour },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::Enum_MetaDataParams[] = {
		{ "ActorFour.DisplayName", "Actor Four" },
		{ "ActorFour.Name", "ActorFour" },
		{ "ActorOne.DisplayName", "Actor One" },
		{ "ActorOne.Name", "ActorOne" },
		{ "ActorThree.DisplayName", "Actor Three" },
		{ "ActorThree.Name", "ActorThree" },
		{ "ActorTwo.DisplayName", "Actor Two" },
		{ "ActorTwo.Name", "ActorTwo" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*This C++ class is used to define mutliple enums, structs, and data assets for the OSC AudioControl plug in to use\n\n*///// Enumerators \\\\\\\\\n//Enum for switching on selected world actor to spawn sounds at via touchOSC\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This C++ class is used to define mutliple enums, structs, and data assets for the OSC AudioControl plug in to use\n\n//// Enumerators \\\\\\\\\n//Enum for switching on selected world actor to spawn sounds at via touchOSC" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		"EOscAudioControlActorSelection",
		"EOscAudioControlActorSelection",
		Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection()
	{
		if (!Z_Registration_Info_UEnum_EOscAudioControlActorSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOscAudioControlActorSelection.InnerSingleton, Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOscAudioControlActorSelection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOscAudioControlWatchSelection;
	static UEnum* EOscAudioControlWatchSelection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOscAudioControlWatchSelection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOscAudioControlWatchSelection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("EOscAudioControlWatchSelection"));
		}
		return Z_Registration_Info_UEnum_EOscAudioControlWatchSelection.OuterSingleton;
	}
	template<> OSCAUDIOCONTROL_API UEnum* StaticEnum<EOscAudioControlWatchSelection>()
	{
		return EOscAudioControlWatchSelection_StaticEnum();
	}
	struct Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::Enumerators[] = {
		{ "ChoiceOne", (int64)ChoiceOne },
		{ "ChoiceTwo", (int64)ChoiceTwo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChoiceOne.DisplayName", "Control Parameter" },
		{ "ChoiceOne.Name", "ChoiceOne" },
		{ "ChoiceTwo.DisplayName", "Watch Output" },
		{ "ChoiceTwo.Name", "ChoiceTwo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Enum for selecting whether to control the parameter of a sound, or watch the parameter of a sounds output\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for selecting whether to control the parameter of a sound, or watch the parameter of a sounds output" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		"EOscAudioControlWatchSelection",
		"EOscAudioControlWatchSelection",
		Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection()
	{
		if (!Z_Registration_Info_UEnum_EOscAudioControlWatchSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOscAudioControlWatchSelection.InnerSingleton, Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOscAudioControlWatchSelection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation;
class UScriptStruct* FOscAudioControlFaderInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlFaderInformation"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlFaderInformation>()
{
	return FOscAudioControlFaderInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controlled_MetaData[];
#endif
		static void NewProp_Controlled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Controlled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Muted_MetaData[];
#endif
		static void NewProp_Muted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Muted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastControlledValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastControlledValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// Structs \\\\\\\\\n//Info for keeping track of faders values over mute and control\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Structs \\\\\\\\\nInfo for keeping track of faders values over mute and control" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlFaderInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_ControlBus_MetaData[] = {
		{ "Category", "OscAudioControlFaderInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_ControlBus = { "ControlBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlFaderInformation, ControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_ControlBus_MetaData), Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_ControlBus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled_MetaData[] = {
		{ "Category", "OscAudioControlFaderInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled_SetBit(void* Obj)
	{
		((FOscAudioControlFaderInformation*)Obj)->Controlled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled = { "Controlled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOscAudioControlFaderInformation), &Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled_MetaData), Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted_MetaData[] = {
		{ "Category", "OscAudioControlFaderInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted_SetBit(void* Obj)
	{
		((FOscAudioControlFaderInformation*)Obj)->Muted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted = { "Muted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOscAudioControlFaderInformation), &Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted_MetaData), Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_LastControlledValue_MetaData[] = {
		{ "Category", "OscAudioControlFaderInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_LastControlledValue = { "LastControlledValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlFaderInformation, LastControlledValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_LastControlledValue_MetaData), Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_LastControlledValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_ControlBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Controlled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_Muted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewProp_LastControlledValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlFaderInformation",
		Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::PropPointers),
		sizeof(FOscAudioControlFaderInformation),
		alignof(FOscAudioControlFaderInformation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlFaderInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlTriggers;
class UScriptStruct* FOscAudioControlTriggers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlTriggers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlTriggers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlTriggers, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlTriggers"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlTriggers.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlTriggers>()
{
	return FOscAudioControlTriggers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTriggerOne_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomTriggerOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTriggerTwo_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomTriggerTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTriggerThree_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomTriggerThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTriggerFour_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomTriggerFour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for keeping track of different custom triggers to use in metasound testing\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for keeping track of different custom triggers to use in metasound testing" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlTriggers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerOne_MetaData[] = {
		{ "Category", "Custom triggers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerOne = { "CustomTriggerOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlTriggers, CustomTriggerOne), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerOne_MetaData), Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerOne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerTwo_MetaData[] = {
		{ "Category", "Custom triggers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerTwo = { "CustomTriggerTwo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlTriggers, CustomTriggerTwo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerTwo_MetaData), Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerTwo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerThree_MetaData[] = {
		{ "Category", "Custom triggers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerThree = { "CustomTriggerThree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlTriggers, CustomTriggerThree), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerThree_MetaData), Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerThree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerFour_MetaData[] = {
		{ "Category", "Custom triggers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerFour = { "CustomTriggerFour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlTriggers, CustomTriggerFour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerFour_MetaData), Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerFour_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewProp_CustomTriggerFour,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlTriggers",
		Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::PropPointers),
		sizeof(FOscAudioControlTriggers),
		alignof(FOscAudioControlTriggers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlTriggers()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlTriggers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlTriggers.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlTriggers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand;
class UScriptStruct* FOscAudioControlConsoleCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlConsoleCommand"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlConsoleCommand>()
{
	return FOscAudioControlConsoleCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index01_MetaData[];
#endif
		static void NewProp_Index01_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Index01;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for telling OSC which console commands to trigger\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for telling OSC which console commands to trigger" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlConsoleCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_ConsoleCommand_MetaData[] = {
		{ "Category", "OscAudioControlConsoleCommand" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_ConsoleCommand = { "ConsoleCommand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlConsoleCommand, ConsoleCommand), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_ConsoleCommand_MetaData), Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_ConsoleCommand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01_MetaData[] = {
		{ "Category", "OscAudioControlConsoleCommand" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch between adding a 0 and 1 to this console command when activating" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01_SetBit(void* Obj)
	{
		((FOscAudioControlConsoleCommand*)Obj)->Index01 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01 = { "Index01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOscAudioControlConsoleCommand), &Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01_MetaData), Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_ConsoleCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewProp_Index01,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlConsoleCommand",
		Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::PropPointers),
		sizeof(FOscAudioControlConsoleCommand),
		alignof(FOscAudioControlConsoleCommand),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix;
class UScriptStruct* FOscAudioControlControlBusMix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlControlBusMix"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlControlBusMix>()
{
	return FOscAudioControlControlBusMix::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMixOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMixOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMixTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMixTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMixThree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMixThree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMixFour_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMixFour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMixFive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMixFive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMixSix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMixSix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for telling Touch OSC which control bus Mixes should be used\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for telling Touch OSC which control bus Mixes should be used" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlControlBusMix>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixOne_MetaData[] = {
		{ "Category", "OscAudioControlControlBusMix" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixOne = { "ControlBusMixOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlControlBusMix, ControlBusMixOne), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixOne_MetaData), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixOne_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixTwo_MetaData[] = {
		{ "Category", "OscAudioControlControlBusMix" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixTwo = { "ControlBusMixTwo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlControlBusMix, ControlBusMixTwo), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixTwo_MetaData), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixTwo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixThree_MetaData[] = {
		{ "Category", "OscAudioControlControlBusMix" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixThree = { "ControlBusMixThree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlControlBusMix, ControlBusMixThree), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixThree_MetaData), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixThree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFour_MetaData[] = {
		{ "Category", "OscAudioControlControlBusMix" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFour = { "ControlBusMixFour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlControlBusMix, ControlBusMixFour), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFour_MetaData), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFive_MetaData[] = {
		{ "Category", "OscAudioControlControlBusMix" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFive = { "ControlBusMixFive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlControlBusMix, ControlBusMixFive), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFive_MetaData), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixSix_MetaData[] = {
		{ "Category", "OscAudioControlControlBusMix" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixSix = { "ControlBusMixSix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlControlBusMix, ControlBusMixSix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixSix_MetaData), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixSix_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixThree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixFive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewProp_ControlBusMixSix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlControlBusMix",
		Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::PropPointers),
		sizeof(FOscAudioControlControlBusMix),
		alignof(FOscAudioControlControlBusMix),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlControlBusMix()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlUsers;
class UScriptStruct* FOscAudioControlUsers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlUsers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlUsers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlUsers, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlUsers"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlUsers.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlUsers>()
{
	return FOscAudioControlUsers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecieveIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecieveIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecievePort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecievePort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendIP_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SendPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//used for keeping track of who will be using touch OSC\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used for keeping track of who will be using touch OSC" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlUsers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecieveIP_MetaData[] = {
		{ "Category", "OscAudioControlUsers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IP of the unreal Machine" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecieveIP = { "RecieveIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlUsers, RecieveIP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecieveIP_MetaData), Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecieveIP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecievePort_MetaData[] = {
		{ "Category", "OscAudioControlUsers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Port to reviece information on" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecievePort = { "RecievePort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlUsers, RecievePort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecievePort_MetaData), Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecievePort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendIP_MetaData[] = {
		{ "Category", "OscAudioControlUsers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The IP of the TouchOSC Machine" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendIP = { "SendIP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlUsers, SendIP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendIP_MetaData), Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendIP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendPort_MetaData[] = {
		{ "Category", "OscAudioControlUsers" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Port to send information on" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendPort = { "SendPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlUsers, SendPort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendPort_MetaData), Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendPort_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecieveIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_RecievePort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewProp_SendPort,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlUsers",
		Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::PropPointers),
		sizeof(FOscAudioControlUsers),
		alignof(FOscAudioControlUsers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlUsers()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlUsers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlUsers.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlUsers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation;
class UScriptStruct* FOscAudioControlAnimationInformation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlAnimationInformation"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlAnimationInformation>()
{
	return FOscAudioControlAnimationInformation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingSelection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartingSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for telling montages to play at specific charaters\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for telling montages to play at specific charaters" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlAnimationInformation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_AnimationMontage_MetaData[] = {
		{ "Category", "OscAudioControlAnimationInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_AnimationMontage = { "AnimationMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAnimationInformation, AnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_AnimationMontage_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_AnimationMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_StartingSelection_MetaData[] = {
		{ "Category", "OscAudioControlAnimationInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_StartingSelection = { "StartingSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAnimationInformation, StartingSelection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_StartingSelection_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_StartingSelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_CharacterSelection_MetaData[] = {
		{ "Category", "OscAudioControlAnimationInformation" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_CharacterSelection = { "CharacterSelection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAnimationInformation, CharacterSelection), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_CharacterSelection_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_CharacterSelection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_AnimationMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_StartingSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewProp_CharacterSelection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlAnimationInformation",
		Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::PropPointers),
		sizeof(FOscAudioControlAnimationInformation),
		alignof(FOscAudioControlAnimationInformation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn;
class UScriptStruct* FOscAudioControlAudioSpawn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn, (UObject*)Z_Construct_UPackage__Script_OscAudioControl(), TEXT("OscAudioControlAudioSpawn"));
	}
	return Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn.OuterSingleton;
}
template<> OSCAUDIOCONTROL_API UScriptStruct* StaticStruct<FOscAudioControlAudioSpawn>()
{
	return FOscAudioControlAudioSpawn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSoundInWorld_MetaData[];
#endif
		static void NewProp_UseSoundInWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSoundInWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawnAt_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorToSpawnAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherWorldSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherWorldSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlOrWatch_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlOrWatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SoundParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//used for tracking which sounds will play, and wether we use a blueprints audio componenet or a seperate component\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used for tracking which sounds will play, and wether we use a blueprints audio componenet or a seperate component" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscAudioControlAudioSpawn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld_MetaData[] = {
		{ "Category", "OscAudioControlAudioSpawn" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to affect an already existing sound in the world, or to spawn a new sound" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld_SetBit(void* Obj)
	{
		((FOscAudioControlAudioSpawn*)Obj)->UseSoundInWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld = { "UseSoundInWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOscAudioControlAudioSpawn), &Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundToSpawn_MetaData[] = {
		{ "Category", "Spawn behaviour" },
		{ "EditCondition", "!UseSoundInWorld" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundToSpawn = { "SoundToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, SoundToSpawn), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundToSpawn_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ActorToSpawnAt_MetaData[] = {
		{ "Category", "Spawn behaviour" },
		{ "EditCondition", "!UseSoundInWorld" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ActorToSpawnAt = { "ActorToSpawnAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, ActorToSpawnAt), Z_Construct_UEnum_OscAudioControl_EOscAudioControlActorSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ActorToSpawnAt_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ActorToSpawnAt_MetaData) }; // 2263297713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "OscAudioControlAudioSpawn" },
		{ "EditCondition", "!UseSoundInWorld" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset of the worlds spawn point in the world" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_Offset_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_Offset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_OtherWorldSound_MetaData[] = {
		{ "Category", "OscAudioControlAudioSpawn" },
		{ "EditCondition", "UseSoundInWorld" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor in the world with the sound component you would like to control (will grab the first sound componenet if there are multiple)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_OtherWorldSound = { "OtherWorldSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, OtherWorldSound), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_OtherWorldSound_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_OtherWorldSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_AudioTriggers_MetaData[] = {
		{ "Category", "OscAudioControlAudioSpawn" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_AudioTriggers = { "AudioTriggers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, AudioTriggers), Z_Construct_UScriptStruct_FOscAudioControlTriggers, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_AudioTriggers_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_AudioTriggers_MetaData) }; // 3481511739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ControlOrWatch_MetaData[] = {
		{ "Category", "Parameter Control" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to control the parameter, or to watch it's value" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ControlOrWatch = { "ControlOrWatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, ControlOrWatch), Z_Construct_UEnum_OscAudioControl_EOscAudioControlWatchSelection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ControlOrWatch_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ControlOrWatch_MetaData) }; // 2071425688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundParameterName_MetaData[] = {
		{ "Category", "Parameter Control" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the parameter to control or watch, only floats supported currently" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundParameterName = { "SoundParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, SoundParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundParameterName_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundParameterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ParameterRange_MetaData[] = {
		{ "Category", "Parameter Control" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ParameterRange = { "ParameterRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOscAudioControlAudioSpawn, ParameterRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ParameterRange_MetaData), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ParameterRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_UseSoundInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ActorToSpawnAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_OtherWorldSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_AudioTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ControlOrWatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_SoundParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewProp_ParameterRange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
		nullptr,
		&NewStructOps,
		"OscAudioControlAudioSpawn",
		Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::PropPointers),
		sizeof(FOscAudioControlAudioSpawn),
		alignof(FOscAudioControlAudioSpawn),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn()
	{
		if (!Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn.InnerSingleton, Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn.InnerSingleton;
	}
	void UOscAudioControlMixerLayout::StaticRegisterNativesUOscAudioControlMixerLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOscAudioControlMixerLayout);
	UClass* Z_Construct_UClass_UOscAudioControlMixerLayout_NoRegister()
	{
		return UOscAudioControlMixerLayout::StaticClass();
	}
	struct Z_Construct_UClass_UOscAudioControlMixerLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlBusArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// Data asset \\\\\\\\\n//Decides the orientation of the OSC fader section\n" },
#endif
		{ "IncludePath", "FOscAudioControlStructs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Data asset \\\\\\\\\nDecides the orientation of the OSC fader section" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray_Inner = { "ControlBusArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray_MetaData[] = {
		{ "Category", "OscAudioControlMixerLayout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tarray set to fixed size so the user can only add the amount of faders used in OSC\n" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tarray set to fixed size so the user can only add the amount of faders used in OSC" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray = { "ControlBusArray", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOscAudioControlMixerLayout, ControlBusArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray_MetaData), Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::NewProp_ControlBusArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscAudioControlMixerLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::ClassParams = {
		&UOscAudioControlMixerLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOscAudioControlMixerLayout()
	{
		if (!Z_Registration_Info_UClass_UOscAudioControlMixerLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOscAudioControlMixerLayout.OuterSingleton, Z_Construct_UClass_UOscAudioControlMixerLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOscAudioControlMixerLayout.OuterSingleton;
	}
	template<> OSCAUDIOCONTROL_API UClass* StaticClass<UOscAudioControlMixerLayout>()
	{
		return UOscAudioControlMixerLayout::StaticClass();
	}
	UOscAudioControlMixerLayout::UOscAudioControlMixerLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOscAudioControlMixerLayout);
	UOscAudioControlMixerLayout::~UOscAudioControlMixerLayout() {}
	void UOscAudioControlUserInfo::StaticRegisterNativesUOscAudioControlUserInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOscAudioControlUserInfo);
	UClass* Z_Construct_UClass_UOscAudioControlUserInfo_NoRegister()
	{
		return UOscAudioControlUserInfo::StaticClass();
	}
	struct Z_Construct_UClass_UOscAudioControlUserInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UsersList_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UsersList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsersList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UsersList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOscAudioControlUserInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OscAudioControl,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlUserInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscAudioControlUserInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for checking if the current active user is wanting to use TouchOSC\n" },
#endif
		{ "IncludePath", "FOscAudioControlStructs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for checking if the current active user is wanting to use TouchOSC" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_ValueProp = { "UsersList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOscAudioControlUsers, METADATA_PARAMS(0, nullptr) }; // 4147708165
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_Key_KeyProp = { "UsersList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "ModuleRelativePath", "Public/FOscAudioControlStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList = { "UsersList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOscAudioControlUserInfo, UsersList), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_MetaData), Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_MetaData) }; // 4147708165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOscAudioControlUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOscAudioControlUserInfo_Statics::NewProp_UsersList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOscAudioControlUserInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOscAudioControlUserInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOscAudioControlUserInfo_Statics::ClassParams = {
		&UOscAudioControlUserInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOscAudioControlUserInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlUserInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlUserInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UOscAudioControlUserInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOscAudioControlUserInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOscAudioControlUserInfo()
	{
		if (!Z_Registration_Info_UClass_UOscAudioControlUserInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOscAudioControlUserInfo.OuterSingleton, Z_Construct_UClass_UOscAudioControlUserInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOscAudioControlUserInfo.OuterSingleton;
	}
	template<> OSCAUDIOCONTROL_API UClass* StaticClass<UOscAudioControlUserInfo>()
	{
		return UOscAudioControlUserInfo::StaticClass();
	}
	UOscAudioControlUserInfo::UOscAudioControlUserInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOscAudioControlUserInfo);
	UOscAudioControlUserInfo::~UOscAudioControlUserInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::EnumInfo[] = {
		{ EOscAudioControlActorSelection_StaticEnum, TEXT("EOscAudioControlActorSelection"), &Z_Registration_Info_UEnum_EOscAudioControlActorSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2263297713U) },
		{ EOscAudioControlWatchSelection_StaticEnum, TEXT("EOscAudioControlWatchSelection"), &Z_Registration_Info_UEnum_EOscAudioControlWatchSelection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2071425688U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::ScriptStructInfo[] = {
		{ FOscAudioControlFaderInformation::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlFaderInformation_Statics::NewStructOps, TEXT("OscAudioControlFaderInformation"), &Z_Registration_Info_UScriptStruct_OscAudioControlFaderInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlFaderInformation), 660615023U) },
		{ FOscAudioControlTriggers::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlTriggers_Statics::NewStructOps, TEXT("OscAudioControlTriggers"), &Z_Registration_Info_UScriptStruct_OscAudioControlTriggers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlTriggers), 3481511739U) },
		{ FOscAudioControlConsoleCommand::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlConsoleCommand_Statics::NewStructOps, TEXT("OscAudioControlConsoleCommand"), &Z_Registration_Info_UScriptStruct_OscAudioControlConsoleCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlConsoleCommand), 2355247265U) },
		{ FOscAudioControlControlBusMix::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlControlBusMix_Statics::NewStructOps, TEXT("OscAudioControlControlBusMix"), &Z_Registration_Info_UScriptStruct_OscAudioControlControlBusMix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlControlBusMix), 2736790562U) },
		{ FOscAudioControlUsers::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlUsers_Statics::NewStructOps, TEXT("OscAudioControlUsers"), &Z_Registration_Info_UScriptStruct_OscAudioControlUsers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlUsers), 4147708165U) },
		{ FOscAudioControlAnimationInformation::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlAnimationInformation_Statics::NewStructOps, TEXT("OscAudioControlAnimationInformation"), &Z_Registration_Info_UScriptStruct_OscAudioControlAnimationInformation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlAnimationInformation), 2697520230U) },
		{ FOscAudioControlAudioSpawn::StaticStruct, Z_Construct_UScriptStruct_FOscAudioControlAudioSpawn_Statics::NewStructOps, TEXT("OscAudioControlAudioSpawn"), &Z_Registration_Info_UScriptStruct_OscAudioControlAudioSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOscAudioControlAudioSpawn), 3009762772U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOscAudioControlMixerLayout, UOscAudioControlMixerLayout::StaticClass, TEXT("UOscAudioControlMixerLayout"), &Z_Registration_Info_UClass_UOscAudioControlMixerLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOscAudioControlMixerLayout), 2166974824U) },
		{ Z_Construct_UClass_UOscAudioControlUserInfo, UOscAudioControlUserInfo::StaticClass, TEXT("UOscAudioControlUserInfo"), &Z_Registration_Info_UClass_UOscAudioControlUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOscAudioControlUserInfo), 3945161849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_1130183910(TEXT("/Script/OscAudioControl"),
		Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_TouchOSCBuildOut_TouchOSC_BuildOut_Plugins_OscAudioControl_Source_OscAudioControl_Public_FOscAudioControlStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
