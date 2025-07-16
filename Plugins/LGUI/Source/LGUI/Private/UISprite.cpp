#include "UISprite.h"

UUISprite::UUISprite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EUISpriteType::Normal;
    this->FillMethod = EUISpriteFillMethod::Horizontal;
    this->fillOrigin = 0;
    this->fillDirectionFlip = false;
    this->fillAmount = 1.00f;
}

void UUISprite::SetSpriteType(EUISpriteType NewType) {
}

void UUISprite::SetFillOrigin(uint8 NewValue) {
}

void UUISprite::SetFillMethod(EUISpriteFillMethod NewValue) {
}

void UUISprite::SetFillDirectionFlip(bool NewValue) {
}

void UUISprite::SetFillAmount(float NewValue) {
}

EUISpriteType UUISprite::GetSpriteType() const {
    return EUISpriteType::Normal;
}

uint8 UUISprite::GetFillOrigin() const {
    return 0;
}

EUISpriteFillMethod UUISprite::GetFillMethod() const {
    return EUISpriteFillMethod::Horizontal;
}

bool UUISprite::GetFillDirectionFlip() const {
    return false;
}

float UUISprite::GetFillAmount() const {
    return 0.0f;
}


