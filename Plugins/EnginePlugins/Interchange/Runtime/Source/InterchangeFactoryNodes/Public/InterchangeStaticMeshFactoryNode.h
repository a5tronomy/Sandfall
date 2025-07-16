#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InterchangeMeshFactoryNode.h"
#include "InterchangeStaticMeshFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeStaticMeshFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSupportFaceRemap(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSrcLightmapIndex(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMinLightmapResolution(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMaxLumenMeshCards(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGenerateLightmapUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGenerateDistanceFieldAsIfTwoSided(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDstLightmapIndex(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDistanceFieldResolutionScale(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDistanceFieldReplacementMesh(const FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBuildScale3D(const FVector& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBuildReversedIndexBuffer(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBuildNanite(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSocketUd(const FString& SocketUid);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStaticMeshNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintPure)
    void GetSocketUids(TArray<FString>& OutSocketUids) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSocketUidCount() const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSupportFaceRemap(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSrcLightmapIndex(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMinLightmapResolution(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMaxLumenMeshCards(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGenerateLightmapUVs(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDstLightmapIndex(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDistanceFieldResolutionScale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBuildScale3D(FVector& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBuildNanite(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSocketUids(const TArray<FString>& InSocketUids);
    
    UFUNCTION(BlueprintCallable)
    bool AddSocketUid(const FString& SocketUid);
    
};

