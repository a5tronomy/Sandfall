#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "CameraModifier_RotationLimiter.generated.h"

UCLASS()
class SANDFALL_API UCameraModifier_RotationLimiter : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YaxMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RollMax;
    
    UCameraModifier_RotationLimiter();

};

