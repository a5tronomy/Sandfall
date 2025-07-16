#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeLevelSequenceFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeLevelSequenceFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameRate(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomAnimationTrackUid(const FString& AnimationTrackUid);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
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

