#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ALSMantleAsset.generated.h"

class UAnimMontage;
class UCurveVector;

USTRUCT(BlueprintType)
struct FALSMantleAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimMontage* AnimMontage;
    
    UPROPERTY(EditAnywhere)
    UCurveVector* PositionCorrectionCurve;
    
    UPROPERTY(EditAnywhere)
    FVector StartingOffset;
    
    UPROPERTY(EditAnywhere)
    float LowHeight;
    
    UPROPERTY(EditAnywhere)
    float LowPlayRate;
    
    UPROPERTY(EditAnywhere)
    float LowStartPosition;
    
    UPROPERTY(EditAnywhere)
    float HighHeight;
    
    UPROPERTY(EditAnywhere)
    float HighPlayRate;
    
    UPROPERTY(EditAnywhere)
    float HighStartPosition;
    
    ALSV4_CPP_API FALSMantleAsset();
};

