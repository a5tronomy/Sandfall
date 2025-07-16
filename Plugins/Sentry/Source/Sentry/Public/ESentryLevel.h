#pragma once
#include "CoreMinimal.h"
#include "ESentryLevel.generated.h"

UENUM()
enum class ESentryLevel : uint8 {
    Debug,
    Info,
    Warning,
    Error,
    Fatal,
};

