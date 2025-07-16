#include "UIFlexibleGridLayoutElement.h"

UUIFlexibleGridLayoutElement::UUIFlexibleGridLayoutElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RowIndex = 0;
    this->RowCount = 1;
    this->ColumnIndex = 0;
    this->ColumnCount = 1;
    this->bIgnoreLayout = false;
    this->ParentLayout = NULL;
}

void UUIFlexibleGridLayoutElement::SetRowIndex(int32 Value) {
}

void UUIFlexibleGridLayoutElement::SetRowCount(int32 Value) {
}

void UUIFlexibleGridLayoutElement::SetIgnoreLayout(bool Value) {
}

void UUIFlexibleGridLayoutElement::SetColumnIndex(int32 Value) {
}

void UUIFlexibleGridLayoutElement::SetColumnCount(int32 Value) {
}

int32 UUIFlexibleGridLayoutElement::GetRowIndex() const {
    return 0;
}

int32 UUIFlexibleGridLayoutElement::GetRowCount() const {
    return 0;
}

bool UUIFlexibleGridLayoutElement::GetIgnoreLayout() const {
    return false;
}

int32 UUIFlexibleGridLayoutElement::GetColumnIndex() const {
    return 0;
}

int32 UUIFlexibleGridLayoutElement::GetColumnCount() const {
    return 0;
}


