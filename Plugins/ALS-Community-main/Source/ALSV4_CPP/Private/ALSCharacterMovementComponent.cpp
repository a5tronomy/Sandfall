#include "ALSCharacterMovementComponent.h"

UALSCharacterMovementComponent::UALSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRequestMovementSettingsChange = 1;
    this->AllowedGait = EALSGait::Walking;
    this->bUseMovementSettingsWhenFlying = false;
    this->CustomDefaultMovementMode = MOVE_None;
    this->AgentName = TEXT("Default");
    this->bForceUseNavMeshWalking = false;
    this->NavMeshWalkingSearchDistance = 10.00f;
    this->NavMeshWalkingHeightSearchScale = 0.80f;
    this->DebugDisplayNavMeshWalkingLifetime = -1.00f;
    this->bForcePositionOnNavMesh = false;
    this->DebugDisplayForcePositionOnNavMeshLifetime = -1.00f;
}

void UALSCharacterMovementComponent::SetMovementSettings(FALSMovementSettings NewMovementSettings) {
}

void UALSCharacterMovementComponent::SetAllowedGait(EALSGait NewAllowedGait) {
}

void UALSCharacterMovementComponent::Server_SetAllowedGait_Implementation(EALSGait NewAllowedGait) {
}


