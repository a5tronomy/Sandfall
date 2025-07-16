#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MassEntitySpawnVisualData.generated.h"

USTRUCT()
struct FMassEntitySpawnVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FLinearColor> VisualMasks;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, float> VisualScalars;
    
    MASSGAMEPLAYCROWDEXTENDED_API FMassEntitySpawnVisualData();
};

