#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EALSGroundedEntryState.h"
#include "ALSAnimNotifyGroundedEntryState.generated.h"

UCLASS(CollapseCategories)
class ALSV4_CPP_API UALSAnimNotifyGroundedEntryState : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EALSGroundedEntryState GroundedEntryState;
    
    UALSAnimNotifyGroundedEntryState();

};

