#include "UIRenderableCustomRaycast_VisiblePixel.h"

UUIRenderableCustomRaycast_VisiblePixel::UUIRenderableCustomRaycast_VisiblePixel() {
    this->VisibilityThreshold = 0.10f;
    this->PixelChannel = 3;
}

void UUIRenderableCustomRaycast_VisiblePixel::SetVisibilityThreshold(float Value) {
}

void UUIRenderableCustomRaycast_VisiblePixel::SetPixelChannel(uint8 Value) {
}

float UUIRenderableCustomRaycast_VisiblePixel::GetVisibilityThreshold() const {
    return 0.0f;
}

uint8 UUIRenderableCustomRaycast_VisiblePixel::GetPixelChannel() const {
    return 0;
}


