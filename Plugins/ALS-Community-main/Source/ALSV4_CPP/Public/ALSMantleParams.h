#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALSMantleParams.generated.h"

class UAnimMontage;
class UCurveVector;

USTRUCT(BlueprintType)
struct FALSMantleParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* AnimMontage;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* PositionCorrectionCurve;
    
    UPROPERTY(EditAnywhere)
    float StartingPosition;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    FVector StartingOffset;
    
    ALSV4_CPP_API FALSMantleParams();
};

