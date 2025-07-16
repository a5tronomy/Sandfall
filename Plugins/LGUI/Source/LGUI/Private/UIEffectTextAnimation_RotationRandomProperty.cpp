#include "UIEffectTextAnimation_RotationRandomProperty.h"

UUIEffectTextAnimation_RotationRandomProperty::UUIEffectTextAnimation_RotationRandomProperty() {
    this->Seed = 0;
}

void UUIEffectTextAnimation_RotationRandomProperty::SetSeed(int32 Value) {
}

void UUIEffectTextAnimation_RotationRandomProperty::SetMin(FRotator Value) {
}

void UUIEffectTextAnimation_RotationRandomProperty::SetMax(FRotator Value) {
}

int32 UUIEffectTextAnimation_RotationRandomProperty::GetSeed() const {
    return 0;
}

FRotator UUIEffectTextAnimation_RotationRandomProperty::GetMin() const {
    return FRotator{};
}

FRotator UUIEffectTextAnimation_RotationRandomProperty::GetMax() const {
    return FRotator{};
}


