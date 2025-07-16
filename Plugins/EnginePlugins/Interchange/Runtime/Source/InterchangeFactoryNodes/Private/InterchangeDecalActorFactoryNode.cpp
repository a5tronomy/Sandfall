#include "InterchangeDecalActorFactoryNode.h"

UInterchangeDecalActorFactoryNode::UInterchangeDecalActorFactoryNode() {
}

bool UInterchangeDecalActorFactoryNode::SetCustomSortOrder(const int32& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeDecalActorFactoryNode::SetCustomDecalSize(const FVector& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeDecalActorFactoryNode::SetCustomDecalMaterialPathName(const FString& AttributeValue) {
    return false;
}

UClass* UInterchangeDecalActorFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeDecalActorFactoryNode::GetCustomSortOrder(int32& AttributeValue) const {
    return false;
}

bool UInterchangeDecalActorFactoryNode::GetCustomDecalSize(FVector& AttributeValue) const {
    return false;
}

bool UInterchangeDecalActorFactoryNode::GetCustomDecalMaterialPathName(FString& AttributeValue) const {
    return false;
}


