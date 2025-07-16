#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangePipelineBase.h"
#include "EInterchangeForceMeshType.h"
#include "EInterchangeVertexColorImportOption.h"
#include "InterchangeGenericCommonMeshesProperties.generated.h"

UCLASS(EditInlineNew, HideDropdown)
class INTERCHANGEPIPELINES_API UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeForceMeshType ForceAllMeshAsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoDetectMeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportLods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBakeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeepSectionsSeparate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeVertexColorImportOption VertexColorImportOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor VertexOverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecomputeNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecomputeTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMikkTSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bComputeWeightedNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHighPrecisionTangentBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFullPrecisionUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBackwardsCompatibleF16TruncUVs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemoveDegenerates;
    
    UInterchangeGenericCommonMeshesProperties();

};

