#include "InterchangeLightFactoryNode.h"

UInterchangeLightFactoryNode::UInterchangeLightFactoryNode() {
}

bool UInterchangeLightFactoryNode::SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightFactoryNode::SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightFactoryNode::SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightFactoryNode::SetCustomIESTexture(const FString& AttributeValue) {
    return false;
}

bool UInterchangeLightFactoryNode::SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightFactoryNode::SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightFactoryNode::GetCustomUseIESBrightness(bool& AttributeValue) const {
    return false;
}

bool UInterchangeLightFactoryNode::GetCustomRotation(FRotator& AttributeValue) const {
    return false;
}

bool UInterchangeLightFactoryNode::GetCustomIntensityUnits(ELightUnits& AttributeValue) const {
    return false;
}

bool UInterchangeLightFactoryNode::GetCustomIESTexture(FString& AttributeValue) const {
    return false;
}

bool UInterchangeLightFactoryNode::GetCustomIESBrightnessScale(float& AttributeValue) const {
    return false;
}

bool UInterchangeLightFactoryNode::GetCustomAttenuationRadius(float& AttributeValue) const {
    return false;
}


