#include "UIEffectTextAnimation_ColorProperty.h"

UUIEffectTextAnimation_ColorProperty::UUIEffectTextAnimation_ColorProperty() {
    this->useHSV = true;
}

void UUIEffectTextAnimation_ColorProperty::SetUseHSV(bool Value) {
}

void UUIEffectTextAnimation_ColorProperty::SetColor(FColor Value) {
}

bool UUIEffectTextAnimation_ColorProperty::GetUseHSV() const {
    return false;
}

FColor UUIEffectTextAnimation_ColorProperty::GetColor() const {
    return FColor{};
}


