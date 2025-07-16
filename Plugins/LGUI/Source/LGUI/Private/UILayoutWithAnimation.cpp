#include "UILayoutWithAnimation.h"

UUILayoutWithAnimation::UUILayoutWithAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationType = EUILayoutAnimationType::Immediately;
    this->AnimationDuration = 0.30f;
    this->CustomAnimation = NULL;
}

void UUILayoutWithAnimation::SetCustomAnimation(UUILayoutWithAnimation_CustomAnimation* Value) {
}

void UUILayoutWithAnimation::SetAnimationType(EUILayoutAnimationType Value) {
}

void UUILayoutWithAnimation::SetAnimationDuration(float Value) {
}

UUILayoutWithAnimation_CustomAnimation* UUILayoutWithAnimation::GetCustomAnimation() const {
    return NULL;
}

EUILayoutAnimationType UUILayoutWithAnimation::GetAnimationType() const {
    return EUILayoutAnimationType::Immediately;
}

float UUILayoutWithAnimation::GetAnimationDuration() const {
    return 0.0f;
}

void UUILayoutWithAnimation::CancelAllAnimations(bool callComplete) {
}


