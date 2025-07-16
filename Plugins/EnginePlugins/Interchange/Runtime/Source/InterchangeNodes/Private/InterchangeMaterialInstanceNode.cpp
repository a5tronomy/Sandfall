#include "InterchangeMaterialInstanceNode.h"

UInterchangeMaterialInstanceNode::UInterchangeMaterialInstanceNode() {
}

bool UInterchangeMaterialInstanceNode::SetCustomParent(const FString& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialInstanceNode::GetVectorParameterValue(const FString& ParameterName, FLinearColor& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialInstanceNode::GetTextureParameterValue(const FString& ParameterName, FString& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialInstanceNode::GetStaticSwitchParameterValue(const FString& ParameterName, bool& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialInstanceNode::GetScalarParameterValue(const FString& ParameterName, float& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialInstanceNode::GetCustomParent(FString& AttributeValue) const {
    return false;
}

bool UInterchangeMaterialInstanceNode::AddVectorParameterValue(const FString& ParameterName, const FLinearColor& AttributeValue) {
    return false;
}

bool UInterchangeMaterialInstanceNode::AddTextureParameterValue(const FString& ParameterName, const FString& AttributeValue) {
    return false;
}

bool UInterchangeMaterialInstanceNode::AddStaticSwitchParameterValue(const FString& ParameterName, bool AttributeValue) {
    return false;
}

bool UInterchangeMaterialInstanceNode::AddScalarParameterValue(const FString& ParameterName, float AttributeValue) {
    return false;
}


