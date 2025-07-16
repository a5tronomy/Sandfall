#include "InterchangeGenericMeshPipeline.h"

UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline() {
    this->bImportStaticMeshes = true;
    this->bCombineStaticMeshes = false;
    this->bImportCollision = true;
    this->bImportCollisionAccordingToMeshName = true;
    this->bOneConvexHullPerUCX = true;
    this->bBuildNanite = false;
    this->bBuildReversedIndexBuffer = true;
    this->bGenerateLightmapUVs = true;
    this->bGenerateDistanceFieldAsIfTwoSided = false;
    this->bSupportFaceRemap = false;
    this->MinLightmapResolution = 64;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 1;
    this->DistanceFieldResolutionScale = 1.00f;
    this->MaxLumenMeshCards = 12;
    this->bImportSkeletalMeshes = true;
    this->SkeletalMeshImportContentType = EInterchangeSkeletalMeshContentType::All;
    this->LastSkeletalMeshImportContentType = EInterchangeSkeletalMeshContentType::All;
    this->bCombineSkeletalMeshes = true;
    this->bImportMorphTargets = true;
    this->bImportVertexAttributes = false;
    this->bUpdateSkeletonReferencePose = false;
    this->bCreatePhysicsAsset = true;
    this->bUseHighPrecisionSkinWeights = false;
    this->ThresholdPosition = 0.00f;
    this->ThresholdTangentNormal = 0.00f;
    this->ThresholdUV = 0.00f;
    this->MorphThresholdPosition = 0.01f;
    this->BoneInfluenceLimit = 0;
}


