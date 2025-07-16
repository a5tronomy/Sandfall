#include "UIPanelLayout_VerticalBox.h"

UUIPanelLayout_VerticalBox::UUIPanelLayout_VerticalBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWidthFitToChildren = false;
    this->WidthFitToChildrenFromMinToMax = 1.00f;
    this->bHeightFitToChildren = false;
}

void UUIPanelLayout_VerticalBox::SetWidthFitToChildrenFromMinToMax(float Value) {
}

void UUIPanelLayout_VerticalBox::SetWidthFitToChildren(bool Value) {
}

void UUIPanelLayout_VerticalBox::SetHeightFitToChildren(bool Value) {
}

float UUIPanelLayout_VerticalBox::GetWidthFitToChildrenFromMinToMax() const {
    return 0.0f;
}

bool UUIPanelLayout_VerticalBox::GetWidthFitToChildren() const {
    return false;
}

bool UUIPanelLayout_VerticalBox::GetHeightFitToChildren() const {
    return false;
}


