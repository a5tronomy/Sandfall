#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ExtendedGameInstance.generated.h"

UCLASS(NonTransient)
class SANDFALL_API UExtendedGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UExtendedGameInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePostInitSubsystemCollection();
    
};

