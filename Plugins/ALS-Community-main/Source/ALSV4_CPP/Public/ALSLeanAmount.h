#pragma once
#include "CoreMinimal.h"
#include "ALSLeanAmount.generated.h"

USTRUCT(BlueprintType)
struct FALSLeanAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float LR;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FB;
    
    ALSV4_CPP_API FALSLeanAmount();
};

