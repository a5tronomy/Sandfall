#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeSkeletonFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletonFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseTimeZeroForBindPose(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletalMeshFactoryNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRootJointUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSkeletonNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRootJointUid(FString& AttributeValue) const;
    
};

