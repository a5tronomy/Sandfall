#include "ALSGait.h"

FALSGait::FALSGait() {
    this->Gait = EALSGait::Walking;
    this->Walking_ = false;
    this->Running_ = false;
    this->Sprinting_ = false;
}

