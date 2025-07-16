#include "InterchangeVariantSetNode.h"

UInterchangeVariantSetNode::UInterchangeVariantSetNode() {
}

bool UInterchangeVariantSetNode::SetCustomVariantsPayloadKey(const FString& PayloadKey) {
    return false;
}

bool UInterchangeVariantSetNode::SetCustomDisplayText(const FString& AttributeValue) {
    return false;
}

bool UInterchangeVariantSetNode::RemoveCustomDependencyUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeVariantSetNode::GetCustomVariantsPayloadKey(FString& PayloadKey) const {
    return false;
}

bool UInterchangeVariantSetNode::GetCustomDisplayText(FString& AttributeValue) const {
    return false;
}

void UInterchangeVariantSetNode::GetCustomDependencyUids(TArray<FString>& OutDependencyUids) const {
}

int32 UInterchangeVariantSetNode::GetCustomDependencyUidCount() const {
    return 0;
}

void UInterchangeVariantSetNode::GetCustomDependencyUid(const int32 Index, FString& OutDependencyUid) const {
}

bool UInterchangeVariantSetNode::AddCustomDependencyUid(const FString& DependencyUid) {
    return false;
}


