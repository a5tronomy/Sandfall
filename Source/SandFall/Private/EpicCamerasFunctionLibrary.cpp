#include "EpicCamerasFunctionLibrary.h"

UEpicCamerasFunctionLibrary::UEpicCamerasFunctionLibrary() {
}

float UEpicCamerasFunctionLibrary::GetRealTimeDilation(UObject* _WorldContextObject) {
    return 0.0f;
}

void UEpicCamerasFunctionLibrary::GetLinearTimeMapFromSequence(ULevelSequence* _sequence, TMap<int32, float>& _linearTimeMap) {
}

FTransform UEpicCamerasFunctionLibrary::GetInitialActorPositionInSequence(ULevelSequence* _sequence, FMovieSceneObjectBindingID _bindingID) {
    return FTransform{};
}

float UEpicCamerasFunctionLibrary::GetCinematicTimeDilation(UObject* _WorldContextObject) {
    return 0.0f;
}

void UEpicCamerasFunctionLibrary::FindQTEKeyframes(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<float>& ImpactTimes) {
}

void UEpicCamerasFunctionLibrary::FindBattleKeyframesInSequence(BattleSequenceKeyframeType _keyframeType, ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<float>& _times) {
}

void UEpicCamerasFunctionLibrary::FindBattleCameraKeyframesInSequenceAsMapFromTrackName(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TMap<float, BattleSequenceCameraType>& _keyframes, const FName _trackName) {
}

void UEpicCamerasFunctionLibrary::FindBattleCameraKeyframesInSequenceAsMap(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TMap<float, BattleSequenceCameraType>& _keyframes, int32 _trackIndex) {
}

void UEpicCamerasFunctionLibrary::FindAllBattleKeyframesInSequenceAsMap(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TMap<float, BattleSequenceKeyframeType>& _keyframes, int32 _trackIndex) {
}

void UEpicCamerasFunctionLibrary::FindAllBattleKeyframesInSequenceAsListFromTrackName(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<FBattleSequenceKeyframe>& _keyframes, const FName _trackName) {
}

void UEpicCamerasFunctionLibrary::FindAllBattleKeyframesInSequenceAsList(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<FBattleSequenceKeyframe>& _keyframes, int32 _trackIndex) {
}

void UEpicCamerasFunctionLibrary::FindAllBattleKeyframesInSequence(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<float>& _skillEffectWithQTETimes, TArray<float>& _skillEffectNoQTETimes, TArray<float>& _explicitComboPromptTimes, TArray<float>& _comboSectionStartTimes, float& _lastComboSectionEnd, TArray<float>& _comboFailSectionStartTimes, TArray<float>& _comboFailSectionEndTimes, TArray<float>& _snapToTargetTimes, TArray<float>& _snapToSourceTimes) {
}


