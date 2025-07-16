#pragma once
#include "CoreMinimal.h"
#include "DragonData_FootData.h"
#include "DragonData_FootPairData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FootPairData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CommonSpineBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ChildFollowBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_FootData> Feet_Pair_Array;
    
    DRAGONIKPLUGIN_API FDragonData_FootPairData();
};

