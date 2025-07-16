#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInputType.generated.h"

UENUM()
enum class EHoudiniInputType : uint8 {
    Invalid,
    Geometry,
    Curve,
    Asset_DEPRECATED,
    Landscape_DEPRECATED,
    World,
    Skeletal_DEPRECATED,
    GeometryCollection_DEPRECATED,
};

