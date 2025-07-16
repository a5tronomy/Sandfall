#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangePipelineBase.h"
#include "EInterchangeMaterialImportOption.h"
#include "EInterchangeMaterialSearchLocation.h"
#include "InterchangeGenericMaterialPipeline.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangeGenericTexturePipeline;

UCLASS(EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PipelineDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeMaterialSearchLocation SearchLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeMaterialImportOption MaterialImport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIdentifyDuplicateMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCreateMaterialInstanceForParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath ParentMaterial;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInterchangeGenericTexturePipeline* TexturePipeline;
    
protected:
    UPROPERTY()
    UInterchangeBaseNodeContainer* BaseNodeContainer;
    
public:
    UInterchangeGenericMaterialPipeline();

};

