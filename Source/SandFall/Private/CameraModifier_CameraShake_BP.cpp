#include "CameraModifier_CameraShake_BP.h"

UCameraModifier_CameraShake_BP::UCameraModifier_CameraShake_BP() {
    this->Modifier = NULL;
    this->StopModifierAfterShake = true;
    this->ShakeDuration = 0.35f;
    this->ShakeAtStart = NULL;
}



