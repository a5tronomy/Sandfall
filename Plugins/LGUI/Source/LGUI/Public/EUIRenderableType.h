#pragma once
#include "CoreMinimal.h"
#include "EUIRenderableType.generated.h"

UENUM()
enum class EUIRenderableType : uint8 {
    None,
    UIBatchMeshRenderable,
    UIPostProcessRenderable,
    UIDirectMeshRenderable,
};

