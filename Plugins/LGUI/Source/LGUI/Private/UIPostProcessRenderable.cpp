#include "UIPostProcessRenderable.h"

UUIPostProcessRenderable::UUIPostProcessRenderable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->maskTexture = NULL;
    this->MaskTextureType = EUIPostProcessMaskTextureType::Simple;
}

void UUIPostProcessRenderable::SetMaskTextureUVRect(const FVector4& Value) {
}

void UUIPostProcessRenderable::SetMaskTextureType(EUIPostProcessMaskTextureType Value) {
}

void UUIPostProcessRenderable::SetMaskTextureSpriteInfo(const FLGUISpriteInfo& Value) {
}

void UUIPostProcessRenderable::SetMaskTexture(UTexture2D* NewValue) {
}

FVector4 UUIPostProcessRenderable::GetMaskTextureUVRect() const {
    return FVector4{};
}

EUIPostProcessMaskTextureType UUIPostProcessRenderable::GetMaskTextureType() const {
    return EUIPostProcessMaskTextureType::Simple;
}

FLGUISpriteInfo UUIPostProcessRenderable::GetMaskTextureSpriteInfo() const {
    return FLGUISpriteInfo{};
}

UTexture2D* UUIPostProcessRenderable::GetMaskTexture() const {
    return NULL;
}


