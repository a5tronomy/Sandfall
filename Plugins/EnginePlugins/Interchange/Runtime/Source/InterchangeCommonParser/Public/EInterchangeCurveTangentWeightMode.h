#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCurveTangentWeightMode.generated.h"

UENUM()
enum class EInterchangeCurveTangentWeightMode : uint8 {
    WeightedNone,
    WeightedArrive,
    WeightedLeave,
    WeightedBoth,
};

