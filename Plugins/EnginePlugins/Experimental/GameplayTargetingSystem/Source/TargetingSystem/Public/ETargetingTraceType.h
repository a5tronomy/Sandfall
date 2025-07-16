#pragma once
#include "CoreMinimal.h"
#include "ETargetingTraceType.generated.h"

UENUM()
enum class ETargetingTraceType : uint8 {
    Line,
    Sphere,
    Capsule,
    Box,
};

