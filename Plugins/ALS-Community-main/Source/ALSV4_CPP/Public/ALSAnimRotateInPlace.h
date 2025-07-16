#pragma once
#include "CoreMinimal.h"
#include "ALSAnimRotateInPlace.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimRotateInPlace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateMinThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateMaxThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimYawRateMinRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimYawRateMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPlayRate;
    
    ALSV4_CPP_API FALSAnimRotateInPlace();
};

