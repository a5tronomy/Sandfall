#pragma once
#include "CoreMinimal.h"
#include "ExtendedObject.h"
#include "OnGameActionExecutionFinishedDelegate.h"
#include "GameActionInstance.generated.h"

class APlayerController;
class UGameAction;

UCLASS(Abstract, Blueprintable)
class SANDFALL_API UGameActionInstance : public UExtendedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UGameAction* GameAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnGameActionExecutionFinished OnGameActionExecutionFinishedDelegate;
    
    UGameActionInstance();

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldTriggerAutoSaveAfterExecution() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldBlockAutoSaveDuringExecution() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteGameAction(const APlayerController* Controller);
    
};

