#include "InterchangeAnimationTrackSetNode.h"

UInterchangeAnimationTrackSetNode::UInterchangeAnimationTrackSetNode() {
}

bool UInterchangeAnimationTrackSetNode::SetCustomFrameRate(const float& AttributeValue) {
    return false;
}

bool UInterchangeAnimationTrackSetNode::RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid) {
    return false;
}

bool UInterchangeAnimationTrackSetNode::GetCustomFrameRate(float& AttributeValue) const {
    return false;
}

void UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids) const {
}

int32 UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUidCount() const {
    return 0;
}

void UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid) const {
}

bool UInterchangeAnimationTrackSetNode::AddCustomAnimationTrackUid(const FString& AnimationTrackUid) {
    return false;
}


