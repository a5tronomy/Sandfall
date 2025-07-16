#include "InterchangeShaderNode.h"

UInterchangeShaderNode::UInterchangeShaderNode() {
}

bool UInterchangeShaderNode::SetCustomShaderType(const FString& AttributeValue) {
    return false;
}

bool UInterchangeShaderNode::GetCustomShaderType(FString& AttributeValue) const {
    return false;
}

bool UInterchangeShaderNode::AddStringInput(const FString& InputName, const FString& AttributeValue, bool bIsAParameter) {
    return false;
}

bool UInterchangeShaderNode::AddLinearColorInput(const FString& InputName, const FLinearColor& AttributeValue, bool bIsAParameter) {
    return false;
}

bool UInterchangeShaderNode::AddFloatInput(const FString& InputName, const float& AttributeValue, bool bIsAParameter) {
    return false;
}


