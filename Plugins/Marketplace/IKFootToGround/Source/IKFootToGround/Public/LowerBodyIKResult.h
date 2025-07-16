#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LowerBodyIKResult.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FLowerBodyIKResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector PelvisLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector PelvisRelativeLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator PelvisRelativeRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform FootRightTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform FootLeftTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform FootRightTransform_CS;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform FootLeftTransform_CS;
    
    UPROPERTY(BlueprintReadOnly)
    FVector UpperBodyOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector KneeRightJointTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector KneeLeftJointTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector KneeRightJointTarget_CS;
    
    UPROPERTY(BlueprintReadOnly)
    FVector KneeLeftJointTarget_CS;
    
    FLowerBodyIKResult();
};

