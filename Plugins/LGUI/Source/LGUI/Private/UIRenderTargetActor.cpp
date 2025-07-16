#include "UIRenderTargetActor.h"
#include "UIRenderTarget.h"

AUIRenderTargetActor::AUIRenderTargetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUIRenderTarget>(TEXT("UIRenderTarget"));
    this->UIRenderTarget = (UUIRenderTarget*)RootComponent;
}

UUIRenderTarget* AUIRenderTargetActor::Get2DLineRing() const {
    return NULL;
}


