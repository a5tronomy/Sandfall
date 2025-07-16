#pragma once
#include "CoreMinimal.h"
#include "EALSRotationMode.generated.h"

UENUM()
enum class EALSRotationMode : uint8 {
    VelocityDirection,
    LookingDirection,
    Aiming,
};

