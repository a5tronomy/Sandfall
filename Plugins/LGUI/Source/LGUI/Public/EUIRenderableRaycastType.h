#pragma once
#include "CoreMinimal.h"
#include "EUIRenderableRaycastType.generated.h"

UENUM()
enum class EUIRenderableRaycastType : uint8 {
    Rect,
    Mesh,
    VisiblePixel = 3,
    Custom = 2,
};

