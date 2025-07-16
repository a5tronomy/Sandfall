#pragma once
#include "CoreMinimal.h"
#include "EMAterialXTextureSampleBlurKernel.generated.h"

UENUM()
enum class EMAterialXTextureSampleBlurKernel : int32 {
    Kernel1,
    Kernel3,
    Kernel5,
    Kernel7,
};

