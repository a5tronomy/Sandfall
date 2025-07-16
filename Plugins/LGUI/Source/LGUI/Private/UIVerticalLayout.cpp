#include "UIVerticalLayout.h"

UUIVerticalLayout::UUIVerticalLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spacing = 0.00f;
    this->Align = ELGUILayoutAlignmentType::UpperLeft;
    this->ControlChildWidth = true;
    this->ControlChildHeight = true;
    this->ExpandChildWidthArea = false;
    this->ExpandChildHeightArea = false;
    this->HeightFitToChildren = false;
    this->WidthFitToChildren = false;
    this->WidthFitToChildrenFromMinToMax = 1.00f;
    this->UseChildScaleOnHeight = false;
}

void UUIVerticalLayout::SetWidthFitToChildrenFromMinToMax(float Value) {
}

void UUIVerticalLayout::SetWidthFitToChildren(bool Value) {
}

void UUIVerticalLayout::SetUseChildScaleOnHeight(bool Value) {
}

void UUIVerticalLayout::SetSpacing(float Value) {
}

void UUIVerticalLayout::SetPadding(FMargin Value) {
}

void UUIVerticalLayout::SetHeightFitToChildren(bool Value) {
}

void UUIVerticalLayout::SetExpendChildrenWidth(bool Value) {
}

void UUIVerticalLayout::SetExpendChildrenHeight(bool Value) {
}

void UUIVerticalLayout::SetExpandChildWidthArea(bool Value) {
}

void UUIVerticalLayout::SetExpandChildHeightArea(bool Value) {
}

void UUIVerticalLayout::SetControlChildWidth(bool Value) {
}

void UUIVerticalLayout::SetControlChildHeight(bool Value) {
}

void UUIVerticalLayout::SetAlign(ELGUILayoutAlignmentType Value) {
}

float UUIVerticalLayout::GetWidthFitToChildrenFromMinToMax() const {
    return 0.0f;
}

bool UUIVerticalLayout::GetWidthFitToChildren() const {
    return false;
}

bool UUIVerticalLayout::GetUseChildScaleOnHeight() const {
    return false;
}

float UUIVerticalLayout::GetSpacing() const {
    return 0.0f;
}

FMargin UUIVerticalLayout::GetPadding() const {
    return FMargin{};
}

bool UUIVerticalLayout::GetHeightFitToChildren() const {
    return false;
}

bool UUIVerticalLayout::GetExpendChildrenWidth() const {
    return false;
}

bool UUIVerticalLayout::GetExpendChildrenHeight() const {
    return false;
}

bool UUIVerticalLayout::GetExpandChildWidthArea() const {
    return false;
}

bool UUIVerticalLayout::GetExpandChildHeightArea() const {
    return false;
}

bool UUIVerticalLayout::GetControlChildWidth() const {
    return false;
}

bool UUIVerticalLayout::GetControlChildHeight() const {
    return false;
}

ELGUILayoutAlignmentType UUIVerticalLayout::GetAlign() const {
    return ELGUILayoutAlignmentType::UpperLeft;
}

float UUIVerticalLayout::GetActuralRange() const {
    return 0.0f;
}


