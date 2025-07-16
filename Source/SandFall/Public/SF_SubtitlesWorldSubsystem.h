#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SF_SubtitlesWorldSubsystem.generated.h"

class UConfigurableGameUserSettings;
class USF_DialogueSubtitleSpeakersData;
class USF_SubtitlesWidget;

UCLASS(BlueprintType)
class SANDFALL_API USF_SubtitlesWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USF_SubtitlesWidget* CurrentSubtitlesWidget;
    
    UPROPERTY()
    USF_DialogueSubtitleSpeakersData* SpeakersData;
    
public:
    USF_SubtitlesWorldSubsystem();

private:
    UFUNCTION()
    void UpdateFromGameUserSettings(const UConfigurableGameUserSettings* Settings);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableForcedSubtitle();
    
    UFUNCTION(BlueprintCallable)
    void DisableForcedSubtitle();
    
    UFUNCTION(BlueprintCallable)
    void ClearSubtitles();
    
};

