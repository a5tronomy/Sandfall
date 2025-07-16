#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/HitResult.h"
#include "CollisionQueryTaskData.h"
#include "TargetingRequestDynamicDelegateDelegate.h"
#include "TargetingRequestHandle.h"
#include "TargetingSourceContext.h"
#include "TargetingSubsystem.generated.h"

class AActor;
class UTargetingPreset;

UCLASS(BlueprintType, MinimalAPI)
class UTargetingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FTargetingRequestHandle> AsyncTargetingRequests;
    
public:
    UTargetingSubsystem();

    UFUNCTION(BlueprintCallable)
    FTargetingRequestHandle StartAsyncTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAsyncTargetingRequestWithHandle(UPARAM(Ref) FTargetingRequestHandle& TargetingHandle);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, const FCollisionQueryTaskData& CollisionQueryDataOverride);
    
    UFUNCTION(BlueprintPure)
    FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets) const;
    
    UFUNCTION(BlueprintPure)
    void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets) const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteTargetingRequest(const UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FTargetingRequestDynamicDelegate CompletionDynamicDelegate);
    
};

