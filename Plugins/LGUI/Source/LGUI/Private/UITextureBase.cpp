#include "UITextureBase.h"

UUITextureBase::UUITextureBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Texture = NULL;
}

void UUITextureBase::SetTexture(UTexture* newTexture) {
}

void UUITextureBase::SetSizeFromTexture() {
}

UTexture* UUITextureBase::GetTexture() const {
    return NULL;
}

UTexture* UUITextureBase::GetDefaultWhiteTexture() {
    return NULL;
}


