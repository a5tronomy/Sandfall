#pragma once
#include "CoreMinimal.h"
#include "EUI2DLineRenderer_EndType.generated.h"

UENUM()
enum class EUI2DLineRenderer_EndType : uint8 {
    None,
    Cap,
    ConnectStartAndEnd,
};

