#pragma once
#include "CoreMinimal.h"
#include "DragonData_FootPairData.h"
#include "DragonData_Type2MultiInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_Type2MultiInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Spine_Structure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_FootPairData> FeetRelatedData;
    
    DRAGONIKPLUGIN_API FDragonData_Type2MultiInput();
};

