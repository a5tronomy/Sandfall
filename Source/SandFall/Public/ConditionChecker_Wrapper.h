#pragma once
#include "CoreMinimal.h"
#include "ConditionChecker_Wrapper.generated.h"

class UConditionChecker;

USTRUCT(BlueprintType)
struct FConditionChecker_Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UConditionChecker* ConditionChecker;
    
    SANDFALL_API FConditionChecker_Wrapper();
};

