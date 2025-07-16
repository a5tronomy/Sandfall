#pragma once
#include "CoreMinimal.h"
#include "ALSMantleTraceSettings.generated.h"

USTRUCT(BlueprintType)
struct FALSMantleTraceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxLedgeHeight;
    
    UPROPERTY(EditAnywhere)
    float MinLedgeHeight;
    
    UPROPERTY(EditAnywhere)
    float ReachDistance;
    
    UPROPERTY(EditAnywhere)
    float ForwardTraceRadius;
    
    UPROPERTY(EditAnywhere)
    float DownwardTraceRadius;
    
    ALSV4_CPP_API FALSMantleTraceSettings();
};

