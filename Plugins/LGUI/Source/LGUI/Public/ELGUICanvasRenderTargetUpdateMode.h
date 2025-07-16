#pragma once
#include "CoreMinimal.h"
#include "ELGUICanvasRenderTargetUpdateMode.generated.h"

UENUM()
enum class ELGUICanvasRenderTargetUpdateMode : uint8 {
    Automatic,
    Always,
    WhenRequest,
};

