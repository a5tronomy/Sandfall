#pragma once
#include "CoreMinimal.h"
#include "DragonData_TailBoneInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_TailBoneInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Custom_Bone_Structure;
    
    DRAGONIKPLUGIN_API FDragonData_TailBoneInput();
};

