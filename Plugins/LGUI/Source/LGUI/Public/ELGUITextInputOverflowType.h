#pragma once
#include "CoreMinimal.h"
#include "ELGUITextInputOverflowType.generated.h"

UENUM()
enum class ELGUITextInputOverflowType : uint8 {
    ClampContent,
    OverflowToMax,
};

