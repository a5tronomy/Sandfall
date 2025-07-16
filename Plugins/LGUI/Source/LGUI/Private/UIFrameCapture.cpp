#include "UIFrameCapture.h"

UUIFrameCapture::UUIFrameCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCaptureFullScreen = true;
    this->CapturedFrame = NULL;
}

UTextureRenderTarget2D* UUIFrameCapture::GetCapturedFrame() const {
    return NULL;
}

void UUIFrameCapture::DoCapture(const FUIFrameCapture_OnFrameReady_DynamicDelegate& InDelegate) {
}


