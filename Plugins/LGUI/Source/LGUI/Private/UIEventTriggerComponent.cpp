#include "UIEventTriggerComponent.h"

UUIEventTriggerComponent::UUIEventTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowEventBubbleUp = false;
}

void UUIEventTriggerComponent::UnregisterOnPointerUp(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerSelect(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerScroll(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerExit(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerEnter(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerEndDrag(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerDragDrop(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerDrag(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerDown(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerDeselect(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerClick(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIEventTriggerComponent::UnregisterOnPointerBeginDrag(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerUp(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerSelect(const FLGUIBaseEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerScroll(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerExit(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerEnter(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerEndDrag(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerDragDrop(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerDrag(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerDown(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerDeselect(const FLGUIBaseEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerClick(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper UUIEventTriggerComponent::RegisterOnPointerBeginDrag(const FLGUIPointerEventDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}


