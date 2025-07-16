#pragma once
#include "CoreMinimal.h"
#include "EMaterialXTextureSampleBlurFilter.generated.h"

UENUM()
enum class EMaterialXTextureSampleBlurFilter : uint8 {
    Box,
    Gaussian,
};

