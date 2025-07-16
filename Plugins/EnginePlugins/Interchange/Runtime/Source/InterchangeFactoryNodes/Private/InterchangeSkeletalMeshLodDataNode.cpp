#include "InterchangeSkeletalMeshLodDataNode.h"

UInterchangeSkeletalMeshLodDataNode::UInterchangeSkeletalMeshLodDataNode() {
}

bool UInterchangeSkeletalMeshLodDataNode::SetCustomSkeletonUid(const FString& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshLodDataNode::RemoveMeshUid(const FString& MeshName) {
    return false;
}

bool UInterchangeSkeletalMeshLodDataNode::RemoveAllMeshes() {
    return false;
}

int32 UInterchangeSkeletalMeshLodDataNode::GetMeshUidsCount() const {
    return 0;
}

void UInterchangeSkeletalMeshLodDataNode::GetMeshUids(TArray<FString>& OutMeshNames) const {
}

bool UInterchangeSkeletalMeshLodDataNode::GetCustomSkeletonUid(FString& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshLodDataNode::AddMeshUid(const FString& MeshName) {
    return false;
}


