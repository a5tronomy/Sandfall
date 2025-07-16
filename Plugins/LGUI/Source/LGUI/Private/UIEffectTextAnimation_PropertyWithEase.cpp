#include "UIEffectTextAnimation_PropertyWithEase.h"

UUIEffectTextAnimation_PropertyWithEase::UUIEffectTextAnimation_PropertyWithEase() {
    this->easetype = ELTweenEase::InOutSine;
    this->easeCurve = NULL;
}

void UUIEffectTextAnimation_PropertyWithEase::SetEaseType(ELTweenEase Value) {
}

void UUIEffectTextAnimation_PropertyWithEase::SetEaseCurve(UCurveFloat* Value) {
}

ELTweenEase UUIEffectTextAnimation_PropertyWithEase::GetEaseType() const {
    return ELTweenEase::Linear;
}

UCurveFloat* UUIEffectTextAnimation_PropertyWithEase::GetCurveFloat() const {
    return NULL;
}


