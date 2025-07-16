#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MassEntitySpawnDataScenario.generated.h"

class UMassEntitySpawnDataWrapper;

UCLASS()
class MASSGAMEPLAYCROWDEXTENDED_API UMassEntitySpawnDataScenario : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSet<UMassEntitySpawnDataWrapper*> ScenarioDataWrappers;
    
    UMassEntitySpawnDataScenario();

};

