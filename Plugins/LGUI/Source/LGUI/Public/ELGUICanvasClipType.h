#pragma once
#include "CoreMinimal.h"
#include "ELGUICanvasClipType.generated.h"

UENUM()
enum class ELGUICanvasClipType : uint8 {
    None,
    Rect,
    Texture,
    Custom,
};

