#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeAnimationTrackSetNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackSetNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameRate(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFrameRate(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCustomAnimationTrackUidCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomAnimationTrackUid(const FString& AnimationTrackUid);
    
};

