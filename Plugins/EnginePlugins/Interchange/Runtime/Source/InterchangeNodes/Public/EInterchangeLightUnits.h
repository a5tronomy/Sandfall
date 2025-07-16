#pragma once
#include "CoreMinimal.h"
#include "EInterchangeLightUnits.generated.h"

UENUM()
enum class EInterchangeLightUnits : uint8 {
    Unitless,
    Candelas,
    Lumens,
    EV,
};

