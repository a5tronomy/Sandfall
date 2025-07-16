#include "UIEventBlockerComponent.h"

UUIEventBlockerComponent::UUIEventBlockerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowEventBubbleUp = false;
}


