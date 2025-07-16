#include "UIToggleComponent.h"

UUIToggleComponent::UUIToggleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ToggleTransition = UIToggleTransitionType::Fade;
    this->ToggleTransitionTweener = NULL;
    this->OnAlpha = 1.00f;
    this->OffAlpha = 0.00f;
    this->ToggleDuration = 0.20f;
    this->OnTransitionName = TEXT("On");
    this->OffTransitionName = TEXT("Off");
    this->IsOn = true;
}

void UUIToggleComponent::UnregisterToggleEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void UUIToggleComponent::SetValue(bool NewValue, bool fireEvent) {
}

void UUIToggleComponent::SetToggleGroup(UUIToggleGroupComponent* InGroupComp) {
}

FLGUIDelegateHandleWrapper UUIToggleComponent::RegisterToggleEvent(const FLGUIToggleDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

bool UUIToggleComponent::GetValue() const {
    return false;
}

AActor* UUIToggleComponent::GetToggleGroupActor() const {
    return NULL;
}

int32 UUIToggleComponent::GetIndexInGroup() const {
    return 0;
}


