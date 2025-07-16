#include "LegInfo.h"

FLegInfo::FLegInfo() {
    this->LengthSquared = 0.00f;
    this->LengthUnscaled = 0.00f;
    this->OffsetToGround = 0.00f;
    this->AxisMultiplier = 0.00f;
    this->Side = EFootSide::Right;
    this->CurrentFootZ = 0.00f;
    this->CurrentGroundZ = 0.00f;
    this->TickTargetZ = 0.00f;
    this->IKType = EFootIKType::NoIK;
    this->FootRotation = 0.00f;
    this->bEnabled = false;
    this->HitComponent = NULL;
}

