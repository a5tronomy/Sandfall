#include "UIPanelLayout_FlexibleGrid.h"

UUIPanelLayout_FlexibleGrid::UUIPanelLayout_FlexibleGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Columns.AddDefaulted(2);
    this->Rows.AddDefaulted(2);
}

void UUIPanelLayout_FlexibleGrid::SetRows(const TArray<FUIPanelLayout_FlexibleGridSize>& Value) {
}

void UUIPanelLayout_FlexibleGrid::SetColumns(const TArray<FUIPanelLayout_FlexibleGridSize>& Value) {
}

TArray<FUIPanelLayout_FlexibleGridSize> UUIPanelLayout_FlexibleGrid::GetRows() const {
    return TArray<FUIPanelLayout_FlexibleGridSize>();
}

TArray<FUIPanelLayout_FlexibleGridSize> UUIPanelLayout_FlexibleGrid::GetColumns() const {
    return TArray<FUIPanelLayout_FlexibleGridSize>();
}


