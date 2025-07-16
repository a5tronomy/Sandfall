#pragma once
#include "CoreMinimal.h"
#include "StatsArray.generated.h"

USTRUCT(BlueprintType)
struct FStatsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> Array;
    
    SANDFALL_API FStatsArray();
};

