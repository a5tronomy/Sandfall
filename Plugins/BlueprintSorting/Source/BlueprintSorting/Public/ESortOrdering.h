#pragma once
#include "CoreMinimal.h"
#include "ESortOrdering.generated.h"

UENUM()
enum class ESortOrdering : uint8 {
    LessThan,
    Equal,
    GreaterThan,
};

