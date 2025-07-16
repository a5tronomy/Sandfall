#pragma once
#include "CoreMinimal.h"
#include "ELayoutElementType.generated.h"

UENUM()
enum class ELayoutElementType : uint8 {
    AutoSize,
    IgnoreLayout,
    ConstantSize,
    RatioSize,
};

