#pragma once
#include "CoreMinimal.h"
#include "InterchangeStepCurve.generated.h"

USTRUCT()
struct INTERCHANGECOMMONPARSER_API FInterchangeStepCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<float> KeyTimes;
    
    FInterchangeStepCurve();
};

