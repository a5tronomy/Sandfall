#include "InterchangeTexture2DFactoryNode.h"

UInterchangeTexture2DFactoryNode::UInterchangeTexture2DFactoryNode() {
}

void UInterchangeTexture2DFactoryNode::SetSourceBlocks(const TMap<int32, FString>& InSourceBlocks) {
}

void UInterchangeTexture2DFactoryNode::SetSourceBlockByCoordinates(int32 X, int32 Y, const FString& InSourceFile) {
}

void UInterchangeTexture2DFactoryNode::SetSourceBlock(int32 BlockIndex, const FString& InSourceFile) {
}

bool UInterchangeTexture2DFactoryNode::SetCustomAddressY(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeTexture2DFactoryNode::SetCustomAddressX(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate) {
    return false;
}

TMap<int32, FString> UInterchangeTexture2DFactoryNode::GetSourceBlocks() const {
    return TMap<int32, FString>();
}

bool UInterchangeTexture2DFactoryNode::GetSourceBlockByCoordinates(int32 X, int32 Y, FString& OutSourceFile) const {
    return false;
}

bool UInterchangeTexture2DFactoryNode::GetSourceBlock(int32 BlockIndex, FString& OutSourceFile) const {
    return false;
}

bool UInterchangeTexture2DFactoryNode::GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue) const {
    return false;
}

bool UInterchangeTexture2DFactoryNode::GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue) const {
    return false;
}


