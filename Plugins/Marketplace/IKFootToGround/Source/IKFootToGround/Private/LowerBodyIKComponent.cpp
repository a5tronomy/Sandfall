#include "LowerBodyIKComponent.h"

ULowerBodyIKComponent::ULowerBodyIKComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionChannel = ECC_Visibility;
    this->bTraceAsObjectType = false;
    this->ForwardBackLeanDistance = 15.00f;
    this->RightLeftLeanDistance = 15.00f;
    this->ForwardBackLeanDegrees = 20.00f;
    this->RightLeftLeanDegrees = 20.00f;
    this->ThighLength = 0.00f;
    this->CalfLength = 0.00f;
    this->FootHeight = 0.00f;
    this->LegHeight = 0.00f;
    this->PelvisHeight = 0.00f;
    this->bEnabledIK = false;
    this->ApplyIKAlpha = 0.00f;
    this->bFrameIsFalling = false;
    this->bFrameIsFinishingFalling = false;
    this->bFrameIsMoving = false;
    this->bFrameIsCrouching = false;
    this->DefaultFootBoneZ = 0.00f;
}

void ULowerBodyIKComponent::ToggleEnabled(bool bNewIsEnabled) {
}


