#pragma once
#include "CoreMinimal.h"
#include "ALSMovementSettings.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FALSMovementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveVector* MovementCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* RotationRateCurve;
    
    ALSV4_CPP_API FALSMovementSettings();
};

