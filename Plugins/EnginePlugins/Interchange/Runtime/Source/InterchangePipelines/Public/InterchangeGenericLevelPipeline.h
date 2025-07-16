#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangePipelineBase.h"
#include "InterchangeGenericLevelPipeline.generated.h"

UCLASS(EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGenericLevelPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PipelineDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EReimportStrategyFlags ReimportPropertyStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteMissingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceReimportDeletedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceReimportDeletedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteMissingAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePhysicalInsteadOfStandardPerspectiveCamera;
    
public:
    UInterchangeGenericLevelPipeline();

};

