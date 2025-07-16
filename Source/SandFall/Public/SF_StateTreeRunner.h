#pragma once
#include "CoreMinimal.h"
#include "StateTreeEvents.h"
#include "StateTreeInstanceData.h"
#include "StateTreeReference.h"
#include "ExtendedObject.h"
#include "SF_StateTreeRunner.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API USF_StateTreeRunner : public UExtendedObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FStateTreeReference StateTreeRef;
    
    UPROPERTY(Transient)
    FStateTreeInstanceData InstanceData;
    
    USF_StateTreeRunner();

    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopLogic();
    
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
    UFUNCTION(BlueprintCallable)
    void SendStateTreeEvent(const FStateTreeEvent& Event);
    
};

