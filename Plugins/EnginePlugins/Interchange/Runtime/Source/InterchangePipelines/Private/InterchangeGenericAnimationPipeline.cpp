#include "InterchangeGenericAnimationPipeline.h"

UInterchangeGenericAnimationPipeline::UInterchangeGenericAnimationPipeline() {
    this->bImportAnimations = true;
    this->bImportBoneTracks = true;
    this->AnimationRange = EInterchangeAnimationRange::Timeline;
    this->bUse30HzToBakeBoneAnimation = false;
    this->CustomBoneAnimationSampleRate = 0;
    this->bSnapToClosestFrameBoundary = false;
    this->bImportCustomAttribute = true;
    this->bAddCurveMetadataToSkeleton = true;
    this->bSetMaterialDriveParameterOnCustomAttribute = false;
    this->MaterialCurveSuffixes.AddDefaulted(1);
    this->bRemoveCurveRedundantKeys = false;
    this->bDoNotImportCurveWithZero = false;
    this->bDeleteExistingNonCurveCustomAttributes = false;
    this->bDeleteExistingCustomAttributeCurves = false;
    this->bDeleteExistingMorphTargetCurves = false;
    this->bSceneImport = false;
}


