#pragma once
#include "CoreMinimal.h"
#include "DragonData_StickyFeetStruct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_StickyFeetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<bool> sticky_feet_array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> sticky_feet_alpha_array;
    
    DRAGONIKPLUGIN_API FDragonData_StickyFeetStruct();
};

