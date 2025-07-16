#include "InterchangeGenericAssetsPipeline.h"
#include "InterchangeGenericAnimationPipeline.h"
#include "InterchangeGenericCommonMeshesProperties.h"
#include "InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.h"
#include "InterchangeGenericMaterialPipeline.h"
#include "InterchangeGenericMeshPipeline.h"

UInterchangeGenericAssetsPipeline::UInterchangeGenericAssetsPipeline() {
    this->ReimportStrategy = EReimportStrategyFlags::ApplyNoProperties;
    this->bUseSourceNameForAsset = true;
    this->ImportOffsetUniformScale = 1.00f;
    this->CommonMeshesProperties = CreateDefaultSubobject<UInterchangeGenericCommonMeshesProperties>(TEXT("CommonMeshesProperties"));
    this->CommonSkeletalMeshesAndAnimationsProperties = CreateDefaultSubobject<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>(TEXT("CommonSkeletalMeshesAndAnimationsProperties"));
    this->MeshPipeline = CreateDefaultSubobject<UInterchangeGenericMeshPipeline>(TEXT("MeshPipeline"));
    this->AnimationPipeline = CreateDefaultSubobject<UInterchangeGenericAnimationPipeline>(TEXT("AnimationPipeline"));
    this->MaterialPipeline = CreateDefaultSubobject<UInterchangeGenericMaterialPipeline>(TEXT("MaterialPipeline"));
}


