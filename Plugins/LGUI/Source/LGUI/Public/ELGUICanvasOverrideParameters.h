#pragma once
#include "CoreMinimal.h"
#include "ELGUICanvasOverrideParameters.generated.h"

UENUM()
enum class ELGUICanvasOverrideParameters {
    DefaltMaterials,
    PixelPerfect,
    DynamicPixelsPerUnit,
    ClipType,
    AdditionalShaderChannels,
    BlendDepth,
    DepthFade,
};

