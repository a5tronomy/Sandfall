#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniExtents.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniExtents {
    GENERATED_BODY()
public:
    UPROPERTY()
    FIntPoint min;
    
    UPROPERTY()
    FIntPoint max;
    
    FHoudiniExtents();
};

