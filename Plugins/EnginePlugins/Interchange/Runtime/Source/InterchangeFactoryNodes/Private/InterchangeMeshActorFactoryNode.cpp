#include "InterchangeMeshActorFactoryNode.h"

UInterchangeMeshActorFactoryNode::UInterchangeMeshActorFactoryNode() {
}

bool UInterchangeMeshActorFactoryNode::SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid) {
    return false;
}

bool UInterchangeMeshActorFactoryNode::SetCustomGeometricTransform(const FTransform& AttributeValue) {
    return false;
}

bool UInterchangeMeshActorFactoryNode::SetCustomAnimationAssetUidToPlay(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMeshActorFactoryNode::RemoveSlotMaterialDependencyUid(const FString& SlotName) {
    return false;
}

bool UInterchangeMeshActorFactoryNode::GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const {
    return false;
}

void UInterchangeMeshActorFactoryNode::GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const {
}

bool UInterchangeMeshActorFactoryNode::GetCustomGeometricTransform(FTransform& AttributeValue) const {
    return false;
}

bool UInterchangeMeshActorFactoryNode::GetCustomAnimationAssetUidToPlay(FString& AttributeValue) const {
    return false;
}


