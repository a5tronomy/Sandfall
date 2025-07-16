#include "UITexture.h"

UUITexture::UUITexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EUITextureType::Normal;
    this->UVRectControlMode = EUITextureUVRectControlMode::None;
    this->FillMethod = EUISpriteFillMethod::Horizontal;
    this->fillOrigin = 0;
    this->fillDirectionFlip = false;
    this->fillAmount = 1.00f;
}

void UUITexture::SetUVRectControlMode(EUITextureUVRectControlMode NewValue) {
}

void UUITexture::SetUVRect(FVector4 newUVRect) {
}

void UUITexture::SetTextureType(EUITextureType NewType) {
}

void UUITexture::SetSpriteData(FLGUISpriteInfo newSpriteData) {
}

void UUITexture::SetFillOrigin(uint8 NewValue) {
}

void UUITexture::SetFillMethod(EUISpriteFillMethod NewValue) {
}

void UUITexture::SetFillDirectionFlip(bool NewValue) {
}

void UUITexture::SetFillAmount(float NewValue) {
}

EUITextureUVRectControlMode UUITexture::GetUVRectControlMode() const {
    return EUITextureUVRectControlMode::None;
}

FVector4 UUITexture::GetUVRect() const {
    return FVector4{};
}

EUITextureType UUITexture::GetTextureType() const {
    return EUITextureType::Normal;
}

FLGUISpriteInfo UUITexture::GetSpriteData() const {
    return FLGUISpriteInfo{};
}

uint8 UUITexture::GetFillOrigin() const {
    return 0;
}

EUISpriteFillMethod UUITexture::GetFillMethod() const {
    return EUISpriteFillMethod::Horizontal;
}

bool UUITexture::GetFillDirectionFlip() const {
    return false;
}

float UUITexture::GetFillAmount() const {
    return 0.0f;
}


