#include "UIEffectShadow.h"

UUIEffectShadow::UUIEffectShadow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->multiplySourceAlpha = true;
}

void UUIEffectShadow::SetShadowOffset(FVector2D newOffset) {
}

void UUIEffectShadow::SetShadowColor(FColor NewColor) {
}

FVector2D UUIEffectShadow::GetShadowOffset() const {
    return FVector2D{};
}

FColor UUIEffectShadow::GetShadowColor() const {
    return FColor{};
}


