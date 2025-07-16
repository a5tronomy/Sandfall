#include "LGUIPlayTweenComponent.h"

ULGUIPlayTweenComponent::ULGUIPlayTweenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->playOnStart = true;
    this->playTween = NULL;
}

void ULGUIPlayTweenComponent::Stop() {
}

void ULGUIPlayTweenComponent::Play() {
}

ULGUIPlayTween* ULGUIPlayTweenComponent::GetPlayTween() const {
    return NULL;
}


