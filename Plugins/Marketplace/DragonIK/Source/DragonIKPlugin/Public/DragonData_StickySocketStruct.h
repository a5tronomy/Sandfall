#pragma once
#include "CoreMinimal.h"
#include "Animation/BoneSocketReference.h"
#include "DragonData_StickySocketStruct.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_StickySocketStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneSocketTarget> sticky_socket_array;
    
    DRAGONIKPLUGIN_API FDragonData_StickySocketStruct();
};

