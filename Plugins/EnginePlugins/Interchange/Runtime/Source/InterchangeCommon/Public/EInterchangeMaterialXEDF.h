#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialXEDF.generated.h"

UENUM()
enum class EInterchangeMaterialXEDF : uint8 {
    Uniform,
    Conical,
    Measured,
    MaxEDFCount,
};

