#pragma once
#include "CoreMinimal.h"
#include "EUISizeControlByAspectRatioMode.generated.h"

UENUM()
enum class EUISizeControlByAspectRatioMode : uint8 {
    None,
    WidthControlHeight,
    HeightControlWidth,
    FitInParent,
    EnvelopeParent,
};

