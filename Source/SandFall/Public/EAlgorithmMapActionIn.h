#pragma once
#include "CoreMinimal.h"
#include "EAlgorithmMapActionIn.generated.h"

UENUM()
namespace EAlgorithmMapActionIn {
    enum Type {
        Start,
        ValueCallback,
        Return,
    };
}

