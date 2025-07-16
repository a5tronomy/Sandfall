#pragma once
#include "CoreMinimal.h"
#include "EUITextureType.generated.h"

UENUM()
enum class EUITextureType : uint8 {
    Normal,
    Sliced,
    SlicedFrame,
    Tiled,
    Filled,
};

