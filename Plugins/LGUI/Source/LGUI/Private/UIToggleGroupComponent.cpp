#include "UIToggleGroupComponent.h"

UUIToggleGroupComponent::UUIToggleGroupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowNoneSelected = true;
}

void UUIToggleGroupComponent::UnregisterToggleEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIToggleGroupComponent::SetSelection(UUIToggleComponent* Target) {
}

void UUIToggleGroupComponent::SetAllowNoneSelected(bool InBool) {
}

FLGUIDelegateHandleWrapper UUIToggleGroupComponent::RegisterToggleEvent(const FLGUIToggleGroupDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

int32 UUIToggleGroupComponent::GetToggleIndex(const UUIToggleComponent* InComp) const {
    return 0;
}

UUIToggleComponent* UUIToggleGroupComponent::GetToggleByIndex(int32 InIndex) const {
    return NULL;
}

UUIToggleComponent* UUIToggleGroupComponent::GetSelectedItem() const {
    return NULL;
}

bool UUIToggleGroupComponent::GetAllowNoneSelected() const {
    return false;
}

void UUIToggleGroupComponent::ClearSelection() {
}


