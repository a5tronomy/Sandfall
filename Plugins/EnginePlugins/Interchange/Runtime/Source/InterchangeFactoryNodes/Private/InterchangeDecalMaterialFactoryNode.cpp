#include "InterchangeDecalMaterialFactoryNode.h"

UInterchangeDecalMaterialFactoryNode::UInterchangeDecalMaterialFactoryNode() {
}

bool UInterchangeDecalMaterialFactoryNode::SetCustomNormalTexturePath(const FString& AttributeValue) {
    return false;
}

bool UInterchangeDecalMaterialFactoryNode::SetCustomDiffuseTexturePath(const FString& AttributeValue) {
    return false;
}

UClass* UInterchangeDecalMaterialFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeDecalMaterialFactoryNode::GetCustomNormalTexturePath(FString& AttributeValue) const {
    return false;
}

bool UInterchangeDecalMaterialFactoryNode::GetCustomDiffuseTexturePath(FString& AttributeValue) const {
    return false;
}


