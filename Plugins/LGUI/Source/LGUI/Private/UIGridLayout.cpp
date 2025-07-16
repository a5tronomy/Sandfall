#include "UIGridLayout.h"

UUIGridLayout::UUIGridLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Align = ELGUILayoutAlignmentType::UpperLeft;
    this->LastLineCanAlign = true;
    this->HorizontalOrVertical = true;
    this->DependOnSizeOrCount = true;
    this->ExpendChildSize = false;
    this->LineCount = 5;
    this->WidthFitToChildren = false;
    this->HeightFitToChildren = false;
}

void UUIGridLayout::SetWidthFitToChildren(bool Value) {
}

void UUIGridLayout::SetSpacing(FVector2D Value) {
}

void UUIGridLayout::SetPadding(FMargin Value) {
}

void UUIGridLayout::SetMaxItemCountInOneLine(int32 Value) {
}

void UUIGridLayout::SetLastLineCanAlign(bool Value) {
}

void UUIGridLayout::SetHorizontalOrVertical(bool Value) {
}

void UUIGridLayout::SetHeightFitToChildren(bool Value) {
}

void UUIGridLayout::SetExpendChildSize(bool Value) {
}

void UUIGridLayout::SetDependOnSizeOrCount(bool Value) {
}

void UUIGridLayout::SetCellSize(FVector2D Value) {
}

void UUIGridLayout::SetAlign(ELGUILayoutAlignmentType Value) {
}

bool UUIGridLayout::GetWidthFitToChildren() const {
    return false;
}

FVector2D UUIGridLayout::GetSpacing() const {
    return FVector2D{};
}

FMargin UUIGridLayout::GetPadding() const {
    return FMargin{};
}

int32 UUIGridLayout::GetMaxItemCountInOneLine() const {
    return 0;
}

bool UUIGridLayout::GetLastLineCanAlign() const {
    return false;
}

bool UUIGridLayout::GetHorizontalOrVertical() const {
    return false;
}

bool UUIGridLayout::GetHeightFitToChildren() const {
    return false;
}

bool UUIGridLayout::GetExpendChildSize() const {
    return false;
}

bool UUIGridLayout::GetDependOnSizeOrCount() const {
    return false;
}

FVector2D UUIGridLayout::GetCellSize() const {
    return FVector2D{};
}

ELGUILayoutAlignmentType UUIGridLayout::GetAlign() const {
    return ELGUILayoutAlignmentType::UpperLeft;
}

FVector2D UUIGridLayout::GetActuralRange() const {
    return FVector2D{};
}


