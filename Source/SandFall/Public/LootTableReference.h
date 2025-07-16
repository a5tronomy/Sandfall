#pragma once
#include "CoreMinimal.h"
#include "LootTableReference.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct SANDFALL_API FLootTableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* LootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RollCount;
    
    FLootTableReference();
};

