#pragma once
#include "CoreMinimal.h"
#include "UISliderDirectionType.generated.h"

UENUM()
enum class UISliderDirectionType : uint8 {
    LeftToRight,
    RightToLeft,
    BottomToTop,
    TopToBottom,
};

