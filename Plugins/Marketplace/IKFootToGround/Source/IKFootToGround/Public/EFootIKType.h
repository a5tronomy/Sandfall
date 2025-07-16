#pragma once
#include "CoreMinimal.h"
#include "EFootIKType.generated.h"

UENUM()
enum class EFootIKType : uint8 {
    NoIK,
    TwoBoneIK,
    IKFoot2Ground,
};

