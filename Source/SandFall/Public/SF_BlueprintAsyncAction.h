#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnCompletedDelegate.h"
#include "SF_BlueprintAsyncAction.generated.h"

class UObject;
class USF_BlueprintAsyncAction;
class USF_BlueprintLatentAction;

UCLASS()
class USF_BlueprintAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCompleted OnFinished;
    
    USF_BlueprintAsyncAction();

    UFUNCTION(BlueprintCallable)
    static USF_BlueprintAsyncAction* WaitAsyncAction(USF_BlueprintLatentAction* LatentAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USF_BlueprintAsyncAction* StartWaitAsyncAction(UObject* WorldContextObject, const FString& DebugReason, USF_BlueprintLatentAction*& NewLatentAction);
    
};

