#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EALSMovementState.h"
#include "EALSStance.h"
#include "ALSNotifyStateEarlyBlendOut.generated.h"

class UAnimMontage;

UCLASS(CollapseCategories, EditInlineNew)
class ALSV4_CPP_API UALSNotifyStateEarlyBlendOut : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* ThisMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckMovementState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EALSMovementState MovementStateEquals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EALSStance StanceEquals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCheckMovementInput;
    
    UALSNotifyStateEarlyBlendOut();

};

