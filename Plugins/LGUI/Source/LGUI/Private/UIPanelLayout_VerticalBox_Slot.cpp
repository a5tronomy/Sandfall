#include "UIPanelLayout_VerticalBox_Slot.h"

UUIPanelLayout_VerticalBox_Slot::UUIPanelLayout_VerticalBox_Slot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

void UUIPanelLayout_VerticalBox_Slot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> Value) {
}

void UUIPanelLayout_VerticalBox_Slot::SetSizeRule(const FSlateChildSize& Value) {
}

void UUIPanelLayout_VerticalBox_Slot::SetPadding(const FMargin& Value) {
}

void UUIPanelLayout_VerticalBox_Slot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> Value) {
}

TEnumAsByte<EVerticalAlignment> UUIPanelLayout_VerticalBox_Slot::GetVerticalAlignment() const {
    return VAlign_Fill;
}

FSlateChildSize UUIPanelLayout_VerticalBox_Slot::GetSizeRule() const {
    return FSlateChildSize{};
}

FMargin UUIPanelLayout_VerticalBox_Slot::GetPadding() const {
    return FMargin{};
}

TEnumAsByte<EHorizontalAlignment> UUIPanelLayout_VerticalBox_Slot::GetHorizontalAlignment() const {
    return HAlign_Fill;
}


