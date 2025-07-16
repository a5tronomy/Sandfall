#include "SF_AnimationBlueprintHelpers.h"

USF_AnimationBlueprintHelpers::USF_AnimationBlueprintHelpers() {
}

void USF_AnimationBlueprintHelpers::GetAnimDataModelBoneTrackData(const TScriptInterface<IAnimationDataModel> DataModel, const FName TrackName, TArray<FVector>& PositionKeys, TArray<FQuat>& RotationKeys, TArray<FVector>& ScalingKeys) {
}

TArray<UAnimMontage*> USF_AnimationBlueprintHelpers::GetAllActiveMontages(UAnimInstance* AnimInstance) {
    return TArray<UAnimMontage*>();
}


