#pragma once
#include "CoreMinimal.h"
#include "InterchangeCurveKey.h"
#include "InterchangeCurve.generated.h"

USTRUCT()
struct INTERCHANGECOMMONPARSER_API FInterchangeCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInterchangeCurveKey> Keys;
    
    FInterchangeCurve();
};

