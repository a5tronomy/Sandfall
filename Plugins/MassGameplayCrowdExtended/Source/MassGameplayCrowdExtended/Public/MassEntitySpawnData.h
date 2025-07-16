#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "MassEntitySpawnLinkData.h"
#include "MassEntitySpawnVisualData.h"
#include "MassEntitySpawnData.generated.h"

USTRUCT()
struct FMassEntitySpawnData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FTransform SpawnTransform;
    
    UPROPERTY(EditDefaultsOnly)
    FMassEntitySpawnVisualData VisualData;
    
    UPROPERTY(EditDefaultsOnly)
    FMassEntitySpawnLinkData LinkData;
    
    MASSGAMEPLAYCROWDEXTENDED_API FMassEntitySpawnData();
};

