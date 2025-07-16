#include "UIBackgroundBlur.h"

UUIBackgroundBlur::UUIBackgroundBlur(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlurStrength = 10.00f;
    this->applyAlphaToBlur = true;
    this->maxDownSampleLevel = 6;
    this->strengthTexture = NULL;
}

void UUIBackgroundBlur::SetStrengthTexture(UTexture2D* NewValue) {
}

void UUIBackgroundBlur::SetMaxDownSampleLevel(int32 NewValue) {
}

void UUIBackgroundBlur::SetBlurStrength(float NewValue) {
}

void UUIBackgroundBlur::SetApplyAlphaToBlur(bool NewValue) {
}

UTexture2D* UUIBackgroundBlur::GetStrengthTexture() const {
    return NULL;
}

int32 UUIBackgroundBlur::GetMaxDownSampleLevel() const {
    return 0;
}

float UUIBackgroundBlur::GetBlurStrength() const {
    return 0.0f;
}

bool UUIBackgroundBlur::GetApplyAlphaToBlur() const {
    return false;
}


