#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProjectConfiguration.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class SANDFALL_API UProjectConfiguration : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* LevelDataTable;
    
    UProjectConfiguration();

    UFUNCTION(BlueprintPure)
    UDataTable* GetLevelDataTable();
    
    UFUNCTION(BlueprintPure)
    UDataTable* GetEditorOnlyLevelDataTable();
    
};

