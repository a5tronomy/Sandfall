#include "ALSRotationMode.h"

FALSRotationMode::FALSRotationMode() {
    this->RotationMode = EALSRotationMode::VelocityDirection;
    this->VelocityDirection_ = false;
    this->LookingDirection_ = false;
    this->Aiming_ = false;
}

