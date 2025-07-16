#pragma once
#include "CoreMinimal.h"
#include "ELGUIDynamicFontLineHeightType.generated.h"

UENUM()
enum class ELGUIDynamicFontLineHeightType : uint8 {
    FromFontFace,
    FontSizeAsLineHeight,
};

