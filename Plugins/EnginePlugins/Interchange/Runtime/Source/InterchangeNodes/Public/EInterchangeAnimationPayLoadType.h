#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.generated.h"

UENUM()
enum class EInterchangeAnimationPayLoadType : uint8 {
    NONE,
    CURVE,
    MORPHTARGETCURVE,
    STEPCURVE,
    BAKED,
    MORPHTARGETCURVEWEIGHTINSTANCE,
};

