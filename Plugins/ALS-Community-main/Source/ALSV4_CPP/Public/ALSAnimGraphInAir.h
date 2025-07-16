#pragma once
#include "CoreMinimal.h"
#include "ALSAnimGraphInAir.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimGraphInAir {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bJumped;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float JumpPlayRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FallSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float LandPrediction;
    
    ALSV4_CPP_API FALSAnimGraphInAir();
};

