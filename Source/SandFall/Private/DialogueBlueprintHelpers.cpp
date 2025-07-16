#include "DialogueBlueprintHelpers.h"

UDialogueBlueprintHelpers::UDialogueBlueprintHelpers() {
}

UAudioComponent* UDialogueBlueprintHelpers::SpawnSandfallDialogueAttached(UDialogueWave* Dialogue, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UAudioComponent* UDialogueBlueprintHelpers::SpawnSandfallDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bAutoDestroy) {
    return NULL;
}

UAudioComponent* UDialogueBlueprintHelpers::SpawnSandfallDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy) {
    return NULL;
}

void UDialogueBlueprintHelpers::PlaySandfallDialogueAtLocation(const UObject* WorldContextObject, UDialogueWave* Dialogue, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) {
}

void UDialogueBlueprintHelpers::PlaySandfallDialogue2D(const UObject* WorldContextObject, UDialogueWave* Dialogue, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
}

UTextToSpeechEngineSubsystem* UDialogueBlueprintHelpers::GetTextToSpeechEngineSubsystem() {
    return NULL;
}

USoundWave* UDialogueBlueprintHelpers::GetFirstSoundFromDialogueWave(UDialogueWave* DialogueWave) {
    return NULL;
}

FDialogueContext UDialogueBlueprintHelpers::GetDialogueWaveFirstContext(const UDialogueWave* _dialogueWave) {
    return FDialogueContext{};
}

void UDialogueBlueprintHelpers::DevelopmentTextToSpeech(const FString& Text, USF_BlueprintLatentAction* LatentAction) {
}


