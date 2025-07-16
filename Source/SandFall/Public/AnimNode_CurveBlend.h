#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_CurveBlend.generated.h"

class UCurveBlendingProfile;

USTRUCT(BlueprintType)
struct SANDFALL_API FAnimNode_CurveBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BlendPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveBlendingProfile* BlendingProfile;
    
    FAnimNode_CurveBlend();
};

