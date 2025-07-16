#include "InterchangeMaterialFactoryNode.h"

UInterchangeMaterialFactoryNode::UInterchangeMaterialFactoryNode() {
}

bool UInterchangeMaterialFactoryNode::SetCustomTwoSided(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMaterialFactoryNode::SetCustomTranslucencyLightingMode(const TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMaterialFactoryNode::SetCustomShadingModel(const TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMaterialFactoryNode::SetCustomScreenSpaceReflections(const bool& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::SetCustomRefractionMethod(const TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMaterialFactoryNode::SetCustomOpacityMaskClipValue(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMaterialFactoryNode::SetCustomBlendMode(const TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

UClass* UInterchangeMaterialFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeMaterialFactoryNode::GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomTwoSided(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomScreenSpaceReflections(bool& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomOpacityMaskClipValue(float& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetClothConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName) const {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToTransmissionColor(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToTangent(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToSubsurface(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToSpecular(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToRoughness(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToRefraction(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToOpacity(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToOcclusion(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToNormal(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToMetallic(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToFuzzColor(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToEmissiveColor(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToCloth(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToClearCoatRoughness(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToClearCoatNormal(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToClearCoat(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToBaseColor(const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectToAnisotropy(const FString& ExpressionNodeUid) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToTransmissionColor(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToTangent(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToSubsurface(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToSpecular(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToRoughness(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToRefraction(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToOpacity(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToOcclusion(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToNormal(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToMetallic(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToFuzzColor(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToEmissiveColor(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToCloth(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToClearCoatRoughness(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToClearCoatNormal(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToClearCoat(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToBaseColor(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}

bool UInterchangeMaterialFactoryNode::ConnectOutputToAnisotropy(const FString& ExpressionNodeUid, const FString& OutputName) {
    return false;
}


