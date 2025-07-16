#include "UIHorizontalLayout.h"

UUIHorizontalLayout::UUIHorizontalLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spacing = 0.00f;
    this->Align = ELGUILayoutAlignmentType::UpperLeft;
    this->ControlChildWidth = true;
    this->ControlChildHeight = true;
    this->ExpandChildWidthArea = false;
    this->ExpandChildHeightArea = false;
    this->WidthFitToChildren = false;
    this->HeightFitToChildren = false;
    this->HeightFitToChildrenFromMinToMax = 1.00f;
    this->UseChildScaleOnWidth = false;
}

void UUIHorizontalLayout::SetWidthFitToChildren(bool Value) {
}

void UUIHorizontalLayout::SetUseChildScaleOnWidth(bool Value) {
}

void UUIHorizontalLayout::SetSpacing(float Value) {
}

void UUIHorizontalLayout::SetPadding(FMargin Value) {
}

void UUIHorizontalLayout::SetHeightFitToChildrenFromMinToMax(float Value) {
}

void UUIHorizontalLayout::SetHeightFitToChildren(bool Value) {
}

void UUIHorizontalLayout::SetExpendChildrenWidth(bool Value) {
}

void UUIHorizontalLayout::SetExpendChildrenHeight(bool Value) {
}

void UUIHorizontalLayout::SetExpandChildWidthArea(bool Value) {
}

void UUIHorizontalLayout::SetExpandChildHeightArea(bool Value) {
}

void UUIHorizontalLayout::SetControlChildWidth(bool Value) {
}

void UUIHorizontalLayout::SetControlChildHeight(bool Value) {
}

void UUIHorizontalLayout::SetAlign(ELGUILayoutAlignmentType Value) {
}

bool UUIHorizontalLayout::GetWidthFitToChildren() const {
    return false;
}

bool UUIHorizontalLayout::GetUseChildScaleOnWidth() const {
    return false;
}

float UUIHorizontalLayout::GetSpacing() const {
    return 0.0f;
}

FMargin UUIHorizontalLayout::GetPadding() const {
    return FMargin{};
}

float UUIHorizontalLayout::GetHeightFitToChildrenFromMinToMax() const {
    return 0.0f;
}

bool UUIHorizontalLayout::GetHeightFitToChildren() const {
    return false;
}

bool UUIHorizontalLayout::GetExpendChildrenWidth() const {
    return false;
}

bool UUIHorizontalLayout::GetExpendChildrenHeight() const {
    return false;
}

bool UUIHorizontalLayout::GetExpandChildWidthArea() const {
    return false;
}

bool UUIHorizontalLayout::GetExpandChildHeightArea() const {
    return false;
}

bool UUIHorizontalLayout::GetControlChildWidth() const {
    return false;
}

bool UUIHorizontalLayout::GetControlChildHeight() const {
    return false;
}

ELGUILayoutAlignmentType UUIHorizontalLayout::GetAlign() const {
    return ELGUILayoutAlignmentType::UpperLeft;
}

float UUIHorizontalLayout::GetActuralRange() const {
    return 0.0f;
}


