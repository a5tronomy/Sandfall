#include "OVRLipSyncActorComponentBase.h"

UOVRLipSyncActorComponentBase::UOVRLipSyncActorComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<float> UOVRLipSyncActorComponentBase::GetVisemes() const {
    return TArray<float>();
}

TArray<FString> UOVRLipSyncActorComponentBase::GetVisemeNames() const {
    return TArray<FString>();
}

float UOVRLipSyncActorComponentBase::GetLaughterScore() const {
    return 0.0f;
}

void UOVRLipSyncActorComponentBase::AssignVisemesToMorphTargets(USkeletalMeshComponent* Mesh, const TArray<FString>& MorphTargetNames) {
}


