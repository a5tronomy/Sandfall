#include "UIBackgroundPixelate.h"

UUIBackgroundPixelate::UUIBackgroundPixelate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->pixelateStrength = 10.00f;
    this->applyAlphaToStrength = true;
}

void UUIBackgroundPixelate::SetPixelateStrength(float NewValue) {
}

void UUIBackgroundPixelate::SetApplyAlphaToStrength(bool NewValue) {
}

float UUIBackgroundPixelate::GetPixelateStrength() const {
    return 0.0f;
}

bool UUIBackgroundPixelate::GetApplyAlphaToStrength() const {
    return false;
}


