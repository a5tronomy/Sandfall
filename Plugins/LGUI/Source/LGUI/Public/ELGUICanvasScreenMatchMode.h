#pragma once
#include "CoreMinimal.h"
#include "ELGUICanvasScreenMatchMode.generated.h"

UENUM()
enum class ELGUICanvasScreenMatchMode : uint8 {
    MatchWidthOrHeight,
    Expand,
    Shrink,
};

