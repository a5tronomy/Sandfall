#pragma once
#include "CoreMinimal.h"
#include "ESentryCrashedLastRun.generated.h"

UENUM()
enum class ESentryCrashedLastRun : uint8 {
    NotEvaluated,
    NotCrashed,
    Crashed,
};

