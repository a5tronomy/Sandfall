#include "UIEffectTextAnimation_ColorRandomProperty.h"

UUIEffectTextAnimation_ColorRandomProperty::UUIEffectTextAnimation_ColorRandomProperty() {
    this->Seed = 0;
    this->useHSV = true;
}

void UUIEffectTextAnimation_ColorRandomProperty::SetUseHSV(bool Value) {
}

void UUIEffectTextAnimation_ColorRandomProperty::SetSeed(int32 Value) {
}

void UUIEffectTextAnimation_ColorRandomProperty::SetMin(FColor Value) {
}

void UUIEffectTextAnimation_ColorRandomProperty::SetMax(FColor Value) {
}

bool UUIEffectTextAnimation_ColorRandomProperty::GetUseHSV() const {
    return false;
}

int32 UUIEffectTextAnimation_ColorRandomProperty::GetSeed() const {
    return 0;
}

FColor UUIEffectTextAnimation_ColorRandomProperty::GetMin() const {
    return FColor{};
}

FColor UUIEffectTextAnimation_ColorRandomProperty::GetMax() const {
    return FColor{};
}


