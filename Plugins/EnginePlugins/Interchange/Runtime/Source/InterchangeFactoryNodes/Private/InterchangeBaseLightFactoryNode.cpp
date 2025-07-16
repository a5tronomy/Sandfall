#include "InterchangeBaseLightFactoryNode.h"

UInterchangeBaseLightFactoryNode::UInterchangeBaseLightFactoryNode() {
}

bool UInterchangeBaseLightFactoryNode::SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeBaseLightFactoryNode::SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeBaseLightFactoryNode::SetCustomLightColor(const FColor& AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeBaseLightFactoryNode::SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate) {
    return false;
}

bool UInterchangeBaseLightFactoryNode::GetCustomUseTemperature(bool& AttributeValue) const {
    return false;
}

bool UInterchangeBaseLightFactoryNode::GetCustomTemperature(float& AttributeValue) const {
    return false;
}

bool UInterchangeBaseLightFactoryNode::GetCustomLightColor(FColor& AttributeValue) const {
    return false;
}

bool UInterchangeBaseLightFactoryNode::GetCustomIntensity(float& AttributeValue) const {
    return false;
}


