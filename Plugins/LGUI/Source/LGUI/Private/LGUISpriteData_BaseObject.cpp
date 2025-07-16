#include "LGUISpriteData_BaseObject.h"

ULGUISpriteData_BaseObject::ULGUISpriteData_BaseObject() {
}

bool ULGUISpriteData_BaseObject::ReadPixel(const FVector2D& InUV, FColor& OutPixel) const {
    return false;
}

bool ULGUISpriteData_BaseObject::IsIndividual() const {
    return false;
}

FLGUISpriteInfo ULGUISpriteData_BaseObject::GetSpriteInfo() {
    return FLGUISpriteInfo{};
}

UTexture2D* ULGUISpriteData_BaseObject::GetAtlasTexture() {
    return NULL;
}


