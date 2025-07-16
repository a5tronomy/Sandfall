#include "ALSCharacterAnimInstance.h"

UALSCharacterAnimInstance::UALSCharacterAnimInstance() {
    this->Character = NULL;
    this->FlailRate = 0.00f;
    this->DiagonalScaleAmountCurve = NULL;
    this->StrideBlend_N_Walk = NULL;
    this->StrideBlend_N_Run = NULL;
    this->StrideBlend_C_Walk = NULL;
    this->LandPredictionCurve = NULL;
    this->LeanInAirCurve = NULL;
    this->YawOffset_FB = NULL;
    this->YawOffset_LR = NULL;
    this->TransitionAnim_R = NULL;
    this->TransitionAnim_L = NULL;
    this->IkFootL_BoneName = TEXT("ik_foot_l");
    this->IkFootR_BoneName = TEXT("ik_foot_r");
    this->ALSDebugComponent = NULL;
}

bool UALSCharacterAnimInstance::ShouldMoveCheck() const {
    return false;
}

void UALSCharacterAnimInstance::SetTrackedHipsDirection(EALSHipsDirection HipsDirection) {
}

void UALSCharacterAnimInstance::SetGroundedEntryState(EALSGroundedEntryState NewState) {
}

void UALSCharacterAnimInstance::PlayTransitionChecked(const FALSDynamicMontageParams& Parameters) {
}

void UALSCharacterAnimInstance::PlayTransition(const FALSDynamicMontageParams& Parameters) {
}

void UALSCharacterAnimInstance::PlayDynamicTransition(float ReTriggerDelay, FALSDynamicMontageParams Parameters) {
}

void UALSCharacterAnimInstance::OnPivot() {
}

void UALSCharacterAnimInstance::OnJumped() {
}

bool UALSCharacterAnimInstance::CanTurnInPlace() const {
    return false;
}

bool UALSCharacterAnimInstance::CanRotateInPlace() const {
    return false;
}

bool UALSCharacterAnimInstance::CanDynamicTransition() const {
    return false;
}


