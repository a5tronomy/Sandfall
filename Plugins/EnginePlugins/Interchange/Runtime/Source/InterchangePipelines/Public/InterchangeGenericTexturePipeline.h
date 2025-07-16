#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelineBase.h"
#include "InterchangeGenericTexturePipeline.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS(EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGenericTexturePipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PipelineDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AssetName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bAllowNonPowerOfTwo;
    
private:
    UPROPERTY()
    UInterchangeBaseNodeContainer* BaseNodeContainer;
    
public:
    UInterchangeGenericTexturePipeline();

};

