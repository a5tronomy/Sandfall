#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_CurveModifyIntensity.generated.h"

class UCurveModifyIntensityProfile;

USTRUCT(BlueprintType)
struct SANDFALL_API FAnimNode_CurveModifyIntensity : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveModifyIntensityProfile* IntensityProfile;
    
    FAnimNode_CurveModifyIntensity();
};

