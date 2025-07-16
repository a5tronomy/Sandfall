#include "ALSAnimCharacterInformation.h"

FALSAnimCharacterInformation::FALSAnimCharacterInformation() {
    this->bIsMoving = false;
    this->bHasMovementInput = false;
    this->Speed = 0.00f;
    this->MovementInputAmount = 0.00f;
    this->AimYawRate = 0.00f;
    this->ZoomAmount = 0.00f;
    this->PrevMovementState = EALSMovementState::None;
    this->ViewMode = EALSViewMode::ThirdPerson;
}

