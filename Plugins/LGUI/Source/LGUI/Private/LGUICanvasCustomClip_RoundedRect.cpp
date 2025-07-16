#include "LGUICanvasCustomClip_RoundedRect.h"

ULGUICanvasCustomClip_RoundedRect::ULGUICanvasCustomClip_RoundedRect() {
    this->CornerRadiusUnitMode = ELGUICanvasCustomClip_RoundedRect_UnitMode::Percentage;
}

void ULGUICanvasCustomClip_RoundedRect::SetCornerRadiusUnitMode(ELGUICanvasCustomClip_RoundedRect_UnitMode Value) {
}

void ULGUICanvasCustomClip_RoundedRect::SetCornerRadius(const FVector4f& Value) {
}

ELGUICanvasCustomClip_RoundedRect_UnitMode ULGUICanvasCustomClip_RoundedRect::GetCornerRadiusUnitMode() const {
    return ELGUICanvasCustomClip_RoundedRect_UnitMode::Value;
}

FVector4f ULGUICanvasCustomClip_RoundedRect::GetCornerRadius() const {
    return FVector4f{};
}


