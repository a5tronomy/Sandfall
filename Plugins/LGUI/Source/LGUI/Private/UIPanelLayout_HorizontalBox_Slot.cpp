#include "UIPanelLayout_HorizontalBox_Slot.h"

UUIPanelLayout_HorizontalBox_Slot::UUIPanelLayout_HorizontalBox_Slot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UUIPanelLayout_HorizontalBox_Slot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> Value) {
}

void UUIPanelLayout_HorizontalBox_Slot::SetSizeRule(const FSlateChildSize& Value) {
}

void UUIPanelLayout_HorizontalBox_Slot::SetPadding(const FMargin& Value) {
}

void UUIPanelLayout_HorizontalBox_Slot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> Value) {
}

TEnumAsByte<EVerticalAlignment> UUIPanelLayout_HorizontalBox_Slot::GetVerticalAlignment() const {
    return VAlign_Fill;
}

FSlateChildSize UUIPanelLayout_HorizontalBox_Slot::GetSizeRule() const {
    return FSlateChildSize{};
}

FMargin UUIPanelLayout_HorizontalBox_Slot::GetPadding() const {
    return FMargin{};
}

TEnumAsByte<EHorizontalAlignment> UUIPanelLayout_HorizontalBox_Slot::GetHorizontalAlignment() const {
    return HAlign_Fill;
}


