#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNode.h"
#include "EInterchangeMeshPayLoadType.h"
#include "InterchangeMeshNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeMeshNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMeshNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkinnedMesh(const bool bIsSkinnedMesh);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkeletonDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetSceneInstanceUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    void SetPayLoadKey(const FString& PayloadKey, const EInterchangeMeshPayLoadType& PayloadType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTargetName(const FString& MorphTargetName);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTargetDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTarget(const bool bIsMorphTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomVertexCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUVCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPolygonCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexTangent(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexNormal(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexColor(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexBinormal(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasSmoothGroup(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBoundingBox(const FBox& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSkeletonDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSceneInstanceUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMorphTargetDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintPure)
    bool IsSkinnedMesh() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMorphTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintPure)
    void GetSkeletonDependency(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintPure)
    void GetSkeletonDependencies(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSkeletonDependeciesCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSceneInstanceUidsCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetSceneInstanceUids(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintPure)
    void GetSceneInstanceUid(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintPure)
    bool GetMorphTargetName(FString& OutMorphTargetName) const;
    
    UFUNCTION(BlueprintPure)
    void GetMorphTargetDependency(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintPure)
    void GetMorphTargetDependencies(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMorphTargetDependeciesCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomVertexCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUVCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPolygonCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomHasVertexTangent(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomHasVertexNormal(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomHasVertexColor(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomHasVertexBinormal(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomHasSmoothGroup(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBoundingBox(FBox& AttributeValue) const;
    
};

