#pragma once
#include "CoreMinimal.h"
#include "EUIEffectGradientColorDirection.generated.h"

UENUM()
enum class EUIEffectGradientColorDirection : uint8 {
    BottomToTop,
    TopToBottom,
    LeftToRight,
    RightToLeft,
    FourCornor,
};

