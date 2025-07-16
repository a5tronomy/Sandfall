#pragma once
#include "CoreMinimal.h"
#include "EUISelectableSelectionState.generated.h"

UENUM()
enum class EUISelectableSelectionState : uint8 {
    Normal,
    Highlighted,
    Pressed,
    Disabled,
};

