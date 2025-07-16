#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeStaticMeshLodDataNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeStaticMeshLodDataNode();

    UFUNCTION(BlueprintCallable)
    bool SetOneConvexHullPerUCX(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetImportCollision(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSphereCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConvexCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCapsuleCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBoxCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllSphereCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllConvexCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllCapsuleCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllBoxCollisionMeshes();
    
    UFUNCTION(BlueprintPure)
    int32 GetSphereCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintPure)
    bool GetOneConvexHullPerUCX(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMeshUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintPure)
    bool GetImportCollision(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetConvexCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCapsuleCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBoxCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSphereCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddConvexCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddCapsuleCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddBoxCollisionMeshUid(const FString& MeshName);
    
};

