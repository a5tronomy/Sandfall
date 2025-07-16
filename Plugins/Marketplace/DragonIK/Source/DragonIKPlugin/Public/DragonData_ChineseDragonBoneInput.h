#pragma once
#include "CoreMinimal.h"
#include "DragonData_ChineseDragonBoneInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ChineseDragonBoneInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> Custom_Bone_Structure;
    
    DRAGONIKPLUGIN_API FDragonData_ChineseDragonBoneInput();
};

