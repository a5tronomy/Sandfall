#include "InterchangeSkeletalMeshFactoryNode.h"

UInterchangeSkeletalMeshFactoryNode::UInterchangeSkeletalMeshFactoryNode() {
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomUseHighPrecisionSkinWeights(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdUV(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdTangentNormal(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomPhysicAssetSoftObjectPath(const FSoftObjectPath& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomMorphThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomImportVertexAttributes(const bool& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomImportMorphTarget(const bool& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomImportContentType(const EInterchangeSkeletalMeshContentType& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomCreatePhysicsAsset(const bool& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::SetCustomBoneInfluenceLimit(const int32& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

void UInterchangeSkeletalMeshFactoryNode::InitializeSkeletalMeshNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass) {
}

UClass* UInterchangeSkeletalMeshFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomThresholdUV(float& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomThresholdTangentNormal(float& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomThresholdPosition(float& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomMorphThresholdPosition(float& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomImportVertexAttributes(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomImportMorphTarget(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomCreatePhysicsAsset(bool& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalMeshFactoryNode::GetCustomBoneInfluenceLimit(int32& AttributeValue) const {
    return false;
}


