#pragma once
#include "CoreMinimal.h"
#include "EALSOverlayState.generated.h"

UENUM()
enum class EALSOverlayState : uint8 {
    Default,
    Masculine,
    Feminine,
    Injured,
    HandsTied,
    Rifle,
    PistolOneHanded,
    PistolTwoHanded,
    Bow,
    Torch,
    Binoculars,
    Box,
    Barrel,
};

