#pragma once
#include "CoreMinimal.h"
#include "ELGUIRenderTargetGeometryMode.generated.h"

UENUM()
enum class ELGUIRenderTargetGeometryMode : uint8 {
    Plane,
    Cylinder,
    StaticMesh = 100,
};

