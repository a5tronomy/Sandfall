#include "UIFlexibleGridLayout.h"

UUIFlexibleGridLayout::UUIFlexibleGridLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Columns.AddDefaulted(2);
    this->Rows.AddDefaulted(2);
}

void UUIFlexibleGridLayout::SetSpacing(const FVector2D& Value) {
}

void UUIFlexibleGridLayout::SetRows(const TArray<FUIFlexibleGridLayoutCellData>& Value) {
}

void UUIFlexibleGridLayout::SetPadding(FMargin Value) {
}

void UUIFlexibleGridLayout::SetColumns(const TArray<FUIFlexibleGridLayoutCellData>& Value) {
}

FVector2D UUIFlexibleGridLayout::GetSpacing() const {
    return FVector2D{};
}

TArray<FUIFlexibleGridLayoutCellData> UUIFlexibleGridLayout::GetRows() const {
    return TArray<FUIFlexibleGridLayoutCellData>();
}

int32 UUIFlexibleGridLayout::GetRowCount() const {
    return 0;
}

FMargin UUIFlexibleGridLayout::GetPadding() const {
    return FMargin{};
}

TArray<FUIFlexibleGridLayoutCellData> UUIFlexibleGridLayout::GetColumns() const {
    return TArray<FUIFlexibleGridLayoutCellData>();
}

int32 UUIFlexibleGridLayout::GetColumnCount() const {
    return 0;
}


