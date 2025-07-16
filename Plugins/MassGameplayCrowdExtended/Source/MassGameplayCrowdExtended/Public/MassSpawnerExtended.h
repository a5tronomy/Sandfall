#pragma once
#include "CoreMinimal.h"
#include "MassSpawner.h"
#include "MassSpawnerExtended.generated.h"

UCLASS()
class MASSGAMEPLAYCROWDEXTENDED_API AMassSpawnerExtended : public AMassSpawner {
    GENERATED_BODY()
public:
    AMassSpawnerExtended();

    UFUNCTION(BlueprintCallable)
    void DoDeterministicSpawning();
    
};