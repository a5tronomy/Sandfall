#include "UICanvasGroup.h"

UUICanvasGroup::UUICanvasGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Alpha = 1.00f;
    this->bInteractable = true;
    this->bRestrictNavigationArea = false;
    this->bIgnoreParentGroup = false;
}

void UUICanvasGroup::SetInteractable(bool Value) {
}

void UUICanvasGroup::SetIgnoreParentGroup(bool Value) {
}

void UUICanvasGroup::SetAlpha(float Value) {
}

UUICanvasGroup* UUICanvasGroup::GetRestrictNavigationAreaCanvasGroup() const {
    return NULL;
}

bool UUICanvasGroup::GetRestrictNavigationArea() const {
    return false;
}

bool UUICanvasGroup::GetInteractable() const {
    return false;
}

bool UUICanvasGroup::GetIgnoreParentGroup() const {
    return false;
}

bool UUICanvasGroup::GetFinalInteractable() const {
    return false;
}

float UUICanvasGroup::GetFinalAlpha() const {
    return 0.0f;
}

float UUICanvasGroup::GetAlpha() const {
    return 0.0f;
}

ULTweener* UUICanvasGroup::AlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUICanvasGroup::AlphaFrom(float StartValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}


