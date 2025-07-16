#include "ALSNotifyStateEarlyBlendOut.h"

UALSNotifyStateEarlyBlendOut::UALSNotifyStateEarlyBlendOut() {
    this->ThisMontage = NULL;
    this->BlendOutTime = 0.25f;
    this->bCheckMovementState = false;
    this->MovementStateEquals = EALSMovementState::None;
    this->bCheckStance = false;
    this->StanceEquals = EALSStance::Standing;
    this->bCheckMovementInput = false;
}


