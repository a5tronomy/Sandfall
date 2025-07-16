#include "UIPanelLayout_UniformGrid.h"

UUIPanelLayout_UniformGrid::UUIPanelLayout_UniformGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWidthFitToChildren = false;
    this->WidthFitToChildrenFromMinToMax = 1.00f;
    this->bHeightFitToChildren = false;
    this->HeightFitToChildrenFromMinToMax = 1.00f;
}

void UUIPanelLayout_UniformGrid::SetWidthFitToChildrenFromMinToMax(float Value) {
}

void UUIPanelLayout_UniformGrid::SetWidthFitToChildren(bool Value) {
}

void UUIPanelLayout_UniformGrid::SetHeightFitToChildrenFromMinToMax(float Value) {
}

void UUIPanelLayout_UniformGrid::SetHeightFitToChildren(bool Value) {
}

float UUIPanelLayout_UniformGrid::GetWidthFitToChildrenFromMinToMax() const {
    return 0.0f;
}

bool UUIPanelLayout_UniformGrid::GetWidthFitToChildren() const {
    return false;
}

float UUIPanelLayout_UniformGrid::GetHeightFitToChildrenFromMinToMax() const {
    return 0.0f;
}

bool UUIPanelLayout_UniformGrid::GetHeightFitToChildren() const {
    return false;
}


