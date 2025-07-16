#include "AnimNode_FeetToGround.h"

FAnimNode_FeetToGround::FAnimNode_FeetToGround() {
    this->CharacterForwardAxis = EAxisDirection::AD_XPositive;
    this->FootVerticalOffset = 0.00f;
    this->TraceDistance = 0.00f;
    this->TraceRadius = 0.00f;
    this->CollisionChannel = ECC_WorldStatic;
    this->bTraceAsObjectType = false;
    this->bEnabled = false;
    this->bForceRightLegToGround = false;
    this->bForceLeftLegToGround = false;
    this->PelvisInterpolationSpeed = 0.00f;
    this->FootInterpolationSpeed = 0.00f;
    this->KneeForwardOffset = 0.00f;
    this->KneeUpOffset = 0.00f;
}

