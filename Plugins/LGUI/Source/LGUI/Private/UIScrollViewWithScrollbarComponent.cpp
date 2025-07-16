#include "UIScrollViewWithScrollbarComponent.h"

UUIScrollViewWithScrollbarComponent::UUIScrollViewWithScrollbarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HorizontalScrollbarVisibility = EScrollViewScrollbarVisibility::AutoHideAndExpandViewport;
    this->VerticalScrollbarVisibility = EScrollViewScrollbarVisibility::AutoHideAndExpandViewport;
}

void UUIScrollViewWithScrollbarComponent::SetVerticalScrollbarVisibility(EScrollViewScrollbarVisibility Value) {
}

void UUIScrollViewWithScrollbarComponent::SetHorizontalScrollbarVisibility(EScrollViewScrollbarVisibility Value) {
}

AUIBaseActor* UUIScrollViewWithScrollbarComponent::GetViewport() const {
    return NULL;
}

EScrollViewScrollbarVisibility UUIScrollViewWithScrollbarComponent::GetVerticalScrollbarVisibility() const {
    return EScrollViewScrollbarVisibility::Permanent;
}

AUIBaseActor* UUIScrollViewWithScrollbarComponent::GetVerticalScrollbar() const {
    return NULL;
}

EScrollViewScrollbarVisibility UUIScrollViewWithScrollbarComponent::GetHorizontalScrollbarVisibility() const {
    return EScrollViewScrollbarVisibility::Permanent;
}

AUIBaseActor* UUIScrollViewWithScrollbarComponent::GetHorizontalScrollbar() const {
    return NULL;
}


