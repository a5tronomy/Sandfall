#pragma once
#include "CoreMinimal.h"
#include "ELGUIInteractionTarget.generated.h"

UENUM()
enum class ELGUIInteractionTarget : uint8 {
    UI,
    World,
    UIAndWorld,
};

