#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMeshPayLoadType.generated.h"

UENUM()
enum class EInterchangeMeshPayLoadType : uint8 {
    NONE,
    STATIC,
    SKELETAL,
    MORPHTARGET,
};

