#pragma once
#include "CoreMinimal.h"
#include "ELGUIRendererAntiAliasingMethod.generated.h"

UENUM()
enum class ELGUIRendererAntiAliasingMethod : uint8 {
    None,
    MSAA = 3,
};

