#include "UI2DLineRendererBase.h"

UUI2DLineRendererBase::UUI2DLineRendererBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineWidth = 10.00f;
    this->EndType = EUI2DLineRenderer_EndType::Cap;
    this->bEndCapSizeAffectByLineWidth = false;
    this->LineWidthOffset = 0.50f;
}

void UUI2DLineRendererBase::SetLineWidthOffset(float NewValue) {
}

void UUI2DLineRendererBase::SetLineWidth(float NewValue) {
}

void UUI2DLineRendererBase::SetEndType(EUI2DLineRenderer_EndType NewValue) {
}

ULTweener* UUI2DLineRendererBase::LineWidthTo(float endValue, float Duration, float Delay, ELTweenEase easetype) {
    return NULL;
}

float UUI2DLineRendererBase::GetLineWidthOffset() const {
    return 0.0f;
}

float UUI2DLineRendererBase::GetLineWidth() const {
    return 0.0f;
}

EUI2DLineRenderer_EndType UUI2DLineRendererBase::GetEndType() const {
    return EUI2DLineRenderer_EndType::None;
}


