#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneReference.h"
#include "DragonData_PhysicsBoneStrip.generated.h"

USTRUCT()
struct FDragonData_PhysicsBoneStrip {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Bone_Chain_Start;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Bone_Chain_End;
    
    DRAGONIKPLUGIN_API FDragonData_PhysicsBoneStrip();
};

