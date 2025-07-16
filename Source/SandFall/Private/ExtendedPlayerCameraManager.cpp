#include "ExtendedPlayerCameraManager.h"

AExtendedPlayerCameraManager::AExtendedPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
}

bool AExtendedPlayerCameraManager::ShouldPlayCameraShake_Implementation() const {
    return false;
}


