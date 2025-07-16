#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ALSAnimGraphFootIK.generated.h"

USTRUCT(BlueprintType)
struct FALSAnimGraphFootIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FootLock_L_Alpha;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float FootLock_R_Alpha;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool UseFootLockCurve_L;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    bool UseFootLockCurve_R;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector FootLock_L_Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector TargetFootLock_R_Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector FootLock_R_Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator TargetFootLock_L_Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator FootLock_L_Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator TargetFootLock_R_Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator FootLock_R_Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector FootOffset_L_Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector FootOffset_R_Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator FootOffset_L_Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FRotator FootOffset_R_Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    FVector PelvisOffset;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    float PelvisAlpha;
    
    ALSV4_CPP_API FALSAnimGraphFootIK();
};

