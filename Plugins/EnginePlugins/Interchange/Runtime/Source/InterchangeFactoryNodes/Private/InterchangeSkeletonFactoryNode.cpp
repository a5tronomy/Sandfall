#include "InterchangeSkeletonFactoryNode.h"

UInterchangeSkeletonFactoryNode::UInterchangeSkeletonFactoryNode() {
}

bool UInterchangeSkeletonFactoryNode::SetCustomUseTimeZeroForBindPose(const bool& AttributeValue) {
    return false;
}

bool UInterchangeSkeletonFactoryNode::SetCustomSkeletalMeshFactoryNodeUid(const FString& AttributeValue) {
    return false;
}

bool UInterchangeSkeletonFactoryNode::SetCustomRootJointUid(const FString& AttributeValue) {
    return false;
}

void UInterchangeSkeletonFactoryNode::InitializeSkeletonNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass) {
}

UClass* UInterchangeSkeletonFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeSkeletonFactoryNode::GetCustomUseTimeZeroForBindPose(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletonFactoryNode::GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletonFactoryNode::GetCustomRootJointUid(FString& AttributeValue) const {
    return false;
}


