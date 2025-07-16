#pragma once
#include "CoreMinimal.h"
#include "TargetingTask.h"
#include "TargetingFilterTask_BasicFilterTemplate.generated.h"

UCLASS(Abstract, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask {
    GENERATED_BODY()
public:
    UTargetingFilterTask_BasicFilterTemplate();

};

