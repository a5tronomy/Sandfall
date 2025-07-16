#pragma once
#include "CoreMinimal.h"
#include "MassEntitySpawnDataGeneratorBase.h"
#include "MassEntitySpawnDataGeneratorDeterministic.generated.h"

class UMassEntitySpawnDataScenario;

UCLASS(EditInlineNew)
class MASSGAMEPLAYCROWDEXTENDED_API UMassEntitySpawnDataGeneratorDeterministic : public UMassEntitySpawnDataGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMassEntitySpawnDataScenario* SpawnScenarioData;
    
public:
    UMassEntitySpawnDataGeneratorDeterministic();

};

