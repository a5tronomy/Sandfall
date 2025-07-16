#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECrowdPlacementType.h"
#include "MassEntitySpawnDataWrapper.generated.h"

class UDataTable;
class UMassEntityConfigAsset;

UCLASS()
class MASSGAMEPLAYCROWDEXTENDED_API UMassEntitySpawnDataWrapper : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ECrowdPlacementType PlacementType;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UMassEntityConfigAsset> EntityType;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SpawnData;
    
    UMassEntitySpawnDataWrapper();

};

