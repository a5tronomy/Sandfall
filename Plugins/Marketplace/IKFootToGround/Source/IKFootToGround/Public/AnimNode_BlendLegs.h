#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/BoneReference.h"
#include "Animation/AnimNodeBase.h"
#include "EAxisDirection.h"
#include "AnimNode_BlendLegs.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FAnimNode_BlendLegs : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink DestinationPose;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FootRight;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FootLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRightLegFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FootstepAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAxisDirection CharacterForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootMaxLift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootStepPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyToRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceAlpha;
    
    FAnimNode_BlendLegs();
};

