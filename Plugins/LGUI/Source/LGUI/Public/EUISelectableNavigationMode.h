#pragma once
#include "CoreMinimal.h"
#include "EUISelectableNavigationMode.generated.h"

UENUM()
enum class EUISelectableNavigationMode : uint8 {
    None,
    Auto,
    Explicit,
};

