#pragma once
#include "CoreMinimal.h"
#include "TargetingDefaultResultData.h"
#include "TargetingDefaultResultsSet.generated.h"

USTRUCT()
struct FTargetingDefaultResultsSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTargetingDefaultResultData> TargetResults;
    
    TARGETINGSYSTEM_API FTargetingDefaultResultsSet();
};

