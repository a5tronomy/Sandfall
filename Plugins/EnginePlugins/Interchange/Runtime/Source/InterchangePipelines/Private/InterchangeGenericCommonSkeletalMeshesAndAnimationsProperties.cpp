#include "InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.h"

UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties() {
    this->bImportOnlyAnimations = false;
    this->bImportMeshesInBoneHierarchy = true;
    this->bUseT0AsRefPose = false;
    this->bConvertStaticsWithMorphTargetsToSkeletals = false;
}


