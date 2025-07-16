#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_ChineseDragonBoneRotationOffset.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ChineseDragonBoneRotationOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FRotator> Custom_Bone_Rotation_Offset;
    
    DRAGONIKPLUGIN_API FDragonData_ChineseDragonBoneRotationOffset();
};

