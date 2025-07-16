#include "InterchangeAnimationTrackNode.h"

UInterchangeAnimationTrackNode::UInterchangeAnimationTrackNode() {
}

bool UInterchangeAnimationTrackNode::SetCustomTargetedProperty(const int32& TargetedProperty) {
    return false;
}

bool UInterchangeAnimationTrackNode::SetCustomPropertyTrack(const FName& PropertyTrack) {
    return false;
}

bool UInterchangeAnimationTrackNode::SetCustomFrameCount(const int32& AttributeValue) {
    return false;
}

bool UInterchangeAnimationTrackNode::SetCustomAnimationPayloadKey(const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType) {
    return false;
}

bool UInterchangeAnimationTrackNode::SetCustomActorDependencyUid(const FString& DependencyUid) {
    return false;
}

bool UInterchangeAnimationTrackNode::GetCustomTargetedProperty(int32& TargetedProperty) const {
    return false;
}

bool UInterchangeAnimationTrackNode::GetCustomPropertyTrack(FName& PropertyTrack) const {
    return false;
}

bool UInterchangeAnimationTrackNode::GetCustomFrameCount(int32& AttributeValue) const {
    return false;
}

bool UInterchangeAnimationTrackNode::GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey) const {
    return false;
}

bool UInterchangeAnimationTrackNode::GetCustomActorDependencyUid(FString& DependencyUid) const {
    return false;
}


