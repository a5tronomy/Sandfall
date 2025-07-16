#include "UIGeometryModifierBase.h"

UUIGeometryModifierBase::UUIGeometryModifierBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnable = true;
    this->executeOrder = 0;
    this->GeometryModifierHelper = NULL;
}

void UUIGeometryModifierBase::SetExecuteOrder() {
}

void UUIGeometryModifierBase::SetEnable(bool Value) {
}


UUIBatchMeshRenderable* UUIGeometryModifierBase::GetUIRenderable() const {
    return NULL;
}

UUIBatchMeshRenderable* UUIGeometryModifierBase::GetRenderableUIItem() const {
    return NULL;
}

int32 UUIGeometryModifierBase::GetExecuteOrder() const {
    return 0;
}

bool UUIGeometryModifierBase::GetEnable() const {
    return false;
}


