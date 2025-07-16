#include "UIStaticMesh.h"

UUIStaticMesh::UUIStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->meshCache = NULL;
    this->vertexColorType = UIStaticMeshVertexColorType::NotAffectByUIColor;
    this->ReplaceMaterial = NULL;
}

void UUIStaticMesh::SetVertexColorType(UIStaticMeshVertexColorType Value) {
}

void UUIStaticMesh::SetReplaceMaterial(UMaterialInterface* Value) {
}

void UUIStaticMesh::SetMesh(ULGUIStaticMeshCacheData* Value) {
}

UIStaticMeshVertexColorType UUIStaticMesh::GetVertexColorType() const {
    return UIStaticMeshVertexColorType::MultiplyWithUIColor;
}

UMaterialInterface* UUIStaticMesh::GetReplaceMaterial() const {
    return NULL;
}

UMaterialInterface* UUIStaticMesh::GetRenderMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UUIStaticMesh::GetOrCreateDynamicMaterialInstance() {
    return NULL;
}

ULGUIStaticMeshCacheData* UUIStaticMesh::GetMeshCache() const {
    return NULL;
}


