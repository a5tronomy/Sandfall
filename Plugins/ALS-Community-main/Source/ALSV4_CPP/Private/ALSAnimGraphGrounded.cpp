#include "ALSAnimGraphGrounded.h"

FALSAnimGraphGrounded::FALSAnimGraphGrounded() {
    this->TrackedHipsDirection = EALSHipsDirection::F;
    this->bShouldMove = false;
    this->bRotateL = false;
    this->bRotateR = false;
    this->bPivot = false;
    this->RotateRate = 0.00f;
    this->RotationScale = 0.00f;
    this->DiagonalScaleAmount = 0.00f;
    this->WalkRunBlend = 0.00f;
    this->StandingPlayRate = 0.00f;
    this->CrouchingPlayRate = 0.00f;
    this->StrideBlend = 0.00f;
    this->FYaw = 0.00f;
    this->BYaw = 0.00f;
    this->LYaw = 0.00f;
    this->RYaw = 0.00f;
}

