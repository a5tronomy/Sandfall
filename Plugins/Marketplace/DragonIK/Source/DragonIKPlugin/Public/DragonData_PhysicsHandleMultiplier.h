#pragma once
#include "CoreMinimal.h"
#include "DragonData_PhysicsHandleMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_PhysicsHandleMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float bone_strength;
    
    DRAGONIKPLUGIN_API FDragonData_PhysicsHandleMultiplier();
};

