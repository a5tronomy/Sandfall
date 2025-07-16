#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Animation/BoneReference.h"
#include "AnimNode_AdjustFootToGround.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FAnimNode_AdjustFootToGround : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreGroundBelowFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GroundLevelZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitKneeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBackBendedKnees;
    
    FAnimNode_AdjustFootToGround();
};

