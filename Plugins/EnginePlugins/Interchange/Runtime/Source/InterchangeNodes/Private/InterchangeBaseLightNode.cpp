#include "InterchangeBaseLightNode.h"

UInterchangeBaseLightNode::UInterchangeBaseLightNode() {
}

bool UInterchangeBaseLightNode::SetCustomUseTemperature(bool AttributeValue) {
    return false;
}

bool UInterchangeBaseLightNode::SetCustomTemperature(float AttributeValue) {
    return false;
}

bool UInterchangeBaseLightNode::SetCustomLightColor(const FLinearColor& AttributeValue) {
    return false;
}

bool UInterchangeBaseLightNode::SetCustomIntensity(float AttributeValue) {
    return false;
}

bool UInterchangeBaseLightNode::GetCustomUseTemperature(bool& AttributeValue) const {
    return false;
}

bool UInterchangeBaseLightNode::GetCustomTemperature(float& AttributeValue) const {
    return false;
}

bool UInterchangeBaseLightNode::GetCustomLightColor(FLinearColor& AttributeValue) const {
    return false;
}

bool UInterchangeBaseLightNode::GetCustomIntensity(float& AttributeValue) const {
    return false;
}


