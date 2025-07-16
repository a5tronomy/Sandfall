#pragma once
#include "CoreMinimal.h"
#include "DragonData_TailHeightInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_TailHeightInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> Tail_Chain_Heights;
    
    DRAGONIKPLUGIN_API FDragonData_TailHeightInput();
};

