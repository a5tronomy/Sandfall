#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCameraProjectionType.generated.h"

UENUM()
enum class EInterchangeCameraProjectionType : uint8 {
    Perspective,
    Orthographic,
};

