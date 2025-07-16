#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelineMeshesUtilitiesContext.generated.h"

USTRUCT(BlueprintType)
struct FInterchangePipelineMeshesUtilitiesContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConvertStaticMeshToSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConvertSkeletalMeshToStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConvertStaticsWithMorphTargetsToSkeletals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportMeshesInBoneHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bQueryGeometryOnlyIfNoInstance;
    
    INTERCHANGEPIPELINES_API FInterchangePipelineMeshesUtilitiesContext();
};

