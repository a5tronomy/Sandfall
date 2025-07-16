#pragma once
#include "CoreMinimal.h"
#include "ELGUINavigationDirection.generated.h"

UENUM()
enum class ELGUINavigationDirection : uint8 {
    None,
    Left,
    Right,
    Up,
    Down,
    Next,
    Prev,
};

