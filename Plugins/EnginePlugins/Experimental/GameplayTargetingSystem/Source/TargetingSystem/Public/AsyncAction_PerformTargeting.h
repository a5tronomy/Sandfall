#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PerformTargetingReadyDelegate.h"
#include "TargetingRequestHandle.h"
#include "AsyncAction_PerformTargeting.generated.h"

class AActor;
class UAsyncAction_PerformTargeting;
class UTargetingPreset;

UCLASS()
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPerformTargetingReady Targeted;
    
private:
    UPROPERTY()
    UTargetingPreset* TargetingPreset;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> WeakSourceActor;
    
    UPROPERTY()
    TArray<AActor*> InitialTargets;
    
    UPROPERTY()
    FTargetingRequestHandle TargetingHandle;
    
    UPROPERTY()
    uint8 bUseAsyncTargeting: 1;
    
public:
    UAsyncAction_PerformTargeting();

    UFUNCTION(BlueprintCallable)
    static UAsyncAction_PerformTargeting* PerformTargetingRequest(AActor* SourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_PerformTargeting* PerformFilteringRequest(AActor* SourceActor, UTargetingPreset* NewTargetingPreset, bool NewBUseAsyncTargeting, const TArray<AActor*> InTargets);
    
    UFUNCTION(BlueprintPure)
    FTargetingRequestHandle GetTargetingHandle() const;
    
};

