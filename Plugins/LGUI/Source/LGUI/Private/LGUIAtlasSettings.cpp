#include "LGUIAtlasSettings.h"

FLGUIAtlasSettings::FLGUIAtlasSettings() {
    this->atlasTextureInitialSize = ELGUIAtlasTextureSizeType::SIZE_256x256;
    this->atlasTextureUseSRGB = false;
    this->atlasTextureFilter = TF_Nearest;
    this->spaceBetweenSprites = 0;
}

