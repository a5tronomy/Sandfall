#pragma once
#include "CoreMinimal.h"
#include "MassSpawner.h"
#include "MassSpawnerExtended.generated.h"

UCLASS()
class MASSGAMEPLAYCROWDEXTENDED_API AMassSpawnerExtended : public AMassSpawner {
    GENERATED_BODY()
public:
    AMassSpawnerExtended(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DoDeterministicSpawning();
    
};

