#pragma once
#include "CoreMinimal.h"
#include "EUITextureUVRectControlMode.generated.h"

UENUM()
enum class EUITextureUVRectControlMode : uint8 {
    None,
    KeepAspectRatio_FitIn,
    KeepAspectRatio_Envelope,
};

