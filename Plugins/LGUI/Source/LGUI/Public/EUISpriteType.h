#pragma once
#include "CoreMinimal.h"
#include "EUISpriteType.generated.h"

UENUM()
enum class EUISpriteType : uint8 {
    Normal,
    Sliced,
    SlicedFrame,
    Tiled,
    Filled,
};

