#pragma once
#include "CoreMinimal.h"
#include "ELGUICanvasRenderTargetSizeMode.generated.h"

UENUM()
enum class ELGUICanvasRenderTargetSizeMode : uint8 {
    None,
    CanvasFitToRenderTarget,
    RenderTargetFitToCanvas,
};

