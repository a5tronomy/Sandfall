#include "InterchangeTexture2DNode.h"

UInterchangeTexture2DNode::UInterchangeTexture2DNode() {
}

bool UInterchangeTexture2DNode::SetCustomWrapV(const EInterchangeTextureWrapMode& AttributeValue) {
    return false;
}

bool UInterchangeTexture2DNode::SetCustomWrapU(const EInterchangeTextureWrapMode& AttributeValue) {
    return false;
}

TMap<int32, FString> UInterchangeTexture2DNode::GetSourceBlocks() const {
    return TMap<int32, FString>();
}

bool UInterchangeTexture2DNode::GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue) const {
    return false;
}

bool UInterchangeTexture2DNode::GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue) const {
    return false;
}


