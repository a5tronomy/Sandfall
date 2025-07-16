#include "UIScrollViewComponent.h"

UUIScrollViewComponent::UUIScrollViewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Horizontal = true;
    this->Vertical = true;
    this->OnlyOneDirection = true;
    this->ScrollSensitivity = 1.00f;
    this->CanScrollInSmallSize = true;
    this->FlipDirectionInSmallSize = false;
    this->DecelerateRate = 0.14f;
    this->RestrictRectArea = true;
    this->OutOfRangeDamper = 0.50f;
    this->AllowEventBubbleUp = false;
    this->KeepProgress = false;
}

void UUIScrollViewComponent::UnregisterScrollEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIScrollViewComponent::SetVertical(bool Value) {
}

void UUIScrollViewComponent::SetVelocity(const FVector2D& Value) {
}

void UUIScrollViewComponent::SetScrollValue(FVector2D Value) {
}

void UUIScrollViewComponent::SetScrollSensitivity(float Value) {
}

void UUIScrollViewComponent::SetScrollProgress(FVector2D Value) {
}

void UUIScrollViewComponent::SetScrollDelta(FVector2D Value) {
}

void UUIScrollViewComponent::SetRestrictRectArea(bool Value) {
}

void UUIScrollViewComponent::SetOutOfRangeDamper(float Value) {
}

void UUIScrollViewComponent::SetOnlyOneDirection(bool Value) {
}

void UUIScrollViewComponent::SetHorizontal(bool Value) {
}

void UUIScrollViewComponent::SetDecelerateRate(float Value) {
}

void UUIScrollViewComponent::SetCanScrollInSmallSize(bool Value) {
}

void UUIScrollViewComponent::ScrollTo(UUIItem* InChild, bool InEaseAnimation, float InAnimationDuration) {
}

FLGUIDelegateHandleWrapper UUIScrollViewComponent::RegisterScrollEvent(const FLGUIScrollViewDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void UUIScrollViewComponent::RectRangeChanged() {
}

FVector2D UUIScrollViewComponent::GetVerticalRange() const {
    return FVector2D{};
}

bool UUIScrollViewComponent::GetVertical() const {
    return false;
}

FVector2D UUIScrollViewComponent::GetVelocity() const {
    return FVector2D{};
}

float UUIScrollViewComponent::GetScrollSensitivity() const {
    return 0.0f;
}

FVector2D UUIScrollViewComponent::GetScrollProgress() const {
    return FVector2D{};
}

bool UUIScrollViewComponent::GetRestrictRectArea() const {
    return false;
}

float UUIScrollViewComponent::GetOutOfRangeDamper() const {
    return 0.0f;
}

bool UUIScrollViewComponent::GetOnlyOneDirection() const {
    return false;
}

FVector2D UUIScrollViewComponent::GetHorizontalRange() const {
    return FVector2D{};
}

bool UUIScrollViewComponent::GetHorizontal() const {
    return false;
}

float UUIScrollViewComponent::GetDecelerateRate() const {
    return 0.0f;
}

AUIBaseActor* UUIScrollViewComponent::GetContent() const {
    return NULL;
}

bool UUIScrollViewComponent::GetCanScrollInSmallSize() const {
    return false;
}


