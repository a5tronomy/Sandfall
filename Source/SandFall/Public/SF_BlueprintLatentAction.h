#pragma once
#include "CoreMinimal.h"
#include "ExtendedObject.h"
#include "SF_BlueprintLatentAction.generated.h"

UCLASS(Blueprintable)
class SANDFALL_API USF_BlueprintLatentAction : public UExtendedObject {
    GENERATED_BODY()
public:
    USF_BlueprintLatentAction();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateOperation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartOperation();
    
    UFUNCTION(BlueprintCallable)
    void SetFinished();
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
};

