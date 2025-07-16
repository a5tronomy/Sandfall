#include "AnimNode_AdjustFootToGround.h"

FAnimNode_AdjustFootToGround::FAnimNode_AdjustFootToGround() {
    this->IgnoreGroundBelowFoot = false;
    this->GroundLevelZ = 0.00f;
    this->bLimitKneeDirection = false;
    this->bBackBendedKnees = false;
}

