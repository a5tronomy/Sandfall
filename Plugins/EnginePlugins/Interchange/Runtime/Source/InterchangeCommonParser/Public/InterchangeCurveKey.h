#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCurveInterpMode.h"
#include "EInterchangeCurveTangentMode.h"
#include "EInterchangeCurveTangentWeightMode.h"
#include "InterchangeCurveKey.generated.h"

USTRUCT()
struct INTERCHANGECOMMONPARSER_API FInterchangeCurveKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    EInterchangeCurveInterpMode InterpMode;
    
    UPROPERTY()
    EInterchangeCurveTangentMode TangentMode;
    
    UPROPERTY()
    EInterchangeCurveTangentWeightMode TangentWeightMode;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    float ArriveTangent;
    
    UPROPERTY()
    float ArriveTangentWeight;
    
    UPROPERTY()
    float LeaveTangent;
    
    UPROPERTY()
    float LeaveTangentWeight;
    
    FInterchangeCurveKey();
};

