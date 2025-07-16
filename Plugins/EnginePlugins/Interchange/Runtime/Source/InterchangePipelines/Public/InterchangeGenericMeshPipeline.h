#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangePipelineBase.h"
#include "InterchangeSkeletalMeshFactoryNode.h"
#include "InterchangeGenericMeshPipeline.generated.h"

class UInterchangeGenericCommonMeshesProperties;
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties;
class UPhysicsAsset;
class UStaticMesh;

UCLASS(EditInlineNew, HideDropdown)
class INTERCHANGEPIPELINES_API UInterchangeGenericMeshPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties> CommonMeshesProperties;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> CommonSkeletalMeshesAndAnimationsProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCombineStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LODGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportCollisionAccordingToMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOneConvexHullPerUCX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBuildNanite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBuildReversedIndexBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGenerateLightmapUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGenerateDistanceFieldAsIfTwoSided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSupportFaceRemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SrcLightmapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DstLightmapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BuildScale3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFieldResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UStaticMesh> DistanceFieldReplacementMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxLumenMeshCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeSkeletalMeshContentType SkeletalMeshImportContentType;
    
    UPROPERTY()
    EInterchangeSkeletalMeshContentType LastSkeletalMeshImportContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCombineSkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportVertexAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateSkeletonReferencePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCreatePhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UPhysicsAsset> PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHighPrecisionSkinWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdTangentNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MorphThresholdPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BoneInfluenceLimit;
    
    UInterchangeGenericMeshPipeline();

};

