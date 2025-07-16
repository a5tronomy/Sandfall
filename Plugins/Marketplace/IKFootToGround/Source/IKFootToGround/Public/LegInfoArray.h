#pragma once
#include "CoreMinimal.h"
#include "LegInfo.h"
#include "LegInfoArray.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FLegInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LegName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLegInfo Data;
    
    FLegInfoArray();
};

