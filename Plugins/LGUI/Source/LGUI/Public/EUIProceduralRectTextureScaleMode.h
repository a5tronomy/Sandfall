#pragma once
#include "CoreMinimal.h"
#include "EUIProceduralRectTextureScaleMode.generated.h"

UENUM()
enum class EUIProceduralRectTextureScaleMode : uint8 {
    Stretch,
    Fit,
    Envelop,
};

