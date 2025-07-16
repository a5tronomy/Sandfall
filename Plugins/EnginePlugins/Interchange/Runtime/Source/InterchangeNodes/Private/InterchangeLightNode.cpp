#include "InterchangeLightNode.h"

UInterchangeLightNode::UInterchangeLightNode() {
}

bool UInterchangeLightNode::SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightNode::SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightNode::SetCustomIntensityUnits(const EInterchangeLightUnits& AttributeValue) {
    return false;
}

bool UInterchangeLightNode::SetCustomIESTexture(const FString& AttributeValue) {
    return false;
}

bool UInterchangeLightNode::SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeLightNode::SetCustomAttenuationRadius(float AttributeValue) {
    return false;
}

bool UInterchangeLightNode::GetCustomUseIESBrightness(bool& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomRotation(FRotator& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomIESTexture(FString& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomIESBrightnessScale(float& AttributeValue) const {
    return false;
}

bool UInterchangeLightNode::GetCustomAttenuationRadius(float& AttributeValue) const {
    return false;
}


