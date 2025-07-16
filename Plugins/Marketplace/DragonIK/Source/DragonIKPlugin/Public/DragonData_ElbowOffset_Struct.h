#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_ElbowOffset_Struct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ElbowOffset_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> elbow_offset_array;
    
    DRAGONIKPLUGIN_API FDragonData_ElbowOffset_Struct();
};

