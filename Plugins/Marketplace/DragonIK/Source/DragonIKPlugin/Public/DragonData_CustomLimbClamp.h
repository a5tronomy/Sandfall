#pragma once
#include "CoreMinimal.h"
#include "DragonData_CustomLimbClamp.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_CustomLimbClamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> Custom_Limb_Clamp_Array;
    
    DRAGONIKPLUGIN_API FDragonData_CustomLimbClamp();
};

