#pragma once
#include "CoreMinimal.h"
#include "EALSHipsDirection.h"
#include "ALSAnimGraphGrounded.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimGraphGrounded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    EALSHipsDirection TrackedHipsDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bShouldMove;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bRotateL;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool bRotateR;
    
    UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly)
    bool bPivot;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float RotateRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float RotationScale;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float DiagonalScaleAmount;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float WalkRunBlend;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float StandingPlayRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float CrouchingPlayRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float StrideBlend;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FYaw;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float BYaw;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float LYaw;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float RYaw;
    
    ALSV4_CPP_API FALSAnimGraphGrounded();
};

