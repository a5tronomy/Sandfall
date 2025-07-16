#include "UIPanelLayoutSlotBase.h"

UUIPanelLayoutSlotBase::UUIPanelLayoutSlotBase() {
    this->bIgnoreLayout = false;
}

void UUIPanelLayoutSlotBase::SetIgnoreLayout(bool Value) {
}

void UUIPanelLayoutSlotBase::SetDesiredSize(const FVector2D& Value) {
}

bool UUIPanelLayoutSlotBase::GetIgnoreLayout() const {
    return false;
}

FVector2D UUIPanelLayoutSlotBase::GetDesiredSize() const {
    return FVector2D{};
}


