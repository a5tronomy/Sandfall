#pragma once
#include "CoreMinimal.h"
#include "EALSMovementDirection.generated.h"

UENUM()
enum class EALSMovementDirection : uint8 {
    Forward,
    Right,
    Left,
    Backward,
};

