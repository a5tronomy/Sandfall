#include "LGUIStaticSpriteAtlasData.h"

ULGUIStaticSpriteAtlasData::ULGUIStaticSpriteAtlasData() {
    this->atlasTextureUseSRGB = true;
    this->atlasTextureFilter = TF_Trilinear;
    this->atlasTexture = NULL;
    this->TextureSize = 0;
}

bool ULGUIStaticSpriteAtlasData::ReadPixel(const FVector2D& InUV, FColor& OutPixel) {
    return false;
}

UTexture2D* ULGUIStaticSpriteAtlasData::GetAtlasTexture() {
    return NULL;
}


