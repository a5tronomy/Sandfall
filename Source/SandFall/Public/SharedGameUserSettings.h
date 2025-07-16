#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SF_EngineSettingsData.h"
#include "SF_SettingsData.h"
#include "SharedGameUserSettings.generated.h"

UCLASS()
class SANDFALL_API USharedGameUserSettings : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSF_SettingsData GameSettingsData;
    
    UPROPERTY()
    FSF_EngineSettingsData EngineSettingsData;
    
public:
    USharedGameUserSettings();

};

