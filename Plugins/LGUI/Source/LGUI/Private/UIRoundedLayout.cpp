#include "UIRoundedLayout.h"

UUIRoundedLayout::UUIRoundedLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 100.00f;
    this->StartAngle = 0.00f;
    this->EndAngle = 360.00f;
    this->bSetChildAngle = true;
}


