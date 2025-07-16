#include "OVRLipSyncPlaybackActorComponent.h"

UOVRLipSyncPlaybackActorComponent::UOVRLipSyncPlaybackActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sequence = NULL;
    this->AudioComponent = NULL;
}

void UOVRLipSyncPlaybackActorComponent::Stop() {
}

void UOVRLipSyncPlaybackActorComponent::Start(UAudioComponent* InAudioComponent, UOVRLipSyncFrameSequence* InSequence) {
}

void UOVRLipSyncPlaybackActorComponent::SetPlaybackSequence(UOVRLipSyncFrameSequence* InSequence) {
}


