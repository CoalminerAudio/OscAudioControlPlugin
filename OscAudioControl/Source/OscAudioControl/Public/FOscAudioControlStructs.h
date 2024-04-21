// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SoundControlBusMix.h"
#include "SoundControlBus.h"
#include "Engine/DataAsset.h"
#include "Containers/Array.h"
#include "Containers/StaticArray.h"
#include "Animation/AnimMontage.h"
#include "FOscAudioControlStructs.generated.h"

/*This C++ class is used to define mutliple enums, structs, and data assets for the OSC AudioControl plug in to use

*/
//// Enumerators \\\\
//Enum for switching on selected world actor to spawn sounds at via touchOSC
UENUM(BlueprintType)
enum EOscAudioControlActorSelection
{
	ActorOne UMETA(DisplayName = "Actor One"),
	ActorTwo UMETA(DisplayName = "Actor Two"),
	ActorThree UMETA(DisplayName = "Actor Three"),
	ActorFour UMETA(DisplayName = "Actor Four"),
};

//Enum for selecting whether to control the parameter of a sound, or watch the parameter of a sounds output
UENUM(BlueprintType)
enum EOscAudioControlWatchSelection
{
	ChoiceOne UMETA(DisplayName = "Control Parameter"),
	ChoiceTwo UMETA(DisplayName = "Watch Output")
};


//// Structs \\\\
//Info for keeping track of faders values over mute and control
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlFaderInformation
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBus* ControlBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Controlled = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Muted = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastControlledValue = 0;

};

//Used for keeping track of different custom triggers to use in metasound testing
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlTriggers
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom triggers")
	FName CustomTriggerOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom triggers")
	FName CustomTriggerTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom triggers")
	FName CustomTriggerThree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom triggers")
	FName CustomTriggerFour;

};

//Used for telling OSC which console commands to trigger
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlConsoleCommand
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ConsoleCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Switch between adding a 0 and 1 to this console command when activating"))
	bool Index01;
};

//Used for telling Touch OSC which control bus Mixes should be used
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlControlBusMix
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBusMix* ControlBusMixOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBusMix* ControlBusMixTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBusMix* ControlBusMixThree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBusMix* ControlBusMixFour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBusMix* ControlBusMixFive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundControlBusMix* ControlBusMixSix;

};

//used for keeping track of who will be using touch OSC
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlUsers
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "The IP of the unreal Machine"))
	FString RecieveIP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Port to reviece information on"))
	int RecievePort = 8000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "The IP of the TouchOSC Machine"))
	FString SendIP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Port to send information on"))
	int SendPort = 9000;
};

//Used for telling montages to play at specific charaters
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlAnimationInformation
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* AnimationMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StartingSelection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACharacter* CharacterSelection;
};

//used for tracking which sounds will play, and wether we use a blueprints audio componenet or a seperate component
USTRUCT(BlueprintType)
struct OSCAUDIOCONTROL_API FOscAudioControlAudioSpawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "Whether to affect an already existing sound in the world, or to spawn a new sound"))
	bool UseSoundInWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!UseSoundInWorld", Category = "Spawn behaviour"))
	USoundBase* SoundToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!UseSoundInWorld", Category = "Spawn behaviour"))
	TEnumAsByte<EOscAudioControlActorSelection> ActorToSpawnAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!UseSoundInWorld", ToolTip = "Offset of the worlds spawn point in the world"))
	FVector Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseSoundInWorld", ToolTip = "Actor in the world with the sound component you would like to control (will grab the first sound componenet if there are multiple)"))
	AActor* OtherWorldSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOscAudioControlTriggers AudioTriggers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameter Control", meta = (ToolTip = "Whether to control the parameter, or to watch it's value"))
	TEnumAsByte<EOscAudioControlWatchSelection> ControlOrWatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameter Control", meta = (ToolTip = "Name of the parameter to control or watch, only floats supported currently"))
	FName SoundParameterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameter Control")
	FVector2D ParameterRange;
};

//// Data asset \\\\
//Decides the orientation of the OSC fader section
UCLASS(Blueprintable, BlueprintType)
class OSCAUDIOCONTROL_API UOscAudioControlMixerLayout : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	//Tarray set to fixed size so the user can only add the amount of faders used in OSC
	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	TArray<USoundControlBus*> ControlBusArray
	{
		nullptr, 
		nullptr, 
		nullptr, 
		nullptr, 
		nullptr, 
		nullptr, 
		nullptr, 
		nullptr
	};
};

//Used for checking if the current active user is wanting to use TouchOSC
UCLASS(Blueprintable, BlueprintType)
class OSCAUDIOCONTROL_API UOscAudioControlUserInfo : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	TMap<FString, FOscAudioControlUsers> UsersList{};
};

class OSCAUDIOCONTROL_API FOscAudioControlStructs
{
public:
	FOscAudioControlStructs();
	~FOscAudioControlStructs();
};
