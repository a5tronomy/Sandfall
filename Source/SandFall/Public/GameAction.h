#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "GameAction.generated.h"

class UGameActionInstance;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SANDFALL_API UGameAction : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UGameAction();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<UGameActionInstance> GetInstanceClass();
    
};

