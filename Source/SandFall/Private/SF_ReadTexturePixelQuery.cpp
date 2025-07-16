#include "SF_ReadTexturePixelQuery.h"

USF_ReadTexturePixelQuery::USF_ReadTexturePixelQuery() {
}

bool USF_ReadTexturePixelQuery::TryReadPixel(int32 PositionX, int32 PositionY, uint8& PixelValue, float& PixelValueNormalized) {
    return false;
}

bool USF_ReadTexturePixelQuery::HasValidData() {
    return false;
}

int32 USF_ReadTexturePixelQuery::GetTextureWidth() {
    return 0;
}

int32 USF_ReadTexturePixelQuery::GetTextureHeight() {
    return 0;
}

void USF_ReadTexturePixelQuery::FeedTexture(TSoftObjectPtr<UTexture2D> TextureRef) {
}


