#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/DialogueTypes.h"
#include "Engine/EngineTypes.h"
#include "DialogueBlueprintHelpers.generated.h"

class UAudioComponent;
class UDialogueWave;
class UObject;
class USF_BlueprintLatentAction;
class USceneComponent;
class USoundAttenuation;
class USoundWave;
class UTextToSpeechEngineSubsystem;

UCLASS(BlueprintType)
class SANDFALL_API UDialogueBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDialogueBlueprintHelpers();

private:
    UFUNCTION(BlueprintCallable)
    static UAudioComponent* SpawnSandfallDialogueAttached(UDialogueWave* Dialogue, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* SpawnSandfallDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAudioComponent* SpawnSandfallDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlaySandfallDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlaySandfallDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, float VolumeMultiplier, float PitchMultiplier, float StartTime);
    
    UFUNCTION(BlueprintPure)
    static UTextToSpeechEngineSubsystem* GetTextToSpeechEngineSubsystem();
    
    UFUNCTION(BlueprintCallable)
    static USoundWave* GetFirstSoundFromDialogueWave(UDialogueWave* DialogueWave);
    
    UFUNCTION(BlueprintPure)
    static FDialogueContext GetDialogueWaveFirstContext(const UDialogueWave* _dialogueWave);
    
    UFUNCTION(BlueprintCallable)
    static void DevelopmentTextToSpeech(const FString& Text, USF_BlueprintLatentAction* LatentAction);
    
};

