#include "LGUIRichTextImageData.h"

ULGUIRichTextImageData::ULGUIRichTextImageData() {
    this->animationFps = 4.00f;
}

void ULGUIRichTextImageData::SetImageMap(const TMap<FName, FLGUIRichTextImageItemData>& Value) {
}

void ULGUIRichTextImageData::SetAnimationFps(float Value) {
}

TMap<FName, FLGUIRichTextImageItemData> ULGUIRichTextImageData::GetMutableImageMap() {
    return TMap<FName, FLGUIRichTextImageItemData>();
}

TMap<FName, FLGUIRichTextImageItemData> ULGUIRichTextImageData::GetImageMap() const {
    return TMap<FName, FLGUIRichTextImageItemData>();
}

float ULGUIRichTextImageData::GetAnimationFps() const {
    return 0.0f;
}

void ULGUIRichTextImageData::BroadcastOnDataChange() {
}


