#include "CameraModifier_RotationLimiter.h"

UCameraModifier_RotationLimiter::UCameraModifier_RotationLimiter() {
    this->PitchMin = -90.00f;
    this->PitchMax = 90.00f;
    this->YawMin = 0.00f;
    this->YaxMax = 360.00f;
    this->RollMin = -90.00f;
    this->RollMax = 90.00f;
}


