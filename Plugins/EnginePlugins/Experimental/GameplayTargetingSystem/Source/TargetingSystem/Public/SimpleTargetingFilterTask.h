#pragma once
#include "CoreMinimal.h"
#include "TargetingDefaultResultData.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingRequestHandle.h"
#include "SimpleTargetingFilterTask.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API USimpleTargetingFilterTask : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
    USimpleTargetingFilterTask();

    UFUNCTION(BlueprintImplementableEvent)
    bool BP_ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData) const;
    
};

