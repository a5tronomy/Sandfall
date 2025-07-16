#pragma once
#include "CoreMinimal.h"
#include "BattleSequenceCameraType.generated.h"

UENUM()
enum class BattleSequenceCameraType : uint8 {
    NONE,
    OVERVIEW,
    TARGETING_ALLY,
    TARGETING_ENEMY,
    ACTION,
    CLOSE,
    ALLY_GENERAL,
    AOE,
};

