#include "ALSDebugComponent.h"

UALSDebugComponent::UALSDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacter = NULL;
    this->bSlomo = false;
    this->bShowHUD = false;
    this->bShowCharacterInfo = false;
    this->DebugSkeletalMesh = NULL;
    this->DebugFocusCharacter = NULL;
    this->DefaultSkeletalMesh = NULL;
}


void UALSDebugComponent::ToggleTraces() {
}

void UALSDebugComponent::ToggleSlomo() {
}

void UALSDebugComponent::ToggleLayerColors() {
}

void UALSDebugComponent::ToggleHud() {
}

void UALSDebugComponent::ToggleGlobalTimeDilationLocal(float TimeDilation) {
}

void UALSDebugComponent::ToggleDebugView() {
}

void UALSDebugComponent::ToggleDebugShapes() {
}

void UALSDebugComponent::ToggleDebugMesh() {
}

void UALSDebugComponent::ToggleCharacterInfo() {
}



void UALSDebugComponent::OverlayMenuCycle_Implementation(bool bValue) {
}

void UALSDebugComponent::OpenOverlayMenu_Implementation(bool bValue) {
}


bool UALSDebugComponent::GetShowTraces() {
    return false;
}

bool UALSDebugComponent::GetShowLayerColors() {
    return false;
}

bool UALSDebugComponent::GetShowDebugShapes() {
    return false;
}

bool UALSDebugComponent::GetDebugView() {
    return false;
}

void UALSDebugComponent::FocusedDebugCharacterCycle(bool bValue) {
}



