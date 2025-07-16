#include "CharacterSpringArmComponent.h"

UCharacterSpringArmComponent::UCharacterSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreX = false;
    this->bIgnoreY = false;
    this->bIgnoreZ = false;
}


