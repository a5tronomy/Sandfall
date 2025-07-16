#include "UIWidgetInteraction.h"

UUIWidgetInteraction::UUIWidgetInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowEventBubbleUp = false;
    this->Helper = NULL;
    this->VirtualUserIndex = 0;
    this->WidgetComponent = NULL;
    this->bIsHoveredWidgetInteractable = false;
    this->bIsHoveredWidgetFocusable = false;
    this->bIsHoveredWidgetHitTestVisible = false;
}

void UUIWidgetInteraction::SetFocus(UWidget* FocusWidget) {
}

void UUIWidgetInteraction::SetCustomHitResult(const FHitResult& HitResult) {
}

bool UUIWidgetInteraction::SendKeyChar(const FString& Characters, bool bRepeat) {
    return false;
}

void UUIWidgetInteraction::ScrollWheel(float ScrollDelta) {
}

void UUIWidgetInteraction::ReleasePointerKey(FKey Key) {
}

bool UUIWidgetInteraction::ReleaseKey(FKey Key) {
    return false;
}

void UUIWidgetInteraction::PressPointerKey(FKey Key) {
}

bool UUIWidgetInteraction::PressKey(FKey Key, bool bRepeat) {
    return false;
}

bool UUIWidgetInteraction::PressAndReleaseKey(FKey Key) {
    return false;
}

bool UUIWidgetInteraction::IsOverInteractableWidget() const {
    return false;
}

bool UUIWidgetInteraction::IsOverHitTestVisibleWidget() const {
    return false;
}

bool UUIWidgetInteraction::IsOverFocusableWidget() const {
    return false;
}

FVector2D UUIWidgetInteraction::Get2DHitLocation() const {
    return FVector2D{};
}


