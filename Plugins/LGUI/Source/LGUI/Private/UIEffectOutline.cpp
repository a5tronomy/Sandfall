#include "UIEffectOutline.h"

UUIEffectOutline::UUIEffectOutline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->multiplySourceAlpha = true;
    this->use8Direction = false;
}

void UUIEffectOutline::SetUse8Direction(bool NewValue) {
}

void UUIEffectOutline::SetOutlineSize(FVector2D NewSize) {
}

void UUIEffectOutline::SetOutlineColor(FColor NewColor) {
}

bool UUIEffectOutline::GetUse8Direction() const {
    return false;
}

FVector2D UUIEffectOutline::GetOutlineSize() const {
    return FVector2D{};
}

FColor UUIEffectOutline::GetOutlineColor() const {
    return FColor{};
}


