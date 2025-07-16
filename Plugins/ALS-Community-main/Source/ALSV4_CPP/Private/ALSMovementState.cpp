#include "ALSMovementState.h"

FALSMovementState::FALSMovementState() {
    this->State = EALSMovementState::None;
    this->None_ = false;
    this->Grounded_ = false;
    this->InAir_ = false;
    this->Mantling_ = false;
    this->Ragdoll_ = false;
}

