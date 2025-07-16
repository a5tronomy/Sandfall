#pragma once
#include "CoreMinimal.h"
#include "AchievementsMap.generated.h"

USTRUCT(BlueprintType)
struct FAchievementsMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> AchievementsMap;
    
    SANDFALL_API FAchievementsMap();
};

