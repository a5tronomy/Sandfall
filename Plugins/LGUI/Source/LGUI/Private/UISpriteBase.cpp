#include "UISpriteBase.h"

UUISpriteBase::UUISpriteBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sprite = NULL;
}

void UUISpriteBase::SetSprite(ULGUISpriteData_BaseObject* NewSprite, bool SetSize) {
}

void UUISpriteBase::SetSizeFromSpriteData() {
}

ULGUISpriteData_BaseObject* UUISpriteBase::GetSprite() const {
    return NULL;
}


