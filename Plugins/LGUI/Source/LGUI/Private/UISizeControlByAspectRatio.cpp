#include "UISizeControlByAspectRatio.h"

UUISizeControlByAspectRatio::UUISizeControlByAspectRatio(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlMode = EUISizeControlByAspectRatioMode::None;
    this->AspectRatio = 1.00f;
}

void UUISizeControlByAspectRatio::SetControlMode(EUISizeControlByAspectRatioMode Value) {
}

void UUISizeControlByAspectRatio::SetAspectRatio(float Value) {
}

EUISizeControlByAspectRatioMode UUISizeControlByAspectRatio::GetControlMode() const {
    return EUISizeControlByAspectRatioMode::None;
}

float UUISizeControlByAspectRatio::GetAspectRatio() const {
    return 0.0f;
}


