#pragma once
#include "CoreMinimal.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Units/RigUnit.h"
#include "RigUnit_MetahumanComputeTwist.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FRigUnit_MetahumanComputeTwist : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey StartBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey EndBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey RootCorrective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRigElementKey> TwistBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwingBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> TwistBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> PositionBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTwistFromEnd;
    
    UPROPERTY(Transient)
    FCachedRigElement StartBoneCached;
    
    UPROPERTY(Transient)
    FCachedRigElement EndBoneCached;
    
    UPROPERTY(Transient)
    FCachedRigElement RootCorrectiveCached;
    
    UPROPERTY(Transient)
    TArray<FCachedRigElement> TwistBonesCached;
    
    FRigUnit_MetahumanComputeTwist();
};

