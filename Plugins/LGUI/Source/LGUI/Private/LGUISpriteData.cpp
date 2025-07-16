#include "LGUISpriteData.h"

ULGUISpriteData::ULGUISpriteData() {
    this->SpriteTexture = NULL;
    this->packingAtlas = NULL;
    this->packingTag = TEXT("Main");
    this->useEdgePixelPadding = true;
    this->atlasTexture = NULL;
}

bool ULGUISpriteData::HavePackingTag() const {
    return false;
}

UTexture2D* ULGUISpriteData::GetSpriteTexture() const {
    return NULL;
}

FName ULGUISpriteData::GetPackingTag() const {
    return NAME_None;
}

ULGUISpriteData* ULGUISpriteData::CreateLGUISpriteData(UObject* Outer, UTexture2D* inSpriteTexture, FVector2D inHorizontalBorder, FVector2D inVerticalBorder, FName inPackingTag) {
    return NULL;
}


