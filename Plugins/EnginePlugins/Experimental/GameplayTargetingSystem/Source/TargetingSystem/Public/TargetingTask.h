#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TargetingRequestHandle.h"
#include "TargetingTask.generated.h"

class UTargetingSubsystem;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class TARGETINGSYSTEM_API UTargetingTask : public UObject {
    GENERATED_BODY()
public:
    UTargetingTask();

protected:
    UFUNCTION(BlueprintPure)
    UTargetingSubsystem* GetTargetingSubsystem(const FTargetingRequestHandle& TargetingHandle) const;
    
};

