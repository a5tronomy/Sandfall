#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangePipelineBase.h"
#include "EInterchangeAnimationRange.h"
#include "InterchangeGenericAnimationPipeline.generated.h"

class UInterchangeGenericCommonMeshesProperties;
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties;

UCLASS(EditInlineNew, HideDropdown)
class INTERCHANGEPIPELINES_API UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> CommonSkeletalMeshesAndAnimationsProperties;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties> CommonMeshesProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportBoneTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterchangeAnimationRange AnimationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInt32Interval FrameImportRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUse30HzToBakeBoneAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CustomBoneAnimationSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSnapToClosestFrameBoundary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImportCustomAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAddCurveMetadataToSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetMaterialDriveParameterOnCustomAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> MaterialCurveSuffixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemoveCurveRedundantKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDoNotImportCurveWithZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteExistingNonCurveCustomAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteExistingCustomAttributeCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeleteExistingMorphTargetCurves;
    
    UPROPERTY()
    FString SourceAnimationName;
    
private:
    UPROPERTY()
    bool bSceneImport;
    
public:
    UInterchangeGenericAnimationPipeline();

};

