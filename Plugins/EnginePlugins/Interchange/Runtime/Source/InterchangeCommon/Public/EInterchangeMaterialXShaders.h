#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialXShaders.generated.h"

UENUM()
enum class EInterchangeMaterialXShaders : uint8 {
    OpenPBRSurface,
    OpenPBRSurfaceTransmission,
    StandardSurface,
    StandardSurfaceTransmission,
    SurfaceUnlit,
    UsdPreviewSurface,
    Surface,
    MaxShaderCount,
};

