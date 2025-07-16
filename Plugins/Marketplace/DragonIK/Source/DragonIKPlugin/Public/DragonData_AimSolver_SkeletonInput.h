#pragma once
#include "CoreMinimal.h"
#include "DragonData_AimSolver_SkeletonInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_AimSolver_SkeletonInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Bone_Input;
    
    DRAGONIKPLUGIN_API FDragonData_AimSolver_SkeletonInput();
};

