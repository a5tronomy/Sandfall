#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncHandlePlatformsSaveDataDelegate.h"
#include "AsyncActionHandlePlatformsSaveData.generated.h"

class UAsyncActionHandlePlatformsSaveData;
class UObject;

UCLASS()
class SANDFALL_API UAsyncActionHandlePlatformsSaveData : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnAsyncHandlePlatformsSaveData OnCompleted;
    
public:
    UAsyncActionHandlePlatformsSaveData();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncActionHandlePlatformsSaveData* AsyncSaveLatestGameSaveLoaded(UObject* WorldContextObject, const FString& SaveName);
    
};

