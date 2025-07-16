#include "ALSPlayerCameraBehavior.h"

UALSPlayerCameraBehavior::UALSPlayerCameraBehavior() {
    this->MovementState = EALSMovementState::None;
    this->MovementAction = EALSMovementAction::None;
    this->bLookingDirection = false;
    this->bVelocityDirection = false;
    this->bAiming = false;
    this->Gait = EALSGait::Walking;
    this->Stance = EALSStance::Standing;
    this->ViewMode = EALSViewMode::ThirdPerson;
    this->bRightShoulder = false;
    this->bDebugView = false;
}


