#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationRange.generated.h"

UENUM()
enum class EInterchangeAnimationRange : uint8 {
    Timeline,
    Animated,
    SetRange,
    MAX,
};

