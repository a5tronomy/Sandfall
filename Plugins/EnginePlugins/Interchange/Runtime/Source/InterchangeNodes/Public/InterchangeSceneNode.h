#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeSceneNode.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS()
class INTERCHANGENODES_API UInterchangeSceneNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTargetCurveWeight(const FString& MorphTargetName, const float& Weight);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTimeZeroLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGeometricTransform(const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBindPoseLocalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAssetInstanceUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationAssetUidToPlay(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSpecializedType(const FString& SpecializedType);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintPure)
    bool IsSpecializedTypeContains(const FString& SpecializedType) const;
    
    UFUNCTION(BlueprintPure)
    void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSpecializedTypeCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetSpecializedType(const int32 Index, FString& OutSpecializedType) const;
    
    UFUNCTION(BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintPure)
    void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTimeZeroGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGeometricTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBindPoseGlobalTransform(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAssetInstanceUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSpecializedType(const FString& SpecializedType);
    
};

