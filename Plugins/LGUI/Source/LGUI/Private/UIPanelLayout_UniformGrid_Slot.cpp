#include "UIPanelLayout_UniformGrid_Slot.h"

UUIPanelLayout_UniformGrid_Slot::UUIPanelLayout_UniformGrid_Slot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->Column = 0;
    this->Row = 0;
}

void UUIPanelLayout_UniformGrid_Slot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> Value) {
}

void UUIPanelLayout_UniformGrid_Slot::SetRow(int32 Value) {
}

void UUIPanelLayout_UniformGrid_Slot::SetPadding(const FMargin& Value) {
}

void UUIPanelLayout_UniformGrid_Slot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> Value) {
}

void UUIPanelLayout_UniformGrid_Slot::SetColumn(int32 Value) {
}

TEnumAsByte<EVerticalAlignment> UUIPanelLayout_UniformGrid_Slot::GetVerticalAlignment() const {
    return VAlign_Fill;
}

int32 UUIPanelLayout_UniformGrid_Slot::GetRow() const {
    return 0;
}

FMargin UUIPanelLayout_UniformGrid_Slot::GetPadding() const {
    return FMargin{};
}

TEnumAsByte<EHorizontalAlignment> UUIPanelLayout_UniformGrid_Slot::GetHorizontalAlignment() const {
    return HAlign_Fill;
}

int32 UUIPanelLayout_UniformGrid_Slot::GetColumn() const {
    return 0;
}


