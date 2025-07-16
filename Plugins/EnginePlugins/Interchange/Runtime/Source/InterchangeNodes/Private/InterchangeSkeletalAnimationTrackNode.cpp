#include "InterchangeSkeletalAnimationTrackNode.h"

UInterchangeSkeletalAnimationTrackNode::UInterchangeSkeletalAnimationTrackNode() {
}

bool UInterchangeSkeletalAnimationTrackNode::SetCustomSkeletonNodeUid(const FString& AttributeValue) {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStopTime(const double& StopTime) {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationStartTime(const double& StartTime) {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::SetCustomAnimationSampleRate(const double& SampleRate) {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForSceneNodeUid(const FString& SceneNodeUid, const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType) {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::SetAnimationPayloadKeyForMorphTargetNodeUid(const FString& MorphTargetNodeUid, const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType) {
    return false;
}

void UInterchangeSkeletalAnimationTrackNode::GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, uint8>& OutSceneNodeAnimationPayloadKeyTypes) const {
}

void UInterchangeSkeletalAnimationTrackNode::GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, uint8>& OutMorphTargetNodeAnimationPayloadKeyTypes) const {
}

bool UInterchangeSkeletalAnimationTrackNode::GetCustomSkeletonNodeUid(FString& AttributeValue) const {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStopTime(double& StopTime) const {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationStartTime(double& StartTime) const {
    return false;
}

bool UInterchangeSkeletalAnimationTrackNode::GetCustomAnimationSampleRate(double& SampleRate) const {
    return false;
}


