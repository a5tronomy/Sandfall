#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EALSMovementAction.h"
#include "ALSNotifyStateMovementAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ALSV4_CPP_API UALSNotifyStateMovementAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EALSMovementAction MovementAction;
    
    UALSNotifyStateMovementAction();

};

