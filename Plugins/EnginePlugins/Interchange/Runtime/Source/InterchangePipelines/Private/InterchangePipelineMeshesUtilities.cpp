#include "InterchangePipelineMeshesUtilities.h"

UInterchangePipelineMeshesUtilities::UInterchangePipelineMeshesUtilities() {
}

void UInterchangePipelineMeshesUtilities::SetContext(const FInterchangePipelineMeshesUtilitiesContext& Context) const {
}

bool UInterchangePipelineMeshesUtilities::IsValidMeshInstanceUid(const FString& MeshInstanceUid) const {
    return false;
}

bool UInterchangePipelineMeshesUtilities::IsValidMeshGeometryUid(const FString& MeshGeometryUid) const {
    return false;
}

FString UInterchangePipelineMeshesUtilities::GetMeshInstanceSkeletonRootUid(const FString& MeshInstanceUid) const {
    return TEXT("");
}

FInterchangeMeshInstance UInterchangePipelineMeshesUtilities::GetMeshInstanceByUid(const FString& MeshInstanceUid) const {
    return FInterchangeMeshInstance{};
}

FString UInterchangePipelineMeshesUtilities::GetMeshGeometrySkeletonRootUid(const FString& MeshGeometryUid) const {
    return TEXT("");
}

FInterchangeMeshGeometry UInterchangePipelineMeshesUtilities::GetMeshGeometryByUid(const FString& MeshGeometryUid) const {
    return FInterchangeMeshGeometry{};
}

void UInterchangePipelineMeshesUtilities::GetAllStaticMeshInstance(TArray<FString>& MeshInstanceUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllStaticMeshGeometry(TArray<FString>& MeshGeometryUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshInstance(TArray<FString>& MeshInstanceUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshGeometry(TArray<FString>& MeshGeometryUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllMeshInstanceUidsUsingMeshGeometryUid(const FString& MeshGeometryUid, TArray<FString>& MeshInstanceUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllMeshInstanceUids(TArray<FString>& MeshInstanceUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllMeshGeometryNotInstanced(TArray<FString>& MeshGeometryUids) const {
}

void UInterchangePipelineMeshesUtilities::GetAllMeshGeometry(TArray<FString>& MeshGeometryUids) const {
}

UInterchangePipelineMeshesUtilities* UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities(UInterchangeBaseNodeContainer* BaseNodeContainer) {
    return NULL;
}


