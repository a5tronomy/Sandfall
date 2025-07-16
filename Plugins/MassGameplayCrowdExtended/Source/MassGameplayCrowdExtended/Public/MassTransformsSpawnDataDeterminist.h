#pragma once
#include "CoreMinimal.h"
#include "MassSpawnerTypes.h"
#include "MassTransformsSpawnDataDeterminist.generated.h"

USTRUCT()
struct FMassTransformsSpawnDataDeterminist : public FMassTransformsSpawnData {
    GENERATED_BODY()
public:
    MASSGAMEPLAYCROWDEXTENDED_API FMassTransformsSpawnDataDeterminist();
};

