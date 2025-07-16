#include "InterchangeLevelSequenceFactoryNode.h"

UInterchangeLevelSequenceFactoryNode::UInterchangeLevelSequenceFactoryNode() {
}

bool UInterchangeLevelSequenceFactoryNode::SetCustomFrameRate(const float& AttributeValue) {
    return false;
}

bool UInterchangeLevelSequenceFactoryNode::RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid) {
    return false;
}

UClass* UInterchangeLevelSequenceFactoryNode::GetObjectClass() const {
    return NULL;
}

bool UInterchangeLevelSequenceFactoryNode::GetCustomFrameRate(float& AttributeValue) const {
    return false;
}

void UInterchangeLevelSequenceFactoryNode::GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids) const {
}

int32 UInterchangeLevelSequenceFactoryNode::GetCustomAnimationTrackUidCount() const {
    return 0;
}

void UInterchangeLevelSequenceFactoryNode::GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid) const {
}

bool UInterchangeLevelSequenceFactoryNode::AddCustomAnimationTrackUid(const FString& AnimationTrackUid) {
    return false;
}


