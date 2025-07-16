#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EInterchangeSkeletalMeshContentType.h"
#include "InterchangeMeshFactoryNode.h"
#include "InterchangeSkeletalMeshFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletalMeshFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseHighPrecisionSkinWeights(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomThresholdUV(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomThresholdTangentNormal(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPhysicAssetSoftObjectPath(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMorphThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportVertexAttributes(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportMorphTarget(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportContentType(const EInterchangeSkeletalMeshContentType& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCreatePhysicsAsset(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBoneInfluenceLimit(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSkeletalMeshNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomThresholdUV(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomThresholdTangentNormal(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomThresholdPosition(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMorphThresholdPosition(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportVertexAttributes(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportMorphTarget(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCreatePhysicsAsset(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBoneInfluenceLimit(int32& AttributeValue) const;
    
};

