#include "UIEffectTextAnimation_RichTextTagSelector.h"

UUIEffectTextAnimation_RichTextTagSelector::UUIEffectTextAnimation_RichTextTagSelector() {
    this->Range = 1.00f;
    this->flipDirection = false;
}

void UUIEffectTextAnimation_RichTextTagSelector::SetTagName(const FName& Value) {
}

void UUIEffectTextAnimation_RichTextTagSelector::SetRange(float Value) {
}

void UUIEffectTextAnimation_RichTextTagSelector::SetFlipDirection(bool Value) {
}

FName UUIEffectTextAnimation_RichTextTagSelector::GetTagName() const {
    return NAME_None;
}

float UUIEffectTextAnimation_RichTextTagSelector::GetRange() const {
    return 0.0f;
}

bool UUIEffectTextAnimation_RichTextTagSelector::GetFlipDirection() const {
    return false;
}


