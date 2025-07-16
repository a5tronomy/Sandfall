#include "UIEffectLongShadow.h"

UUIEffectLongShadow::UUIEffectLongShadow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->shadowSegment = 5;
    this->useGradientColor = true;
    this->multiplySourceAlpha = true;
}

void UUIEffectLongShadow::SetUseGradientColor(bool newBool) {
}

void UUIEffectLongShadow::SetShadowSize(FVector NewSize) {
}

void UUIEffectLongShadow::SetShadowSegment(uint8 newSegment) {
}

void UUIEffectLongShadow::SetShadowColor(FColor NewColor) {
}

void UUIEffectLongShadow::SetGradientColor(FColor NewColor) {
}

bool UUIEffectLongShadow::GetUseGradientColor() const {
    return false;
}

FVector UUIEffectLongShadow::GetShadowSize() const {
    return FVector{};
}

uint8 UUIEffectLongShadow::GetShadowSegments() const {
    return 0;
}

FColor UUIEffectLongShadow::GetShadowColor() const {
    return FColor{};
}

FColor UUIEffectLongShadow::GetGradientColor() const {
    return FColor{};
}


