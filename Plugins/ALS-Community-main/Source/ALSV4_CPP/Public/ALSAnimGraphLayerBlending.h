#pragma once
#include "CoreMinimal.h"
#include "ALSAnimGraphLayerBlending.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimGraphLayerBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    int32 OverlayOverrideState;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float EnableAimOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float BasePose_N;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float BasePose_CLF;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_L;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_L_Add;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_L_LS;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_L_MS;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_R;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_R_Add;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_R_LS;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Arm_R_MS;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Hand_L;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Hand_R;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Legs;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Legs_Add;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Pelvis;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Pelvis_Add;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Spine;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Spine_Add;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Head;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float Head_Add;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float EnableHandIK_L;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float EnableHandIK_R;
    
    ALSV4_CPP_API FALSAnimGraphLayerBlending();
};

