#include "InterchangePipelineMeshesUtilitiesContext.h"

FInterchangePipelineMeshesUtilitiesContext::FInterchangePipelineMeshesUtilitiesContext() {
    this->bConvertStaticMeshToSkeletalMesh = false;
    this->bConvertSkeletalMeshToStaticMesh = false;
    this->bConvertStaticsWithMorphTargetsToSkeletals = false;
    this->bImportMeshesInBoneHierarchy = false;
    this->bQueryGeometryOnlyIfNoInstance = false;
}

