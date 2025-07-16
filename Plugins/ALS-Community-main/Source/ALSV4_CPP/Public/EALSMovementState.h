#pragma once
#include "CoreMinimal.h"
#include "EALSMovementState.generated.h"

UENUM()
enum class EALSMovementState : uint8 {
    None,
    Grounded,
    InAir,
    Mantling,
    Ragdoll,
};

