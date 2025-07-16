#include "UIFrameCaptureActor.h"
#include "UIFrameCapture.h"

AUIFrameCaptureActor::AUIFrameCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIFrameCapture>(TEXT("UIFrameCapture"));
    this->UIFrameCapture = (UUIFrameCapture*)RootComponent;
}

UUIFrameCapture* AUIFrameCaptureActor::GetUIFrameCapture() const {
    return NULL;
}


