#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EALSGait.h"
#include "EALSMovementAction.h"
#include "EALSMovementState.h"
#include "EALSStance.h"
#include "EALSViewMode.h"
#include "ALSPlayerCameraBehavior.generated.h"

UCLASS(NonTransient)
class ALSV4_CPP_API UALSPlayerCameraBehavior : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EALSMovementState MovementState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EALSMovementAction MovementAction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bLookingDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bVelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAiming;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EALSGait Gait;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EALSStance Stance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EALSViewMode ViewMode;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRightShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugView;
    
    UALSPlayerCameraBehavior();

};

