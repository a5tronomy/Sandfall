#pragma once
#include "CoreMinimal.h"
#include "UIScrollbarDirectionType.generated.h"

UENUM()
enum class UIScrollbarDirectionType : uint8 {
    LeftToRight,
    RightToLeft,
    BottomToTop,
    TopToBottom,
};

