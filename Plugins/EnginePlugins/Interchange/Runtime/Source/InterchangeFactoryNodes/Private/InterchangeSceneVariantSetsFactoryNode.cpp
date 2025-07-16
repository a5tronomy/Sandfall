#include "InterchangeSceneVariantSetsFactoryNode.h"

UInterchangeSceneVariantSetsFactoryNode::UInterchangeSceneVariantSetsFactoryNode() {
}

bool UInterchangeSceneVariantSetsFactoryNode::RemoveCustomVariantSetUid(const FString& VariantUid) {
    return false;
}

UClass* UInterchangeSceneVariantSetsFactoryNode::GetObjectClass() const {
    return NULL;
}

void UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUids(TArray<FString>& OutVariantUids) const {
}

int32 UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUidCount() const {
    return 0;
}

void UInterchangeSceneVariantSetsFactoryNode::GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid) const {
}

bool UInterchangeSceneVariantSetsFactoryNode::AddCustomVariantSetUid(const FString& VariantUid) {
    return false;
}


