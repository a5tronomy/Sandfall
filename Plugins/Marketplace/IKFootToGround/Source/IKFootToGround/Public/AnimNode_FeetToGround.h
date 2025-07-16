#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/BoneReference.h"
#include "Engine/EngineTypes.h"
#include "Animation/AnimNodeBase.h"
#include "EAxisDirection.h"
#include "AnimNode_FeetToGround.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FAnimNode_FeetToGround : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink Pose;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Pelvis;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FootRight;
    
    UPROPERTY(EditAnywhere)
    FBoneReference FootLeft;
    
    UPROPERTY(EditAnywhere)
    FBoneReference IkRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAxisDirection CharacterForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceAsObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceRightLegToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceLeftLegToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PelvisInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeUpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CharacterVelocityOverride;
    
    FAnimNode_FeetToGround();
};

