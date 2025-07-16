#pragma once
#include "CoreMinimal.h"
#include "EModifierStackingType.generated.h"

UENUM()
enum class EModifierStackingType : uint8 {
    Invalid,
    Sum,
    Multiply,
    Min,
    Max,
    Average,
};

