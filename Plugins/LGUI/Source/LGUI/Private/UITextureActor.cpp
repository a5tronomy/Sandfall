#include "UITextureActor.h"
#include "UITexture.h"

AUITextureActor::AUITextureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UUITexture>(TEXT("UITextureComponent"));
    this->UITexture = (UUITexture*)RootComponent;
}

UUITexture* AUITextureActor::GetUITexture() const {
    return NULL;
}


