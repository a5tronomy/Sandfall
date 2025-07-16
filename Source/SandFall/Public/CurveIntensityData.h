#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurveIntensityData.generated.h"

USTRUCT(BlueprintType)
struct FCurveIntensityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float IntensityWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval IntensityClamp;
    
    SANDFALL_API FCurveIntensityData();
};

