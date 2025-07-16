#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniLandscapeSplineControlPointData.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniLandscapeSplineControlPointData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    float Width;
    
    FHoudiniLandscapeSplineControlPointData();
};

