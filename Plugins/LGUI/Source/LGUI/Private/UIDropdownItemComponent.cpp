#include "UIDropdownItemComponent.h"

UUIDropdownItemComponent::UUIDropdownItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}



UUIToggleComponent* UUIDropdownItemComponent::GetToggle() const {
    return NULL;
}

AUITextActor* UUIDropdownItemComponent::GetTextActor() const {
    return NULL;
}

AUISpriteActor* UUIDropdownItemComponent::GetSpriteActor() const {
    return NULL;
}

void UUIDropdownItemComponent::DynamicDelegate_OnSelect() {
}


