#include "ALSMovementDirection.h"

FALSMovementDirection::FALSMovementDirection() {
    this->MovementDirection = EALSMovementDirection::Forward;
    this->Forward_ = false;
    this->Right_ = false;
    this->Left_ = false;
    this->Backward_ = false;
}

