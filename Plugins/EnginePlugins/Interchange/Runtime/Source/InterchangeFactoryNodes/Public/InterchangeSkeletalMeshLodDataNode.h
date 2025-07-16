#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeSkeletalMeshLodDataNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletalMeshLodDataNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllMeshes();
    
    UFUNCTION(BlueprintPure)
    int32 GetMeshUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletonUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddMeshUid(const FString& MeshName);
    
};

