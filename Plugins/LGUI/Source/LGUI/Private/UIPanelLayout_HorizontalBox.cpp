#include "UIPanelLayout_HorizontalBox.h"

UUIPanelLayout_HorizontalBox::UUIPanelLayout_HorizontalBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWidthFitToChildren = false;
    this->bHeightFitToChildren = false;
    this->HeightFitToChildrenFromMinToMax = 1.00f;
}

void UUIPanelLayout_HorizontalBox::SetWidthFitToChildren(bool Value) {
}

void UUIPanelLayout_HorizontalBox::SetHeightFitToChildrenFromMinToMax(float Value) {
}

void UUIPanelLayout_HorizontalBox::SetHeightFitToChildren(bool Value) {
}

bool UUIPanelLayout_HorizontalBox::GetWidthFitToChildren() const {
    return false;
}

float UUIPanelLayout_HorizontalBox::GetHeightFitToChildrenFromMinToMax() const {
    return 0.0f;
}

bool UUIPanelLayout_HorizontalBox::GetHeightFitToChildren() const {
    return false;
}


