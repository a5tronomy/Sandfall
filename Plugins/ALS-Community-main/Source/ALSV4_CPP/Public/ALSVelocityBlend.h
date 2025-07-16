#pragma once
#include "CoreMinimal.h"
#include "ALSVelocityBlend.generated.h"

USTRUCT(BlueprintType)
struct FALSVelocityBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float F;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float B;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float L;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float R;
    
    ALSV4_CPP_API FALSVelocityBlend();
};

