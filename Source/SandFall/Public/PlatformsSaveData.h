#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlatformsSaveData.generated.h"

UCLASS()
class SANDFALL_API UPlatformsSaveData : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, float> FailedAchievementsMap;
    
    UPROPERTY()
    FString LatestSaveGameLoaded;
    
public:
    UPlatformsSaveData();

};

