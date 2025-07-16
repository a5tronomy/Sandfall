#include "UIBatchMeshRenderable.h"

UUIBatchMeshRenderable::UUIBatchMeshRenderable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomUIMaterial = NULL;
    this->GeometryHelper = NULL;
}

void UUIBatchMeshRenderable::SetCustomUIMaterial(UMaterialInterface* InMat) {
}





void UUIBatchMeshRenderable::MarkVerticesDirty() {
}

UMaterialInstanceDynamic* UUIBatchMeshRenderable::GetMaterialInstanceDynamic() const {
    return NULL;
}

UMaterialInterface* UUIBatchMeshRenderable::GetCustomUIMaterial() const {
    return NULL;
}


