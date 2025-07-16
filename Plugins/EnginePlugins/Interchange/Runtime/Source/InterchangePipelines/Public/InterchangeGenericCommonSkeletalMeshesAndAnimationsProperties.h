#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelineBase.h"
#include "InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.generated.h"

class USkeleton;

UCLASS(EditInlineNew, HideDropdown)
class INTERCHANGEPIPELINES_API UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportOnlyAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<USkeleton> Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportMeshesInBoneHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseT0AsRefPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bConvertStaticsWithMorphTargetsToSkeletals;
    
    UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties();

};

