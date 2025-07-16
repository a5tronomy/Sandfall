#include "InterchangeMeshNode.h"

UInterchangeMeshNode::UInterchangeMeshNode() {
}

bool UInterchangeMeshNode::SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid) {
    return false;
}

bool UInterchangeMeshNode::SetSkinnedMesh(const bool bIsSkinnedMesh) {
    return false;
}

bool UInterchangeMeshNode::SetSkeletonDependencyUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeMeshNode::SetSceneInstanceUid(const FString& DependencyUid) {
    return false;
}

void UInterchangeMeshNode::SetPayLoadKey(const FString& PayloadKey, const EInterchangeMeshPayLoadType& PayloadType) {
}

bool UInterchangeMeshNode::SetMorphTargetName(const FString& MorphTargetName) {
    return false;
}

bool UInterchangeMeshNode::SetMorphTargetDependencyUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeMeshNode::SetMorphTarget(const bool bIsMorphTarget) {
    return false;
}

bool UInterchangeMeshNode::SetCustomVertexCount(const int32& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomUVCount(const int32& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomPolygonCount(const int32& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomHasVertexTangent(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomHasVertexNormal(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomHasVertexColor(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomHasVertexBinormal(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomHasSmoothGroup(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::SetCustomBoundingBox(const FBox& AttributeValue) {
    return false;
}

bool UInterchangeMeshNode::RemoveSlotMaterialDependencyUid(const FString& SlotName) {
    return false;
}

bool UInterchangeMeshNode::RemoveSkeletonDependencyUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeMeshNode::RemoveSceneInstanceUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeMeshNode::RemoveMorphTargetDependencyUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeMeshNode::IsSkinnedMesh() const {
    return false;
}

bool UInterchangeMeshNode::IsMorphTarget() const {
    return false;
}

bool UInterchangeMeshNode::GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const {
    return false;
}

void UInterchangeMeshNode::GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const {
}

void UInterchangeMeshNode::GetSkeletonDependency(const int32 Index, FString& OutDependency) const {
}

void UInterchangeMeshNode::GetSkeletonDependencies(TArray<FString>& OutDependencies) const {
}

int32 UInterchangeMeshNode::GetSkeletonDependeciesCount() const {
    return 0;
}

int32 UInterchangeMeshNode::GetSceneInstanceUidsCount() const {
    return 0;
}

void UInterchangeMeshNode::GetSceneInstanceUids(TArray<FString>& OutDependencies) const {
}

void UInterchangeMeshNode::GetSceneInstanceUid(const int32 Index, FString& OutDependency) const {
}

bool UInterchangeMeshNode::GetMorphTargetName(FString& OutMorphTargetName) const {
    return false;
}

void UInterchangeMeshNode::GetMorphTargetDependency(const int32 Index, FString& OutDependency) const {
}

void UInterchangeMeshNode::GetMorphTargetDependencies(TArray<FString>& OutDependencies) const {
}

int32 UInterchangeMeshNode::GetMorphTargetDependeciesCount() const {
    return 0;
}

bool UInterchangeMeshNode::GetCustomVertexCount(int32& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomUVCount(int32& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomPolygonCount(int32& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomHasVertexTangent(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomHasVertexNormal(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomHasVertexColor(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomHasVertexBinormal(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomHasSmoothGroup(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshNode::GetCustomBoundingBox(FBox& AttributeValue) const {
    return false;
}


