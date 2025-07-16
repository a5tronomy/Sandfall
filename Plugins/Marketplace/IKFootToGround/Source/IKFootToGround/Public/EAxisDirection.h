#pragma once
#include "CoreMinimal.h"
#include "EAxisDirection.generated.h"

UENUM()
enum class EAxisDirection : uint8 {
    AD_XPositive,
    AD_XNegative,
    AD_YPositive,
    AD_YNegative,
    AD_ZPositive,
    AD_ZNegative,
};

