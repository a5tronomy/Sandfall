#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangePipelineBase.h"
#include "InterchangeGenericAssetsPipeline.generated.h"

class UInterchangeGenericAnimationPipeline;
class UInterchangeGenericCommonMeshesProperties;
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties;
class UInterchangeGenericMaterialPipeline;
class UInterchangeGenericMeshPipeline;

UCLASS(EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PipelineDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EReimportStrategyFlags ReimportStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSourceNameForAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ImportOffsetTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ImportOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImportOffsetUniformScale;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInterchangeGenericCommonMeshesProperties* CommonMeshesProperties;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* CommonSkeletalMeshesAndAnimationsProperties;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInterchangeGenericMeshPipeline* MeshPipeline;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInterchangeGenericAnimationPipeline* AnimationPipeline;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UInterchangeGenericMaterialPipeline* MaterialPipeline;
    
    UInterchangeGenericAssetsPipeline();

};

