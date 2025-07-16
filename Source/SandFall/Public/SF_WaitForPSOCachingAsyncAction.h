#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnPSOCachingDoneDelegate.h"
#include "SF_WaitForPSOCachingAsyncAction.generated.h"

class UObject;
class USF_WaitForPSOCachingAsyncAction;

UCLASS()
class SANDFALL_API USF_WaitForPSOCachingAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPSOCachingDone OnCachingDone;
    
    UPROPERTY(BlueprintAssignable)
    FOnPSOCachingDone OnCachingTakingMoreTime;
    
    USF_WaitForPSOCachingAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USF_WaitForPSOCachingAsyncAction* WaitForPSOCaching(UObject* WorldContextObject, float MinWaitingTime);
    
};

