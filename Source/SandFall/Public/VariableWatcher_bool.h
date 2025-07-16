#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VariableWatcher_bool.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UVariableWatcher_bool : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FValueChangedEvent, bool, NewValue);
    
    UPROPERTY(BlueprintAssignable)
    FValueChangedEvent OnValueChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Value;
    
    UVariableWatcher_bool();

private:
    UFUNCTION(BlueprintCallable)
    void SetValue(bool _newValue);
    
    UFUNCTION(BlueprintPure)
    bool GetValue();
    
};

