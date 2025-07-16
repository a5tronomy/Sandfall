#include "UIRing.h"

UUIRing::UUIRing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartAngle = 0.00f;
    this->EndAngle = 90.00f;
    this->Segment = 12;
}

ULTweener* UUIRing::StartAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}

void UUIRing::SetStartAngle(float NewValue) {
}

void UUIRing::SetSegment(int32 NewValue) {
}

void UUIRing::SetEndAngle(float NewValue) {
}

float UUIRing::GetStartAngle() const {
    return 0.0f;
}

int32 UUIRing::GetSegment() const {
    return 0;
}

float UUIRing::GetEndAngle() const {
    return 0.0f;
}

ULTweener* UUIRing::EndAngleTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}


