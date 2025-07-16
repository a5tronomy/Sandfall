#pragma once
#include "CoreMinimal.h"
#include "ALSAnimConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimatedWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimatedRunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimatedSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimatedCrouchSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VelocityBlendInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GroundedLeanInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InAirLeanInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SmoothedAimingRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputYawOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TriggerPivotSpeedLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FootHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DynamicTransitionThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IK_TraceDistanceAboveFoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IK_TraceDistanceBelowFoot;
    
    ALSV4_CPP_API FALSAnimConfiguration();
};

