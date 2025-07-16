#pragma once
#include "CoreMinimal.h"
#include "ESentryTracesSamplingType.generated.h"

UENUM()
enum class ESentryTracesSamplingType : uint8 {
    UniformSampleRate,
    TracesSampler,
};

