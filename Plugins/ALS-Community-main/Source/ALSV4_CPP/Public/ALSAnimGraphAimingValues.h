#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ALSAnimGraphAimingValues.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimGraphAimingValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator SmoothedAimingRotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator SpineRotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector2D AimingAngle;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float AimSweepTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float InputYawOffsetTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float ForwardYawTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float LeftYawTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float RightYawTime;
    
    ALSV4_CPP_API FALSAnimGraphAimingValues();
};

