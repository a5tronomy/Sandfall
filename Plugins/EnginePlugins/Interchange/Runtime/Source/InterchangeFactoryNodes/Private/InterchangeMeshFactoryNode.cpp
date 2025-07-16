#include "InterchangeMeshFactoryNode.h"

UInterchangeMeshFactoryNode::UInterchangeMeshFactoryNode() {
}

bool UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomVertexColorReplace(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomVertexColorOverride(const FColor& AttributeValue) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomVertexColorIgnore(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomUseMikkTSpace(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomUseHighPrecisionTangentBasis(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomUseFullPrecisionUVs(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomUseBackwardsCompatibleF16TruncUVs(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomRemoveDegenerates(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomRecomputeTangents(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomRecomputeNormals(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomLODGroup(const FName& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomKeepSectionsSeparate(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMeshFactoryNode::SetCustomComputeWeightedNormals(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMeshFactoryNode::ResetSlotMaterialDependencies() {
    return false;
}

bool UInterchangeMeshFactoryNode::RemoveSlotMaterialDependencyUid(const FString& SlotName) {
    return false;
}

bool UInterchangeMeshFactoryNode::RemoveLodDataUniqueId(const FString& LodDataUniqueId) {
    return false;
}

bool UInterchangeMeshFactoryNode::GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const {
    return false;
}

void UInterchangeMeshFactoryNode::GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const {
}

void UInterchangeMeshFactoryNode::GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds) const {
}

int32 UInterchangeMeshFactoryNode::GetLodDataCount() const {
    return 0;
}

bool UInterchangeMeshFactoryNode::GetCustomVertexColorReplace(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomVertexColorOverride(FColor& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomVertexColorIgnore(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomUseMikkTSpace(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomUseFullPrecisionUVs(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomRemoveDegenerates(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomRecomputeTangents(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomRecomputeNormals(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomLODGroup(FName& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomKeepSectionsSeparate(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::GetCustomComputeWeightedNormals(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMeshFactoryNode::AddLodDataUniqueId(const FString& LodDataUniqueId) {
    return false;
}


