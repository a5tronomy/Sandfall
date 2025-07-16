#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeAnimationTrackSetNode.h"
#include "InterchangeAnimSequenceFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimSequenceFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonFactoryNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRemoveCurveRedundantKeys(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMaterialDriveParameterOnCustomAttribute(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracksSampleRate(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracksRangeStop(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracksRangeStart(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportBoneTracks(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportAttributeCurves(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDoNotImportCurveWithZero(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeleteExistingNonCurveCustomAttributes(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeleteExistingMorphTargetCurves(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeleteExistingCustomAttributeCurves(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddCurveMetadataToSkeleton(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationPayloadKeysForSceneNodeUids(const TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, const TMap<FString, uint8>& SceneNodeAnimationPayloadKeyTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationPayloadKeysForMorphTargetNodeUids(const TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, const TMap<FString, uint8>& MorphTargetAnimationPayloadKeyTypes);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimatedMaterialCurveSuffixe(const FString& MaterialCurveSuffixe);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimatedAttributeStepCurveName(const FString& AttributeStepCurveName);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnimatedAttributeCurveName(const FString& AttributeCurveName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAnimatedMaterialCurveSuffixe(const FString& MaterialCurveSuffixe);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAnimatedAttributeStepCurveName(const FString& AttributeStepCurveName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAnimatedAttributeCurveName(const FString& AttributeCurveName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnimSequenceNode(const FString& UniqueID, const FString& DisplayLabel);
    
    UFUNCTION(BlueprintPure)
    void GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys) const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    void GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracksSampleRate(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracksRangeStop(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracksRangeStart(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportBoneTracks(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomImportAttributeCurves(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAnimatedMaterialCurveSuffixesCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes) const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimatedMaterialCurveSuffixe(const int32 Index, FString& OutMaterialCurveSuffixe) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAnimatedAttributeStepCurveNamesCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimatedAttributeStepCurveName(const int32 Index, FString& OutAttributeStepCurveName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAnimatedAttributeCurveNamesCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames) const;
    
    UFUNCTION(BlueprintPure)
    void GetAnimatedAttributeCurveName(const int32 Index, FString& OutAttributeCurveName) const;
    
};

