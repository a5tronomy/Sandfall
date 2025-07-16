#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.h"
#include "InterchangeAnimationTrackBaseNode.h"
#include "InterchangeSkeletalAnimationTrackNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletalAnimationTrackNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationStopTime(const double& StopTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationStartTime(const double& StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationSampleRate(const double& SampleRate);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimationPayloadKeyForSceneNodeUid(const FString& SceneNodeUid, const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimationPayloadKeyForMorphTargetNodeUid(const FString& MorphTargetNodeUid, const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    
    UFUNCTION(BlueprintPure)
    void GetSceneNodeAnimationPayloadKeys(TMap<FString, FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, uint8>& OutSceneNodeAnimationPayloadKeyTypes) const;
    
    UFUNCTION(BlueprintPure)
    void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, uint8>& OutMorphTargetNodeAnimationPayloadKeyTypes) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletonNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimationStopTime(double& StopTime) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimationStartTime(double& StartTime) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimationSampleRate(double& SampleRate) const;
    
};

