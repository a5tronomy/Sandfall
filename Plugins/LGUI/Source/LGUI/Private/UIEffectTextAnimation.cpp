#include "UIEffectTextAnimation.h"

UUIEffectTextAnimation::UUIEffectTextAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->selector = NULL;
    this->selectorOffset = 0.00f;
    this->UIText = NULL;
}

void UUIEffectTextAnimation::SetSelectorOffset(float Value) {
}

void UUIEffectTextAnimation::SetSelector(UUIEffectTextAnimation_Selector* Value) {
}

void UUIEffectTextAnimation::SetProperty(int32 Index, UUIEffectTextAnimation_Property* Value) {
}

void UUIEffectTextAnimation::SetProperties(const TArray<UUIEffectTextAnimation_Property*>& Value) {
}

float UUIEffectTextAnimation::GetSelectorOffset() const {
    return 0.0f;
}

UUIEffectTextAnimation_Selector* UUIEffectTextAnimation::GetSelector() const {
    return NULL;
}

UUIEffectTextAnimation_Property* UUIEffectTextAnimation::GetProperty(int32 Index) const {
    return NULL;
}

TArray<UUIEffectTextAnimation_Property*> UUIEffectTextAnimation::GetProperties() const {
    return TArray<UUIEffectTextAnimation_Property*>();
}


