#pragma once
#include "CoreMinimal.h"
#include "ELTweenLoop.generated.h"

UENUM()
enum class ELTweenLoop : uint8 {
    Once,
    Restart,
    Yoyo,
    Incremental,
};

