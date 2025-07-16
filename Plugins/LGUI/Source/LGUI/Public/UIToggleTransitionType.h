#pragma once
#include "CoreMinimal.h"
#include "UIToggleTransitionType.generated.h"

UENUM()
enum class UIToggleTransitionType : uint8 {
    None,
    Fade,
    ColorTint,
    TransitionComponent,
};

