#pragma once
#include "CoreMinimal.h"
#include "EALSMovementAction.generated.h"

UENUM()
enum class EALSMovementAction : uint8 {
    None,
    LowMantle,
    HighMantle,
    Rolling,
    GettingUp,
};

