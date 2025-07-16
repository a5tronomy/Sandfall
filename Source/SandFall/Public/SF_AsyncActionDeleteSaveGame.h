#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAsyncHandleDeleteSaveGameDelegate.h"
#include "SF_AsyncActionDeleteSaveGame.generated.h"

class UObject;
class USF_AsyncActionDeleteSaveGame;

UCLASS()
class SANDFALL_API USF_AsyncActionDeleteSaveGame : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAsyncHandleDeleteSaveGame Completed;
    
    USF_AsyncActionDeleteSaveGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USF_AsyncActionDeleteSaveGame* AsyncDeleteGamesFromSlot(UObject* WorldContextObject, const TArray<FString>& SlotNames, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USF_AsyncActionDeleteSaveGame* AsyncDeleteGameFromSlot(UObject* WorldContextObject, const FString& SlotName, const int32 UserIndex);
    
};

