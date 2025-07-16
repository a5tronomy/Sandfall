#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangePhysicsAssetFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangePhysicsAssetFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletalMeshUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializePhysicsAssetNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletalMeshUid(FString& AttributeValue) const;
    
};

