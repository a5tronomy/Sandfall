#include "InterchangeGenericMaterialPipeline.h"
#include "InterchangeGenericTexturePipeline.h"

UInterchangeGenericMaterialPipeline::UInterchangeGenericMaterialPipeline() {
    this->bImportMaterials = true;
    this->SearchLocation = EInterchangeMaterialSearchLocation::Local;
    this->MaterialImport = EInterchangeMaterialImportOption::ImportAsMaterials;
    this->bIdentifyDuplicateMaterials = false;
    this->bCreateMaterialInstanceForParent = false;
    this->TexturePipeline = CreateDefaultSubobject<UInterchangeGenericTexturePipeline>(TEXT("TexturePipeline"));
    this->BaseNodeContainer = NULL;
}


