#pragma once
#include "CoreMinimal.h"
#include "EUITextOverflowType.generated.h"

UENUM()
enum class EUITextOverflowType : uint8 {
    HorizontalOverflow,
    VerticalOverflow,
    HorizontalAndVerticalOverflow = 3,
    ClampContent = 2,
};

