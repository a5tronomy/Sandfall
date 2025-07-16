#include "AnimNode_BlendLegs.h"

FAnimNode_BlendLegs::FAnimNode_BlendLegs() {
    this->bRightLegFirst = false;
    this->bUseIK = false;
    this->CharacterForwardAxis = EAxisDirection::AD_XPositive;
    this->FootMaxLift = 0.00f;
    this->FootStepPitch = 0.00f;
    this->bApplyToRotation = false;
    this->SourceAlpha = 0.00f;
}

