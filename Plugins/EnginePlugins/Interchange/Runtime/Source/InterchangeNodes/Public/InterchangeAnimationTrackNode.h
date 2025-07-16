#pragma once
#include "CoreMinimal.h"
#include "EInterchangeAnimationPayLoadType.h"
#include "InterchangeAnimationPayLoadKey.h"
#include "InterchangeAnimationTrackBaseNode.h"
#include "InterchangeAnimationTrackNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTargetedProperty(const int32& TargetedProperty);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPropertyTrack(const FName& PropertyTrack);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationPayloadKey(const FString& InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomActorDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTargetedProperty(int32& TargetedProperty) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPropertyTrack(FName& PropertyTrack) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFrameCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomActorDependencyUid(FString& DependencyUid) const;
    
};

