#include "LGUIPlayTweenSequenceComponent.h"

ULGUIPlayTweenSequenceComponent::ULGUIPlayTweenSequenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->playOnStart = true;
    this->bPlayNextWhenCycleComplete = false;
}

void ULGUIPlayTweenSequenceComponent::UnregisterOnComplete(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void ULGUIPlayTweenSequenceComponent::Stop() {
}

FLGUIDelegateHandleWrapper ULGUIPlayTweenSequenceComponent::RegisterOnComplete(const FLGUIPlayTweenCompleteDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

void ULGUIPlayTweenSequenceComponent::Play() {
}


