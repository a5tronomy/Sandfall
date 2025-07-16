#include "UIButtonComponent.h"

UUIButtonComponent::UUIButtonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UUIButtonComponent::UnregisterClickEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

FLGUIDelegateHandleWrapper UUIButtonComponent::RegisterClickEvent(const FLGUIButtonDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}


