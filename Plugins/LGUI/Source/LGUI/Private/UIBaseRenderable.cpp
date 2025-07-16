#include "UIBaseRenderable.h"

UUIBaseRenderable::UUIBaseRenderable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RaycastType = EUIRenderableRaycastType::Rect;
    this->CustomRaycastObject = NULL;
    this->VisiblePixelThreadhold = 0.10f;
}

void UUIBaseRenderable::SetRaycastType(EUIRenderableRaycastType Value) {
}

void UUIBaseRenderable::SetCustomRaycastObject(UUIRenderableCustomRaycast* Value) {
}

void UUIBaseRenderable::SetColor(FColor Value) {
}

void UUIBaseRenderable::SetAlpha(float Value) {
}

EUIRenderableType UUIBaseRenderable::GetUIRenderableType() const {
    return EUIRenderableType::None;
}

EUIRenderableRaycastType UUIBaseRenderable::GetRaycastType() const {
    return EUIRenderableRaycastType::Rect;
}

FColor UUIBaseRenderable::GetFinalColor() const {
    return FColor{};
}

float UUIBaseRenderable::GetFinalAlpha01() const {
    return 0.0f;
}

UUIRenderableCustomRaycast* UUIBaseRenderable::GetCustomRaycastObject() const {
    return NULL;
}

FColor UUIBaseRenderable::GetColor() const {
    return FColor{};
}

float UUIBaseRenderable::GetAlpha() const {
    return 0.0f;
}

ULTweener* UUIBaseRenderable::ColorTo(FColor endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIBaseRenderable::ColorFrom(FColor StartValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIBaseRenderable::AlphaTo(float endValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}

ULTweener* UUIBaseRenderable::AlphaFrom(float StartValue, float Duration, float Delay, ELTweenEase Ease) {
    return NULL;
}


