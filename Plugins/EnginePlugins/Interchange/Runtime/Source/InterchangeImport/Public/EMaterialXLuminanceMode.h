#pragma once
#include "CoreMinimal.h"
#include "EMaterialXLuminanceMode.generated.h"

UENUM()
enum class EMaterialXLuminanceMode : uint8 {
    ACEScg,
    Rec709,
    Rec2020,
    Rec2100 = Rec2020,
    Custom,
};

