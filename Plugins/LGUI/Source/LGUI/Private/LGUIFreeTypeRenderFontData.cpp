#include "LGUIFreeTypeRenderFontData.h"

ULGUIFreeTypeRenderFontData::ULGUIFreeTypeRenderFontData() {
    this->fontType = ELGUIDynamicFontDataType::CustomFontFile;
    this->useRelativeFilePath = true;
    this->useExternalFileOrEmbedInToUAsset = false;
    this->unrealFont = NULL;
    this->FontFace = 0;
    this->lineHeightType = ELGUIDynamicFontLineHeightType::FontSizeAsLineHeight;
    this->hasKerning = false;
    this->initialSize = ELGUIAtlasTextureSizeType::SIZE_1024x1024;
    this->rectPackCellSize = 256;
    this->Texture = NULL;
}


