#pragma once
#include "CoreMinimal.h"
#include "BattleSequenceKeyframeType.generated.h"

UENUM()
enum class BattleSequenceKeyframeType : uint8 {
    NONE,
    ACTIONEFFECT_AUTOCOMBO,
    ACTIONEFFECT,
    COMBOWINDOW_PRE = 5,
    COMBOWINDOW_START,
    COMBOWINDOW_END,
    COMBOWINDOW_END_AUTO_STARTPRE = 3,
    COMBO_EXIT_POINT,
    PRESET_FAST = 50,
    PRESET_MEDIUM,
    PRESET_SLOW,
    SNAP_TO_TARGET = 100,
    SNAP_TO_SOURCE,
};

