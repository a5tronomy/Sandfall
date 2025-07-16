#pragma once
#include "CoreMinimal.h"
#include "TargetingDefaultResultData.h"
#include "TargetingRequestHandle.h"
#include "TargetingSortTask_Base.h"
#include "SimpleTargetingSortTask.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API USimpleTargetingSortTask : public UTargetingSortTask_Base {
    GENERATED_BODY()
public:
    USimpleTargetingSortTask();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    float BP_GetScoreForTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const;
    
};

