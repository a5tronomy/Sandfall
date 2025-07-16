#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ConsoleVariablesOverrideProfile.h"
#include "EDialogueTextSceneType.h"
#include "SF_SettingsData.h"
#include "SF_GameConfigurationSettings.generated.h"

class UPrimaryDataAsset;
class USF_DialogueSubtitleSpeakersData;
class USF_LoadingScreenWidget;
class USF_SubtitlesWidget;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SANDFALL_API USF_GameConfigurationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<UPrimaryDataAsset> ProjectConfiguration;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USF_LoadingScreenWidget> DefaultLoadingScreenWidget;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USF_SubtitlesWidget> DefaultSubtitlesWidget;
    
    UPROPERTY(Config, EditAnywhere)
    float SubtitleMinDisplayTime;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<USF_DialogueSubtitleSpeakersData> SubtitleSpeakerData;
    
    UPROPERTY(Config, EditAnywhere)
    TSet<EDialogueTextSceneType> ForcedSubtitleDisplayScene;
    
    UPROPERTY(Config, EditAnywhere)
    FSF_SettingsData DefaultSettingsValue;
    
    UPROPERTY(Config, EditAnywhere)
    FConsoleVariablesOverrideProfile CvarOverrideDuringLevelLoading;
    
    UPROPERTY(Config, EditAnywhere)
    float SizeAudioStreamingCacheTrimRequest;
    
    USF_GameConfigurationSettings();

};

