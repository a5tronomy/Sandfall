#include "UISizeControlByOther.h"

UUISizeControlByOther::UUISizeControlByOther(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlWidth = false;
    this->AdditionalWidth = 0.00f;
    this->ControlHeight = false;
    this->AdditionalHeight = 0.00f;
}

void UUISizeControlByOther::SetTargetActor(AUIBaseActor* Value) {
}

void UUISizeControlByOther::SetControlWidth(bool Value) {
}

void UUISizeControlByOther::SetControlHeight(bool Value) {
}

void UUISizeControlByOther::SetAdditionalWidth(float Value) {
}

void UUISizeControlByOther::SetAdditionalHeight(float Value) {
}

AUIBaseActor* UUISizeControlByOther::GetTargetActor() const {
    return NULL;
}

bool UUISizeControlByOther::GetControlWidth() const {
    return false;
}

bool UUISizeControlByOther::GetControlHeight() const {
    return false;
}

float UUISizeControlByOther::GetAdditionalWidth() const {
    return 0.0f;
}

float UUISizeControlByOther::GetAdditionalHeight() const {
    return 0.0f;
}


