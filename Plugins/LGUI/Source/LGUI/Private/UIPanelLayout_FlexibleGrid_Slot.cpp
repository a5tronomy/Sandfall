#include "UIPanelLayout_FlexibleGrid_Slot.h"

UUIPanelLayout_FlexibleGrid_Slot::UUIPanelLayout_FlexibleGrid_Slot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->Column = 0;
    this->ColumnSpan = 1;
    this->Row = 0;
    this->RowSpan = 1;
}

void UUIPanelLayout_FlexibleGrid_Slot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> Value) {
}

void UUIPanelLayout_FlexibleGrid_Slot::SetRowSpan(int32 Value) {
}

void UUIPanelLayout_FlexibleGrid_Slot::SetRow(int32 Value) {
}

void UUIPanelLayout_FlexibleGrid_Slot::SetPadding(const FMargin& Value) {
}

void UUIPanelLayout_FlexibleGrid_Slot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> Value) {
}

void UUIPanelLayout_FlexibleGrid_Slot::SetColumnSpan(int32 Value) {
}

void UUIPanelLayout_FlexibleGrid_Slot::SetColumn(int32 Value) {
}

TEnumAsByte<EVerticalAlignment> UUIPanelLayout_FlexibleGrid_Slot::GetVerticalAlignment() const {
    return VAlign_Fill;
}

int32 UUIPanelLayout_FlexibleGrid_Slot::GetRowSpan() const {
    return 0;
}

int32 UUIPanelLayout_FlexibleGrid_Slot::GetRow() const {
    return 0;
}

FMargin UUIPanelLayout_FlexibleGrid_Slot::GetPadding() const {
    return FMargin{};
}

TEnumAsByte<EHorizontalAlignment> UUIPanelLayout_FlexibleGrid_Slot::GetHorizontalAlignment() const {
    return HAlign_Fill;
}

int32 UUIPanelLayout_FlexibleGrid_Slot::GetColumnSpan() const {
    return 0;
}

int32 UUIPanelLayout_FlexibleGrid_Slot::GetColumn() const {
    return 0;
}


