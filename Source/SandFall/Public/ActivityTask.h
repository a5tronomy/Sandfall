#pragma once
#include "CoreMinimal.h"
#include "ActivityTask.generated.h"

USTRUCT(BlueprintType)
struct FActivityTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString TaskID;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FString> SubTasksID;
    
    SANDFALL_API FActivityTask();
};

