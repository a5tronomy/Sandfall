#include "InterchangeGenericCommonMeshesProperties.h"

UInterchangeGenericCommonMeshesProperties::UInterchangeGenericCommonMeshesProperties() {
    this->ForceAllMeshAsType = EInterchangeForceMeshType::IFMT_None;
    this->bAutoDetectMeshType = true;
    this->bImportLods = true;
    this->bBakeMeshes = true;
    this->bKeepSectionsSeparate = false;
    this->VertexColorImportOption = EInterchangeVertexColorImportOption::IVCIO_Replace;
    this->bRecomputeNormals = true;
    this->bRecomputeTangents = true;
    this->bUseMikkTSpace = true;
    this->bComputeWeightedNormals = false;
    this->bUseHighPrecisionTangentBasis = false;
    this->bUseFullPrecisionUVs = false;
    this->bUseBackwardsCompatibleF16TruncUVs = false;
    this->bRemoveDegenerates = false;
}


