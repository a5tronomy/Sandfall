#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneOrientationTransform.h"
#include "LegIKSetup.generated.h"

USTRUCT()
struct IKFOOTTOGROUND_API FLegIKSetup {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform LegOrientationConverter;
    
    UPROPERTY()
    FTransform JointTargetOffset;
    
    UPROPERTY()
    FBoneOrientationTransform FootOrientation;
    
    UPROPERTY()
    FTransform FootOrientationFix;
    
    FLegIKSetup();
};

