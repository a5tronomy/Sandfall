#include "InterchangeGenericLevelPipeline.h"

UInterchangeGenericLevelPipeline::UInterchangeGenericLevelPipeline() {
    this->ReimportPropertyStrategy = EReimportStrategyFlags::ApplyNoProperties;
    this->bDeleteMissingActors = false;
    this->bForceReimportDeletedActors = false;
    this->bForceReimportDeletedAssets = false;
    this->bDeleteMissingAssets = false;
    this->bUsePhysicalInsteadOfStandardPerspectiveCamera = true;
}


