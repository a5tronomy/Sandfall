#include "OVRLipSyncActorComponent.h"

UOVRLipSyncActorComponent::UOVRLipSyncActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SampleRate = 48000;
    this->BufferSize = 4096;
    this->ProviderKind = OVRLipSyncProviderKind::EnhancedWithLaughter;
    this->EnableHardwareAcceleration = true;
}

void UOVRLipSyncActorComponent::Stop() {
}

void UOVRLipSyncActorComponent::Start() {
}

void UOVRLipSyncActorComponent::PermissionCallback(const TArray<FString>& Permissions, const TArray<bool>& GrantResults) {
}

void UOVRLipSyncActorComponent::OnVoiceCaptureTimer() {
}

void UOVRLipSyncActorComponent::FeedAudio(const TArray<uint8>& AudioData) {
}


