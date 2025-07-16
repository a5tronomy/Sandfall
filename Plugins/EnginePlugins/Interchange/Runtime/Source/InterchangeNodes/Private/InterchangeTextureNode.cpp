#include "InterchangeTextureNode.h"

UInterchangeTextureNode::UInterchangeTextureNode() {
}

void UInterchangeTextureNode::SetPayLoadKey(const FString& PayloadKey) {
}

bool UInterchangeTextureNode::SetCustomSRGB(const bool& AttributeValue) {
    return false;
}

bool UInterchangeTextureNode::SetCustomFilter(const EInterchangeTextureFilterMode& AttributeValue) {
    return false;
}

bool UInterchangeTextureNode::SetCustombFlipGreenChannel(const bool& AttributeValue) {
    return false;
}

bool UInterchangeTextureNode::GetCustomSRGB(bool& AttributeValue) const {
    return false;
}

bool UInterchangeTextureNode::GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue) const {
    return false;
}

bool UInterchangeTextureNode::GetCustombFlipGreenChannel(bool& AttributeValue) const {
    return false;
}


