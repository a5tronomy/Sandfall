#include "UIText.h"

UUIText::UUIText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Font = NULL;
    this->Text = FText::FromString(TEXT("New Text"));
    this->Size = 16.00f;
    this->useKerning = true;
    this->HAlign = EUITextParagraphHorizontalAlign::Center;
    this->VAlign = EUITextParagraphVerticalAlign::Middle;
    this->overflowType = EUITextOverflowType::VerticalOverflow;
    this->adjustWidth = false;
    this->adjustHeight = false;
    this->maxHorizontalWidth = 100.00f;
    this->fontStyle = EUITextFontStyle::None;
    this->richText = false;
    this->richTextTagFilterFlags = -1;
    this->richTextCustomStyleData = NULL;
    this->richTextImageData = NULL;
}

void UUIText::SetUseKerning(bool Value) {
}

void UUIText::SetText(const FText& newText) {
}

void UUIText::SetRichTextTagFilterFlags(int32 Value) {
}

void UUIText::SetRichTextImageData(ULGUIRichTextImageData_BaseObject* Value) {
}

void UUIText::SetRichTextCustomStyleData(ULGUIRichTextCustomStyleData* Value) {
}

void UUIText::SetRichText(bool newRichText) {
}

void UUIText::SetParagraphVerticalAlignment(EUITextParagraphVerticalAlign newVAlign) {
}

void UUIText::SetParagraphHorizontalAlignment(EUITextParagraphHorizontalAlign newHAlign) {
}

void UUIText::SetOverflowType(EUITextOverflowType newOverflowType) {
}

void UUIText::SetMaxHorizontalWidth(float Value) {
}

void UUIText::SetFontStyle(EUITextFontStyle newFontStyle) {
}

void UUIText::SetFontSpace(FVector2D NewSpace) {
}

void UUIText::SetFontSize(float NewSize) {
}

void UUIText::SetFont(ULGUIFontData_BaseObject* newFont) {
}

void UUIText::SetAdjustWidth(bool newAdjustWidth) {
}

void UUIText::SetAdjustHeight(bool newAdjustHeight) {
}

int32 UUIText::GetVisibleCharCount() const {
    return 0;
}

bool UUIText::GetUseKerning() const {
    return false;
}

FVector2D UUIText::GetTextRealSize() const {
    return FVector2D{};
}

FText UUIText::GetText() const {
    return FText::GetEmpty();
}

float UUIText::GetSize() const {
    return 0.0f;
}

int32 UUIText::GetRichTextTagFilterFlags() const {
    return 0;
}

TArray<FUIText_RichTextImageTag> UUIText::GetRichTextImageTagArray() const {
    return TArray<FUIText_RichTextImageTag>();
}

ULGUIRichTextImageData_BaseObject* UUIText::GetRichTextImageData() const {
    return NULL;
}

TArray<FUIText_RichTextCustomTag> UUIText::GetRichTextCustomTagArray() const {
    return TArray<FUIText_RichTextCustomTag>();
}

ULGUIRichTextCustomStyleData* UUIText::GetRichTextCustomStyleData() const {
    return NULL;
}

bool UUIText::GetRichText() const {
    return false;
}

FVector2D UUIText::GetRealSize() {
    return FVector2D{};
}

EUITextParagraphVerticalAlign UUIText::GetParagraphVerticalAlignment() const {
    return EUITextParagraphVerticalAlign::Top;
}

EUITextParagraphHorizontalAlign UUIText::GetParagraphHorizontalAlignment() const {
    return EUITextParagraphHorizontalAlign::Left;
}

EUITextOverflowType UUIText::GetOverflowType() const {
    return EUITextOverflowType::HorizontalOverflow;
}

float UUIText::GetMaxHorizontalWidth() const {
    return 0.0f;
}

EUITextFontStyle UUIText::GetFontStyle() const {
    return EUITextFontStyle::None;
}

FVector2D UUIText::GetFontSpace() const {
    return FVector2D{};
}

float UUIText::GetFontSize() const {
    return 0.0f;
}

ULGUIFontData_BaseObject* UUIText::GetFont() const {
    return NULL;
}

TArray<FUITextCharProperty> UUIText::GetCharPropertyArray() const {
    return TArray<FUITextCharProperty>();
}

FVector2D UUIText::GetAdjustWidthRange() const {
    return FVector2D{};
}

bool UUIText::GetAdjustWidth() const {
    return false;
}

FVector2D UUIText::GetAdjustHeightRange() const {
    return FVector2D{};
}

bool UUIText::GetAdjustHeight() const {
    return false;
}


