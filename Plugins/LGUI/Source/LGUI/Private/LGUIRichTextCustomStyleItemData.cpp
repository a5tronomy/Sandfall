#include "LGUIRichTextCustomStyleItemData.h"

FLGUIRichTextCustomStyleItemData::FLGUIRichTextCustomStyleItemData() {
    this->Bold = false;
    this->Italic = false;
    this->underline = false;
    this->strikethrough = false;
    this->SizeType = ELGUIRichTextCustomStyleData_SizeType::KeepOrigin;
    this->Size = 0;
    this->colorType = ELGUIRichTextCustomStyleData_ColorType::KeepOrigin;
    this->supOrSub = ELGUIRichTextCustomStyleData_SupOrSubType::KeepOrigin;
}

