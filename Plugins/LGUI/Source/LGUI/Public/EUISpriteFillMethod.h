#pragma once
#include "CoreMinimal.h"
#include "EUISpriteFillMethod.generated.h"

UENUM()
enum class EUISpriteFillMethod : uint8 {
    Horizontal,
    Vertical,
    Radial90,
    Radial180,
    Radial360,
};

