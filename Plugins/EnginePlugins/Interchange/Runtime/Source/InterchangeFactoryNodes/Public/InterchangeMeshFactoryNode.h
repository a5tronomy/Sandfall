#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeMeshFactoryNode.generated.h"

UCLASS(Abstract)
class INTERCHANGEFACTORYNODES_API UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMeshFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomVertexColorReplace(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomVertexColorOverride(const FColor& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomVertexColorIgnore(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUseMikkTSpace(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUseHighPrecisionTangentBasis(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUseFullPrecisionUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUseBackwardsCompatibleF16TruncUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRemoveDegenerates(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRecomputeTangents(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRecomputeNormals(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLODGroup(const FName& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomKeepSectionsSeparate(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomComputeWeightedNormals(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool ResetSlotMaterialDependencies();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveLodDataUniqueId(const FString& LodDataUniqueId);
    
    UFUNCTION(BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintPure)
    void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLodDataCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomVertexColorReplace(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomVertexColorOverride(FColor& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomVertexColorIgnore(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseMikkTSpace(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseFullPrecisionUVs(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRemoveDegenerates(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRecomputeTangents(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRecomputeNormals(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLODGroup(FName& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomKeepSectionsSeparate(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomComputeWeightedNormals(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddLodDataUniqueId(const FString& LodDataUniqueId);
    
};

