#pragma once
#include "CoreMinimal.h"
#include "TargetingTask.h"
#include "TargetingSortTask_Base.generated.h"

UCLASS(Abstract, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingSortTask_Base : public UTargetingTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bAscending: 1;
    
public:
    UTargetingSortTask_Base();

};

