#pragma once
#include "CoreMinimal.h"
#include "ELGUICanvasScaleMode.generated.h"

UENUM()
enum class ELGUICanvasScaleMode : uint8 {
    ConstantPixelSize,
    ScaleWithScreenSize,
    Custom,
};

