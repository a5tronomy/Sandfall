#pragma once
#include "CoreMinimal.h"
#include "EUILayoutAnimationType.generated.h"

UENUM()
enum class EUILayoutAnimationType : uint8 {
    Immediately,
    EaseAnimation,
    Custom,
};

