#include "InterchangePhysicsAssetFactoryNode.h"

UInterchangePhysicsAssetFactoryNode::UInterchangePhysicsAssetFactoryNode() {
}

bool UInterchangePhysicsAssetFactoryNode::SetCustomSkeletalMeshUid(const FString& AttributeValue) {
    return false;
}

void UInterchangePhysicsAssetFactoryNode::InitializePhysicsAssetNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass) {
}

UClass* UInterchangePhysicsAssetFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangePhysicsAssetFactoryNode::GetCustomSkeletalMeshUid(FString& AttributeValue) const {
    return false;
}


