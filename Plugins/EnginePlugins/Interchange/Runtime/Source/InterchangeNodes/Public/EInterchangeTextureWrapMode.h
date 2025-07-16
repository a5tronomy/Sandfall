#pragma once
#include "CoreMinimal.h"
#include "EInterchangeTextureWrapMode.generated.h"

UENUM()
enum class EInterchangeTextureWrapMode : uint8 {
    Wrap,
    Clamp,
    Mirror,
};

