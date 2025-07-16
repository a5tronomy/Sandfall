#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieSceneObjectBindingID.h"
#include "BattleSequenceCameraType.h"
#include "BattleSequenceKeyframe.h"
#include "BattleSequenceKeyframeType.h"
#include "EpicCamerasFunctionLibrary.generated.h"

class ULevelSequence;
class UObject;

UCLASS(BlueprintType)
class SANDFALL_API UEpicCamerasFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEpicCamerasFunctionLibrary();

private:
    UFUNCTION(BlueprintPure, meta=(WorldContext="_WorldContextObject"))
    static float GetRealTimeDilation(UObject* _WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetLinearTimeMapFromSequence(ULevelSequence* _sequence, TMap<int32, float>& _linearTimeMap);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetInitialActorPositionInSequence(ULevelSequence* _sequence, FMovieSceneObjectBindingID _bindingID);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_WorldContextObject"))
    static float GetCinematicTimeDilation(UObject* _WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FindQTEKeyframes(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<float>& ImpactTimes);
    
    UFUNCTION(BlueprintCallable)
    static void FindBattleKeyframesInSequence(BattleSequenceKeyframeType _keyframeType, ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<float>& _times);
    
    UFUNCTION(BlueprintCallable)
    static void FindBattleCameraKeyframesInSequenceAsMapFromTrackName(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TMap<float, BattleSequenceCameraType>& _keyframes, const FName _trackName);
    
    UFUNCTION(BlueprintCallable)
    static void FindBattleCameraKeyframesInSequenceAsMap(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TMap<float, BattleSequenceCameraType>& _keyframes, int32 _trackIndex);
    
    UFUNCTION(BlueprintCallable)
    static void FindAllBattleKeyframesInSequenceAsMap(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TMap<float, BattleSequenceKeyframeType>& _keyframes, int32 _trackIndex);
    
    UFUNCTION(BlueprintCallable)
    static void FindAllBattleKeyframesInSequenceAsListFromTrackName(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<FBattleSequenceKeyframe>& _keyframes, const FName _trackName);
    
    UFUNCTION(BlueprintCallable)
    static void FindAllBattleKeyframesInSequenceAsList(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<FBattleSequenceKeyframe>& _keyframes, int32 _trackIndex);
    
    UFUNCTION(BlueprintCallable)
    static void FindAllBattleKeyframesInSequence(ULevelSequence* _sequence, FMovieSceneObjectBindingID _actorBindingID, TArray<float>& _skillEffectWithQTETimes, TArray<float>& _skillEffectNoQTETimes, TArray<float>& _explicitComboPromptTimes, TArray<float>& _comboSectionStartTimes, float& _lastComboSectionEnd, TArray<float>& _comboFailSectionStartTimes, TArray<float>& _comboFailSectionEndTimes, TArray<float>& _snapToTargetTimes, TArray<float>& _snapToSourceTimes);
    
};

