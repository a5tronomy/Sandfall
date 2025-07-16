#include "UIEffectGradientColor.h"

UUIEffectGradientColor::UUIEffectGradientColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->directionType = EUIEffectGradientColorDirection::BottomToTop;
    this->multiplySourceAlpha = true;
}


