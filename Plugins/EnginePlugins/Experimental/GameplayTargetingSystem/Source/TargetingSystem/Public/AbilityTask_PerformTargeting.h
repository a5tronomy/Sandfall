#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "TargetReadyDelegateDelegate.h"
#include "AbilityTask_PerformTargeting.generated.h"

class AActor;
class UAbilityTask_PerformTargeting;
class UGameplayAbility;
class UTargetingPreset;

UCLASS()
class TARGETINGSYSTEM_API UAbilityTask_PerformTargeting : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTargetReadyDelegate OnTargetReady;
    
    UAbilityTask_PerformTargeting();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PerformTargeting* PerformTargetingRequest(UGameplayAbility* OwningAbility, UTargetingPreset* InTargetingPreset, bool bAllowAsync);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PerformTargeting* PerformFilteringRequest(UGameplayAbility* OwningAbility, UTargetingPreset* TargetingPreset, const TArray<AActor*> InTargets, bool bAllowAsync);
    
};

