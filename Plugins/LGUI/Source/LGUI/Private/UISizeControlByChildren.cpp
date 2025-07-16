#include "UISizeControlByChildren.h"

UUISizeControlByChildren::UUISizeControlByChildren(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWidthFitToChildren = false;
    this->AdditionalWidth = 0.00f;
    this->bHeightFitToChildren = false;
    this->AdditionalHeight = 0.00f;
}

void UUISizeControlByChildren::SetWidthFitToChildren(bool Value) {
}

void UUISizeControlByChildren::SetHeightFitToChildren(bool Value) {
}

void UUISizeControlByChildren::SetAdditionalWidth(float Value) {
}

void UUISizeControlByChildren::SetAdditionalHeight(float Value) {
}

bool UUISizeControlByChildren::GetWidthFitToChildren() const {
    return false;
}

float UUISizeControlByChildren::GetHeightFitToChildren() const {
    return 0.0f;
}

float UUISizeControlByChildren::GetAdditionalWidth() const {
    return 0.0f;
}

float UUISizeControlByChildren::GetAdditionalHeight() const {
    return 0.0f;
}


