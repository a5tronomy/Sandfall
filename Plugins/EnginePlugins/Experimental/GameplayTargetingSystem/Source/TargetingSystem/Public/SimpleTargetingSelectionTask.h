#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "TargetingRequestHandle.h"
#include "TargetingSourceContext.h"
#include "TargetingTask.h"
#include "SimpleTargetingSelectionTask.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TARGETINGSYSTEM_API USimpleTargetingSelectionTask : public UTargetingTask {
    GENERATED_BODY()
public:
    USimpleTargetingSelectionTask();

    UFUNCTION(BlueprintImplementableEvent)
    void SelectTargets(const FTargetingRequestHandle& TargetingHandle, const FTargetingSourceContext& SourceContext) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AddTargetActor(const FTargetingRequestHandle& TargetingHandle, AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AddHitResult(const FTargetingRequestHandle& TargetingHandle, const FHitResult& HitResult) const;
    
};

