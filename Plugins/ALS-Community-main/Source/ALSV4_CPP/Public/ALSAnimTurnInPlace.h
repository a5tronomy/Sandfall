#pragma once
#include "CoreMinimal.h"
#include "ALSTurnInPlaceAsset.h"
#include "ALSAnimTurnInPlace.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimTurnInPlace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnCheckMinAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Turn180Threshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimYawRateLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElapsedDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinAngleDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAngleDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset N_TurnIP_L90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset N_TurnIP_R90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset N_TurnIP_L180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset N_TurnIP_R180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset CLF_TurnIP_L90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset CLF_TurnIP_R90;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset CLF_TurnIP_L180;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FALSTurnInPlaceAsset CLF_TurnIP_R180;
    
    ALSV4_CPP_API FALSAnimTurnInPlace();
};

