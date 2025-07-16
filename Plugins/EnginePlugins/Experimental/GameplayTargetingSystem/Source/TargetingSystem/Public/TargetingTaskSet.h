#pragma once
#include "CoreMinimal.h"
#include "TargetingTaskSet.generated.h"

class UTargetingTask;

USTRUCT(BlueprintType)
struct FTargetingTaskSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UTargetingTask*> Tasks;
    
    TARGETINGSYSTEM_API FTargetingTaskSet();
};

