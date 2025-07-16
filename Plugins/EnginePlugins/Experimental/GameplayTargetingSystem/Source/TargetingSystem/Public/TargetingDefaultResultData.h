#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "TargetingDefaultResultData.generated.h"

USTRUCT(BlueprintType)
struct FTargetingDefaultResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly)
    float Score;
    
    TARGETINGSYSTEM_API FTargetingDefaultResultData();
};

