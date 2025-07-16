#pragma once
#include "CoreMinimal.h"
#include "ELGUIRenderMode.generated.h"

UENUM()
enum class ELGUIRenderMode : uint8 {
    ScreenSpaceOverlay,
    WorldSpace,
    WorldSpace_LGUI = 3,
    RenderTarget = 2,
    None = 255,
};

