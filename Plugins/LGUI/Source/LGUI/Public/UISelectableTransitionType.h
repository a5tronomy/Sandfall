#pragma once
#include "CoreMinimal.h"
#include "UISelectableTransitionType.generated.h"

UENUM()
enum class UISelectableTransitionType : uint8 {
    None,
    ColorTint,
    SpriteSwap,
    TransitionComponent,
};

