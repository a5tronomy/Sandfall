#pragma once
#include "CoreMinimal.h"
#include "ELGUIRendererMSAASampleCount.generated.h"

UENUM()
enum class ELGUIRendererMSAASampleCount : uint8 {
    Hidden,
    One,
    Two,
    Four = 4,
    Eight = 8,
};

