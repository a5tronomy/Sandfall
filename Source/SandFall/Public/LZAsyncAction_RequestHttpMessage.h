#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnHttpRequestCompletedDelegate.h"
#include "LZAsyncAction_RequestHttpMessage.generated.h"

class ULZAsyncAction_RequestHttpMessage;
class UObject;

UCLASS()
class SANDFALL_API ULZAsyncAction_RequestHttpMessage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnHttpRequestCompleted Completed;
    
    ULZAsyncAction_RequestHttpMessage();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULZAsyncAction_RequestHttpMessage* AsyncRequestHTTP(UObject* WorldContextObject, const FString& URL);
    
};

