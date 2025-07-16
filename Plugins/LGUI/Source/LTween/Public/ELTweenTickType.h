#pragma once
#include "CoreMinimal.h"
#include "ELTweenTickType.generated.h"

UENUM()
enum class ELTweenTickType : uint8 {
    PrePhysics,
    DuringPhysics = 2,
    PostPhysics = 4,
    PostUpdateWork,
    Manual,
};

