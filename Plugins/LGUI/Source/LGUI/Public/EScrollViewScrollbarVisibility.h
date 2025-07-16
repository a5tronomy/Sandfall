#pragma once
#include "CoreMinimal.h"
#include "EScrollViewScrollbarVisibility.generated.h"

UENUM()
enum class EScrollViewScrollbarVisibility : uint8 {
    Permanent,
    AutoHide,
    AutoHideAndExpandViewport,
};

