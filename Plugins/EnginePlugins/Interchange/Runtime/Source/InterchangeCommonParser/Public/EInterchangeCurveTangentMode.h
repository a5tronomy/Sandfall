#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCurveTangentMode.generated.h"

UENUM()
enum class EInterchangeCurveTangentMode : uint8 {
    Auto,
    User,
    Break,
    None,
};

