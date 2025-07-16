#pragma once
#include "CoreMinimal.h"
#include "EALSFootstepType.generated.h"

UENUM()
enum class EALSFootstepType : uint8 {
    Step,
    WalkRun,
    Jump,
    Land,
};

