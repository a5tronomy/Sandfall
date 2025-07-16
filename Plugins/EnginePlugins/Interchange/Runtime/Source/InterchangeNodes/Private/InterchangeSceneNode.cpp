#include "InterchangeSceneNode.h"

UInterchangeSceneNode::UInterchangeSceneNode() {
}

bool UInterchangeSceneNode::SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid) {
    return false;
}

bool UInterchangeSceneNode::SetMorphTargetCurveWeight(const FString& MorphTargetName, const float& Weight) {
    return false;
}

bool UInterchangeSceneNode::SetCustomTimeZeroLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache) {
    return false;
}

bool UInterchangeSceneNode::SetCustomLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache) {
    return false;
}

bool UInterchangeSceneNode::SetCustomGeometricTransform(const FTransform& AttributeValue) {
    return false;
}

bool UInterchangeSceneNode::SetCustomBindPoseLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache) {
    return false;
}

bool UInterchangeSceneNode::SetCustomAssetInstanceUid(const FString& AttributeValue) {
    return false;
}

bool UInterchangeSceneNode::SetCustomAnimationAssetUidToPlay(const FString& AttributeValue) {
    return false;
}

bool UInterchangeSceneNode::RemoveSpecializedType(const FString& SpecializedType) {
    return false;
}

bool UInterchangeSceneNode::RemoveSlotMaterialDependencyUid(const FString& SlotName) {
    return false;
}

bool UInterchangeSceneNode::IsSpecializedTypeContains(const FString& SpecializedType) const {
    return false;
}

void UInterchangeSceneNode::GetSpecializedTypes(TArray<FString>& OutSpecializedTypes) const {
}

int32 UInterchangeSceneNode::GetSpecializedTypeCount() const {
    return 0;
}

void UInterchangeSceneNode::GetSpecializedType(const int32 Index, FString& OutSpecializedType) const {
}

bool UInterchangeSceneNode::GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const {
    return false;
}

void UInterchangeSceneNode::GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const {
}

void UInterchangeSceneNode::GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights) const {
}

bool UInterchangeSceneNode::GetCustomTimeZeroLocalTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomTimeZeroGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomLocalTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomGeometricTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomBindPoseLocalTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomBindPoseGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomAssetInstanceUid(FString& AttributeValue) const {
    return false;
}

bool UInterchangeSceneNode::GetCustomAnimationAssetUidToPlay(FString& AttributeValue) const {
    return false;
}

bool UInterchangeSceneNode::AddSpecializedType(const FString& SpecializedType) {
    return false;
}


