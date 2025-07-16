#pragma once
#include "CoreMinimal.h"
#include "ESF_SettingsCategory.generated.h"

UENUM()
enum class ESF_SettingsCategory : uint8 {
    Undefined,
    General,
    Gameplay,
    Audio,
    Graphics,
    Accessibility,
    All,
};

